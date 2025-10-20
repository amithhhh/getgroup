# 🐧 getgroups

A lightweight Linux command-line utility written in **C** that displays all the groups a user belongs to — clean, simple, and free.

---

## 💬 About This Project

Hello there!  
I’m **Amith E.K.**, a passionate beginner exploring the world of **Free and Open Source Software (FOSS)**.  
This project — `getgroups` — is my small contribution to that world.

I deeply respect the vision of **Richard Stallman**, who started the Free Software movement, and **Linus Torvalds**, who gave us the Linux kernel — both of whom have inspired generations of developers, including me.

I’m still new to publishing and committing projects to the open-source world, but I believe that every contribution, no matter how small, makes a difference.  
I’ll keep working hard to help make the **free and open-source world beautiful, inclusive, and powerful**. 💪

Let’s continue the deep ideas set by Richard Stallman and keep the spirit of freedom alive in technology.  
**Let’s make the free and open-source world great again!**

---

## 🌍 Philosophy

This project follows the true spirit of FOSS:

> *"You are free to use, study, modify, and share this software with everyone."*

Anyone is welcome to:
- ✅ Use this code  
- 🔧 Modify it  
- 🔁 Redistribute it  
- 📤 Improve it  

...under the terms of the **GNU General Public License (GPL v3)**.

Together, let’s build a world where software is truly free — as in *freedom*.

---

## ⚙️ How It Works

The `getgroups` command is a simple C program that:

1. Detects the **current user** (or takes another username as input).
2. Uses the system call `getgrouplist()` to retrieve all groups that user belongs to.
3. Displays both the **group names** and their corresponding **Group IDs (GIDs)**.
4. Works seamlessly across all major Linux distributions.

It’s a lightweight, educational utility that helps you understand how Linux handles **user-group mapping** at the system level.

---

## 🧠 Usage

### 🏗️ Compilation

To compile from source, run:

```bash
gcc getgroups.c -o getgroups
