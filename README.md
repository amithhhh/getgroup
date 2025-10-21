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
```


# 📜 Project License & Philosophy

<div align="center">

![License](https://img.shields.io/badge/License-GPLv3-blue.svg)
![Open Source](https://img.shields.io/badge/Open%20Source-❤️-red.svg)
![FOSS](https://img.shields.io/badge/Free%20Software-✓-green.svg)

**Freedom to use, study, modify, and share**

</div>

## 🛡️ License Information

This project is licensed under the **GNU General Public License version 3 (GPLv3)**.

### 📋 What This Means For You

| Freedom | Description |
|---------|-------------|
| **🎯 Use** | Use this software for any purpose - personal, educational, or commercial |
| **🔍 Study** | Examine the source code to understand how it works |
| **⚡ Modify** | Adapt and change the software to meet your needs |
| **📤 Share** | Distribute original or modified versions to others |

### ⚖️ Obligations Under GPLv3

- **Same License**: Any redistribution must remain under GPLv3
- **License Preservation**: Include this license information with all copies
- **Source Availability**: Provide access to source code for derivatives
- **Freedom Protection**: Ensure software and derivatives remain free for everyone

## 🌟 Why GPLv3?

> "I chose GPLv3 because it aligns with my belief in software freedom."

This license ensures that:

- 🛡️ **Software remains open and accessible to all**
- 🤝 **Contributors share improvements back to the community**
- 🔄 **The principles of software freedom continue to guide new generations**

## 🎯 Project Philosophy

<div align="center">

*"Free software is a matter of liberty, not price."*  
— **Richard Stallman**

</div>

### 🙏 Acknowledgments

| Contributor | Impact |
|-------------|--------|
| **Richard Stallman** | For starting the Free Software Foundation and defining the philosophy of software freedom |
| **Linus Torvalds** | For creating Linux and demonstrating how collaboration can change the world |
| **Every FOSS Developer** | For believing in sharing knowledge freely and building a better digital future |

## 👨‍💻 About the Author

**Amith E.K.**  
*Beginner in Free and Open Source Contribution*

> **"Working hard to make the FOSS world beautiful."**

## 💌 Get Involved

<div align="center">

### 📧 Let's Connect!

**Feel free to share feedback, suggestions, or improvements!**

Let's continue spreading the freedom that makes open-source special.

[![Contributions Welcome](https://img.shields.io/badge/Contributions-Welcome-brightgreen.svg)]()
[![Feedback Welcome](https://img.shields.io/badge/Feedback-Encouraged-yellow.svg)]()

</div>

---

<div align="center">

### 📄 Full License Text

For the complete license terms, see the **[LICENSE](link)** file.

**"Software freedom is the foundation of a free society."**

</div>
