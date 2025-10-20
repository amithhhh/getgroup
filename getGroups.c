#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include <grp.h>

int main(int argc, char *argv[]) {
	struct passwd *pw;
	char *username;

	if (argc != 2) {
		pw = getpwuid(getuid());
		username = pw->pw_name;
	} else {
		username = argv[1];
		pw = getpwnam(username);
		if (pw == NULL) {
			fprintf(stderr, "User '%s' not found.\n", username);
			return 1;
		}
	}
	
	gid_t groups[128];
	int ngroups = 128;
	int i;


	if (getgrouplist(username, pw->pw_gid, groups, &ngroups) == -1) {
		perror("getgrouplist");
		return 1;
	}
	printf("User %s belongs to %d groups:\n", pw->pw_name, ngroups);

	for (i = 0; i < ngroups; i++) {
		struct group *gr = getgrgid(groups[i]);
		if (gr)
			printf(" %s (%d)\n", gr->gr_name, groups[i]);
		else
			printf("Unknown (%d)\n", groups[i]);
	}
	return 0;

}
