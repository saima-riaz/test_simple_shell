# **C - Simple Shell** :shell:

## **DESCRIPTION** :book:

Shell scripts allow us to program commands in chains and have the system execute them as a scripted event, just like batch files. They also allow for far more useful functions, such as command substitution. You can invoke a command, like date, and use it’s output as part of a file-naming scheme. You can automate backups and each copied file can have the current date appended to the end of its name. Scripts aren’t just invocations of commands, either. They’re programs in their own right. Scripting allows you to use programming functions — such as ‘for’ loops, if/then/else statements, and so forth — directly within your operating system’s interface.
![This is an image](https://zupimages.net/up/23/33/vsp9.gif)

# ***Functions and system calls authorized*** :

* ```access``` (man 2 access)
* ```chdir``` (man 2 chdir)
* ```close``` (man 2 close)
* ```closedir``` (man 3 closedir)
* ```execve``` (man 2 execve) 
* ```exit``` (man 3 exit)
* ```_exit``` (man 2 _exit) :bricks:
* ```fflush``` (man 3 fflush)
* ```fork``` (man 2 fork) :bricks:
* ```free``` (man 3 free) :bricks:
* ```getcwd``` (man 3 getcwd)
* ```getline``` (man 3 getline) :bricks:
* ```getpid``` (man 2 getpid)
* ```isatty``` (man 3 isatty)
* ```kill``` (man 2 kill)
* ```malloc``` (man 3 malloc) 
* ```open``` (man 2 open)
* ```opendir``` (man 3 opendir)
* ```perror``` (man 3 perror)
* ```printf``` (man 3 printf) 
* ```fprintf``` (man 3 fprintf) 
* ```vfprintf``` (man 3 vfprintf)
* ```sprintf``` (man 3 sprintf)
* ```putchar``` (man 3 putchar)
* ```read``` (man 2 read) 
* ```readdir``` (man 3 readdir)
* ```signal``` (man 2 signal) :bricks:
* ```stat``` (__xstat) (man 2 stat)
* ```lstat``` (__lxstat) (man 2 lstat)
* ```fstat``` (__fxstat) (man 2 fstat) 
* ```strtok``` (man 3 strtok) :bricks:
* ```wait``` (man 2 wait)
* ```waitpid``` (man 2 waitpid)
* ```wait3``` (man 2 wait3)
* ```wait4``` (man 2 wait4)
* ```write``` (man 2 write) 

# **Project Files List**

|***File***|***Description***|
|---|---|
|AUTHORS|Contributors in this repository|
|README.md|Detailed description of our project|
|strok.c| Parse_string ( function that parses string)|
|string.c|Contains _strlen (length of a string)  / _strdup (returns a pointer to a newly allocated)/ _strcmp (compare two strings)|
|shell_main.c|Contains _getline  (used to read a string or a line)/ _fork(creating a new process)/ sig_handler (checks if Ctrl C is pressed by the input)|
|shell.h|Prototypes functions and headers|
|getline.c|Contains _getline2 (used to read a string or a line)/ _signal (function to handle signal)|
|_exit.c| _exit (terminates the process)|
|man_1_simple_shell|Manual page our of Simple Shell|


# **EXEMPLE**

```
 ($) ls
AUTHORS    builtin.c            handler_non_inter_func.c  helpers_strings2.c  main.c
README.md  execute_functions.c  helpers_strings.c         hsh                 man_1_simple_shell
Shell.gif  hack                 helpers_strings1.c        init_function.c     shell.h
 ($)
```

# **Testing** :warning:

* Our shell should work like this in interactive mode:

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

* But also in non-interactive mode:

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

# **Output** :clipboard:

* Unless specified otherwise, our program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
* The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)

Example of error with sh:

```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```

Same error with your program hsh:

```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```

# **BUGS** :no_entry:

Incorrect output - case: Execute ls -l

# **Tasks** :books:

### **0. README, man, AUTHORS**

* Write a README
* Write a man for your shell.
* You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker

### **1. Betty would be proud**

* Write a beautiful code that passes the Betty checks.

### **2. Simple shell 0.1**

* Write a UNIX command line interpreter.

### **3. Simple shell 0.2**

Simple shell 0.1 +

* Handle command lines with arguments.

### **4. Simple shell 0.3**

Simple shell 0.2 +

* Handle the PATH
* fork must not be called if the command doesn’t exist

### **5. Simple shell 0.4**

Simple shell 0.3 +

* Implement the exit built-in, that exits the shell
* Usage: exit
* You don’t have to handle any argument to the built-in exit

### **6. Simple shell 1.0**

Simple shell 0.4 +

* Implement the env built-in, that prints the current environment.

## **Authors** :black_nib:
 
* **Sabrina Papeau** - [Github](https://github.com/Holbiwan)
* **Saima Riaz** - [Github](https://github.com/saima-riaz)

## **LICENSE**

**Simple _Shell** is an open-source project, so the download and the usage has no restriction.

