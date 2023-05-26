# OOP-filesystem

Washington University in St. Louis

CSE 332S: Object-Oriented Software Development Laboratory
https://acadinfo.wustl.edu/syllabus/syllabus/202103/E/E81/332S/01

Spring 2023
Lab 5


(1) Mia Park
(2) Woosung Kim
(3) Jaehun Jeong

# Tests 

[TEST CASES: q Command]

#0 q

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  q  
(base) jasons-mbp:src jasonkim$

#1 Error Cases

#1-1 Q

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  Q  
invalid command  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-2 -q

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  -q  
invalid command  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-3 q filename

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  q i1.img  
invalid command  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-4 q anything

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  q plz  
invalid command  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

[TEST CASES: LS Command]  

#0 help ls

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  help ls  
the names of all files currently in the file system  
Usage: ls  
list with the metadata associated with files  
Usage: ls -m  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1 Correct Usage of ls

#1-1 Listing 0 file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-2 Listing two files

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-3 Listing three files

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2 Correct Usage of ls -m

#2-1 Listing 0 file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls -m  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-2 Listing two files with -m

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls -m  
i1.img&emsp;image&emsp;0  
t1.txt&emsp;text&emsp; 0  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  
(Outputs are aligned properly in the terminal)

#2-3 Listing three files with -m

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls -m  
i1.img&emsp;image&emsp;0  
t1.txt&emsp;text&emsp; 0  
t2.txt&emsp;text&emsp; 0  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  
(Outputs are aligned properly in the terminal)

#3 Incorrect Typing of ls

#3-1 Capital letters

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  LS  
invalid command  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3-2 Quotation marks

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  'ls'  
invalid command  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3-3 Adding a space before the command

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$   ls  
wrong command option  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3-4 Adding two spaces after the command

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.
$  ls  
wrong command option  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4 Appending Incorrect Options

#4-1 Adding a file name after ls

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls t1.txt  
wrong command option  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4-2 ~ 4-5 Typing anything other than -m after ls

#4-2 m

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls m  
wrong command option  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4-3 -M

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls -M  
wrong command option  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4-4 -q

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls -q  
wrong command option  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4-5 '-m'

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls '-m'  
wrong command option  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4-6 Putting two spaces between ls and -m

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  -m   
wrong command option  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

[TEST CASES: Remove Command]

#0 help rm

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  help rm  
remove the file with the provided name from the file system  
Usage: rm <file_name>  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1 Correct Usage of rm

#1-1 Removing a text file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  rm t2.txt  
Successfully removed!  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-2 Removing a image file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  rm i1.img  
Successfully removed!  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
t1.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2 Incorrect Usage of rm

#2-1 Not stating the filename

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  rm  
File does not exist  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-2 Stating a filename that does not exist

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  rm t3.txt  
File does not exist  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-3 File's extension omitted

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  rm i1  
File does not exist  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls   
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-4 Multiple filenames are given

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  rm t1.txt, t2.txt  
File does not exist  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

[TEST CASES: Touch Command]

#0 help touch

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  help touch  
touch creates a file  
Usage: touch <filename>  
creating password protected files  
Usage: touch <filename> -p  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1 Correct Usage of touch

#1-1 Creating a text file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  touch t3.txt  
successfully executed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt&emsp;&emsp;&emsp;&emsp;t3.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-2 Creating an image file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt&emsp;&emsp;&emsp;&emsp;t3.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  touch i2.img  
successfully executed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
t3.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2 Correct Usage of touch with -p

#2-1 Creating a text file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
t3.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  touch withPass.txt -p  
What is the password? 1234  
successfully executed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
t3.txt&emsp;&emsp;&emsp;&emsp;withPass.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-2 Creating an image file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
t3.txt&emsp;&emsp;&emsp;&emsp;withPass.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  touch withPass.img -p  
What is the password? 1234  
successfully executed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
t3.txt&emsp;&emsp;&emsp;&emsp;withPass.img  
withPass.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3 Incorrect Usage of touch with and without -p

#3-1 Not including a filename

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
t3.txt&emsp;&emsp;&emsp;&emsp;withPass.img  
withPass.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  touch  
Usage: ds <filename> [-p]  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  touch -p  
failed to create file  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
t3.txt&emsp;&emsp;&emsp;&emsp;withPass.img  
withPass.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3-2 Using a filename that already exists

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
t3.txt&emsp;&emsp;&emsp;&emsp;withPass.img  
withPass.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  touch i1.img  
failed to add file to file system, deleting file  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  touch i1.img -p  
What is the password? 1234  
failed to add file to file system, deleting file  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
t3.txt&emsp;&emsp;&emsp;&emsp;withPass.img  
withPass.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3-3 Omitting a file extension

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
t3.txt&emsp;&emsp;&emsp;&emsp;withPass.img  
withPass.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  touch i2  
failed to create file  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  touch i2 -p  
failed to create file  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
t3.txt&emsp;&emsp;&emsp;&emsp;withPass.img  
withPass.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

[TEST CASES: Display Command]

#0 help ds

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  help ds  
display file formatted  
Usage: ds <filename>  
display file unformatted, data only  
Usage: ds <filename> -d  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1 Displaying Files in Formatted Way

#1-1 Displaying a text file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt&emsp;&emsp;&emsp;&emsp;t3.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
123  
456  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-2 Displaying an empty text file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  

#1-3 Displaying an image file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-4 Displaying an empty image file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  

#1-5 Displaying a text file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
textFileWithPassword  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  

#1-6 Displaying an image file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2 Displaying Files in Unformatted Way

#2-1 Displaying a text file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt -d  
1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-2 Displaying an image file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img -d  
X X X X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-3 Displaying a text file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
t1.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt -d  
Insert Password: 1234  
password protected  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-4 Displaying an image file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;t1.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img -d  
Insert Password: 1234  
XXXX XXXX  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3 Incorrect Password

#3-1 Incorrect password for text file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1111  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3-2 Incorrect password for image file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1212  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4 Incorrect Usage of ds

#4-1 Filename not listed

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds  
Usage: ds <filename> [-d]  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4-2 Filename that does not exist is given

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i3.txt  
Unable to open file: i3.txt  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4-3 Entering filename without extension

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1  
Unable to open file: t1  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4-4 Inputting two filenames after ds

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt t2.txt  
Invalid Command  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4-5 Inputting additional thing after ds filename

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt hello  
Invalid Command  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt -D  
Invalid Command  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4- Order flipped

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds -d pass.img  
Invalid Command  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$


---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

[TEST CASES: Cat Command]

#0 help cat

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  help cat  
Concatenating current file  
Usage: cat <filename>  
With append option  
Usage: cat <filename> -a  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1 Writing New Data into Files

#1-1 Writing nothing in a text file (entering :wq right away)

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat t1.txt  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
:wq  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-2 Writing a line in a text file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat t1.txt  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
123456  
:wq  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
123456  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-3 Writing multiple lines in a text file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t2.txt  
  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat t2.txt  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
123  
456  
789  
:wq  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t2.txt  
123  
456  
789  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-4 Writing in a text file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.txt  
Insert Password: 1234  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
data  
:wq  
Insert Password: 1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
data  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-5 Writing in an image file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat i1.img  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
X X X X X3  
:wq  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-6 Writing in an image file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.img  
Insert Password: 1234  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
X X X X X3  
:wq  
Insert Password: 1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2 Overwriting Data into Files

#2-1 Overwriting data into a text file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
123456  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat t1.txt  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
654321  
:wq  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
654321  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-2 Overwriting data into a text file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
123456  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.txt  
Insert Password: 1234  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
654321  
:wq  
Insert Password: 1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
654321  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-3 Overwriting data into an image file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat i1.img  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
X  X2  
:wq  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
X  
&nbsp;X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-4 Overwriting data into an image file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.img  
Insert Password: 1234  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
X  X2  
:wq  
Insert Password: 1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
X  
&nbsp;X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.
$

#3 Appending data to files using -a

#3-1 Appending data to a text file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
654321  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat t1.txt -a  
654321  
t1.txt  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
123456  
:wq  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
654321123456  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  

#3-2 Appending data to a text file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
ppp  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.txt -a  
Insert Password: 1234  
ppp  
pass.txt  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
  
append  
:wq  
Insert Password: 1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
ppp  
append  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3-3 Appending data to an image file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
X  
&nbsp;X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat i1.img -a  
X  X  
i1.img  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
XX X X  X X4  
:wq  
Image file does not support append function  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  

#4 Exiting Files Without Saving

#4-1 Exiting a text file without saving

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
hi  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat t1.txt  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
edit  
:q  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
hi  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4-2 Exiting an image file without saving

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
X  
&nbsp;X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat i1.img  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
X X X X X3  
:q  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
X  
&nbsp;X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4-3 Exiting a text file with password without saving

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.txt  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
12345  
:q  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4-4 Exiting an image file with password without saving

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
X  
&nbsp;X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.img  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
X X X X X3  
:q  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
X  
&nbsp;X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4-5 Exiting a text file without saving after appending (-a)

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
hihi  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat t1.txt -a  
hihi  
t1.txt  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
hihi  
:q  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
hihi  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#4-6 Exiting an image file without saving after appending (-a)

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
X  
&nbsp;X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat i1.img -a  
X  X  
i1.img  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
X X X3  
:q  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
X  
&nbsp;X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#5 Incorrect Password

**When appending data to files with password, password is asked twice: first time for reading the original data in the file, second time for appending new data to the file.  
Therefore, if the first password is incorrect and the second password is correct, the user will not be able to read the original data, but will still be able to append new data.  
If the first password is correct and the second password is incorrect, the user will be able to read the original data, but will not be able to append new data.  
If the password is wrong both times, the user will neither be able to read the original data, nor append new data.**

#5-1 Putting incorrect password when doing cat to a text file

#5-1-a First password incorrect, second password correct

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234
originalData  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.txt  
Insert Password: incorrect  //incorrect  
Incorrect Password--> cannot read  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
editedData  
:wq  
Insert Password: 1234  //correct  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
editedData  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#5-1-b First password correct, second password  incorrect

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
editedData  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.txt  
Insert Password: 1234  //correct  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
editedData2  
:wq  
Insert Password: 1111  //incorrect  
Incorrect password --> cannot write  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
editedData  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#5-1-c Both passwords incorrect

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
editedData  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.txt  
Insert Password: 1111  //incorrect  
Incorrect Password--> cannot read  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
editedData3  
:wq  
Insert Password: 4444  //incorrect  
Incorrect password --> cannot write  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
editedData  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#5-2 Putting incorrect password when doing cat to an image file

#5-2-a First password incorrect, second password correct

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.img  
Insert Password: 1111  //incorrect  
Incorrect Password--> cannot read  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
XXXXXXXXX3  
:wq  
Insert Password: 1234  //correct  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
XXX  
XXX  
XXX  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#5-2-b First password correct, second password incorrect

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
XXX  
XXX  
XXX  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.img  
Insert Password: 1234  //correct  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
X X X X X3  
:wq  
Insert Password: 1111  //incorrect  
Incorrect password --> cannot write  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
XXX  
XXX  
XXX  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#5-2-c Both passwords incorrect

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
XXX  
XXX  
XXX  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.img  
Insert Password: 1111  //incorrect  
Incorrect Password--> cannot read  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
X X X X X3  
:wq  
Insert Password: 1111  //incorrect  
Incorrect password --> cannot write  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
XXX  
XXX  
XXX  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#5-3 Putting incorrect password when doing cat -a to a text file

#5-3-a First password incorrect, second password correct

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
originalData  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.txt -a  
Insert Password: 1111  //incorrect  
Incorrect Password--> cannot read  
  
pass.txt  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
  
appendedData1  
:wq  
Insert Password: 1234  //correct
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
originalData  
appendedData1  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#5-3-b First password correct, second password incorrect

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
originalData  
appendedData1  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.txt -a  
Insert Password: 1234  //correct
originalData  
appendedData1  
pass.txt  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
  
appendedData2  
:wq  
Insert Password: 1111  //incorrect  
Incorrect password --> cannot append  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
originalData  
appendedData1  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#5-3-c Both passwords incorrect

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
originalData  
appendedData1  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass.txt -a  
Insert Password: 1111  //incorrect  
Incorrect Password--> cannot read  
  
pass.txt  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
  
appendedData3  
:wq  
Insert Password: 1111  //incorrect  
Incorrect password --> cannot append  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
originalData  
appendedData1  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#6 Error Cases

#6-1 Not listing a file name

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat  
Usage: cat <filename> [-a]  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#6-2 Typing a file name that does not exist

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;t1.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat t2.txt  
Unable to open file: t2.txt  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#6-3 Typing two file names

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat t1.txt pass.txt  
Invalid Command  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#6-4 Typing anything after cat <filename>

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat t1.txt anything  
Invalid Command  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat t1.txt -d  
Invalid Command  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#6-5 Typing a file name after -a

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat -a t1.txt  
Invalid Command  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat t1.txt -a t2.txt  
Invalid command  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#6-6 Entering invalid input in an image file 

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat i1.img  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
O O O O O3  
:wq  
ERROR --> Invalid input, something other than a 'X' or a ' '  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  

#6-7 Entering invalid dimension in an image file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat i1.img  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
X X X X X2  
:wq  
ERROR --> Invalid input for writing on image file (size mismatch)  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

[TEST CASES: Copy Command]

#0 help cp

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  help cp  
Copy current file to other file  
Usage: cp <file_to_copy> <new_name_with_no_extension>  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1 Copying Files

#1-1 Copying a text file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cp t1.txt t1_cp  
Copying from <t1.txt> to t1_cp  
Successfully copied!  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t1_cp.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1_cp.txt  
1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-2 Copying an image file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cp i1.img i1_cp  
Copying from <i1.img> to i1_cp  
Successfully copied!  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i1_cp.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1_cp.img  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-3 Copying a text file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
textFileWithPassword  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cp pass.txt pass_cp  
Copying from <pass.txt> to pass_cp  
Successfully copied!  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;pass_cp.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass_cp.txt  
Insert Password: 1234  
textFileWithPassword  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-4 Copying an image file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cp pass.img pass_cp  
Copying from <pass.img> to pass_cp  
Successfully copied!  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;pass_cp.img  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass_cp.img  
Insert Password: 1234  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2 Changing Data in Copied Files (checking if the original content remains the same)

#2-1 Editing copied text file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i1_cp.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
pass_cp.img&emsp;&emsp;&emsp;&emsp;pass_cp.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t1_cp.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1_cp.txt  
1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat t1_cp.txt  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
edited  
:wq  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1_cp.txt  
edited  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-2 Editing copied image file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i1_cp.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
pass_cp.img&emsp;&emsp;&emsp;&emsp;pass_cp.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t1_cp.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1_cp.img  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat i1_cp.img  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
X X  X XX X  X X4  
:wq  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1_cp.img  
X X  
&nbsp;X X  
X X  
&nbsp;X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-3 Editing copied text file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i1_cp.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
pass_cp.img&emsp;&emsp;&emsp;&emsp;pass_cp.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t1_cp.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
textFileWithPassword  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass_cp.txt  
Insert Password: 1234  
textFileWithPassword  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass_cp.txt  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
edited  
:wq  
Insert Password: 1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
textFileWithPassword  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass_cp.txt  
Insert Password: 1234  
edited  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-4 Editing copied image file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i1_cp.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
pass_cp.img&emsp;&emsp;&emsp;&emsp;pass_cp.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t1_cp.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass_cp.img  
Insert Password: 1234  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cat pass_cp.img  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
X X  X XX X  X X4  
:wq  
Insert Password: 1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass_cp.img  
Insert Password: 1234  
X X  
&nbsp;X X  
X X  
&nbsp;X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3 Error Cases

#3-1 Not listing a filename to copy

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cp  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3-2 Only listing a filename

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cp t1.txt  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3-3 Copying to a name that already exists

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cp t1.txt t2  
Copying from <t1.txt> to t2  
Error: unable to add file to the file system  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3-4 Copying a file that does not exist

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cp t3.txt t3_cp  
Error: unable to open directory  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3-5 Including file extension

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  cp t1.txt t1_cp.txt  
Usage: cp <file_to_copy> <new_name_with_no_extension>  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

[TEST CASES: Rename Command]

#0 help rn

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  help rn  
Renaming a file  
Usage: rn <existing_file> <new_name_with_no_extension>  
Creating and editing a file immediately  
Usage: vi <filename>  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1 Renaming Files

#1-1 Renaming a text file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t1.txt  
1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  rn t1.txt renamed  
Copying from <t1.txt> to renamed  
Successfully copied!  
Successfully removed!  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;renamed.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds renamed.txt  
1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-2 Renaming an image file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;renamed.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i1.img  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  rn i1.img renamed  
Copying from <i1.img> to renamed  
Successfully copied!  
Successfully removed!  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
renamed.img&emsp;&emsp;&emsp;&emsp;renamed.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds renamed.img  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-3 Renaming a text file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.txt  
Insert Password: 1234  
textFileWithPassword  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  rn pass.txt renamed  
Copying from <pass.txt> to renamed  
Successfully copied!  
Successfully removed!  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
renamed.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds renamed.txt  
Insert Password: 1234  
textFileWithPassword  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-4 Renaming an image file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass.img  
Insert Password: 1234  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  rn pass.img renamed  
Copying from <pass.img> to renamed  
Successfully copied!  
Successfully removed!  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.txt  
renamed.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds renamed.img  
Insert Password: 1234  
X X  
&nbsp;X  
X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2 Error Cases

#2-1 Not listing a filename to rename

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  rn  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-2 Only listing a filename

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  rn t1.txt  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-3 Renaming to a name that already exists

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  rn t1.txt t2  
Copying from <t1.txt> to t2  
Error: unable to add file to the file system  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-4 Renaming a file that does not exist

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  rn t3.txt t4  
Error: unable to open directory  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-5 Including file extension

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  rn t1.txt t3.txt  
Usage: cp <file_to_copy> <new_name_with_no_extension>  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

[TEST CASES: Vi Command (Touch + Cat)]

#0 help vi

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  help vi  
Renaming a file  
Usage: rn <existing_file> <new_name_with_no_extension>  
Creating and editing a file immediately  
Usage: vi <filename>
Creating and editing a password-protected file immediately
Usage: vi <filename> -p  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1 Creating + Writing Files

#1-1 Creating + writing a text file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi t3.txt  
successfully executed  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
created with vi  
:wq  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt&emsp;&emsp;&emsp;&emsp;t3.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t3.txt  
created with vi  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-2 Creating + writing an image file

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi i2.img  
successfully executed  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
X X  X XX X  X X4  
:wq  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i2.img  
X X  
&nbsp;X X  
X X  
&nbsp;X X  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-3 Creating + writing a text file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi t3.txt -p  
What is the password? 1234  
successfully executed  
Insert Password: 1234  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
viCreatedWithPwd  
:wq  
Insert Password: 1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
t3.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t3.txt  
Insert Password: 1234  
viCreatedWithPwd  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-4 Creating + writing an image file with password

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi i3.img -p  
What is the password? 1234  
successfully executed  
Insert Password: 1234  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
XXXXX  XX  XXXXX4  
:wq  
Insert Password: 1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
i3.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds i3.img  
Insert Password: 1234  
XXXX  
X  X  
X  X  
XXXX  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#1-5 Creating an empty file (Entering :wq right away)

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi t2.txt  
successfully executed  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
:wq  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  t2.txt  
invalid command  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds t2.txt

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2 Incorrect Password

#2-1 Incorrect Password when creating + writing a text file

#2-1-a First password incorrect, second password correct

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi pass2.txt -p  
What is the password? 1234  
successfully executed  
Insert Password: 1111  //incorrect  
Incorrect Password--> cannot read  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
Hello  
:wq  
Insert Password: 1234  //correct  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
pass2.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass2.txt  
Insert Password: 1234  
Hello  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-1-b First password correct, second password incorrect

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi pass2.txt -p  
What is the password? 1234  
successfully executed  
Insert Password: 1234  //correct  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
Hello  
:wq  
Insert Password: 1111  //incorrect  
Incorrect password --> cannot write  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
pass2.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass2.txt  
Insert Password: 1234  
  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-1-c Both passwords incorrect

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi pass2.txt -p  
What is the password? 1234  
successfully executed  
Insert Password: 1111  //incorrect  
Incorrect Password--> cannot read  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
Hello  
:wq  
Insert Password: 1111 //incorrect  
Incorrect password --> cannot write  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
pass2.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass2.txt  
Insert Password: 1234  
  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-2 Incorrect Password when creating + writing an image file

#2-2-a First password incorrect, second password correct

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi pass2.img -p  
What is the password? 1234  
successfully executed  
Insert Password: 1111  //incorrect  
Incorrect Password--> cannot read  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
XXXX2  
:wq  
Insert Password: 1234  //correct  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
pass2.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass2.img  
Insert Password: 1234  
XX  
XX  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-2-b First password correct, second password incorrect

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi pass2.img -p  
What is the password? 1234  
successfully executed  
Insert Password: 1234  //correct  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
XXXX2  
:wq  
Insert Password: 1111  //incorrect  
Incorrect password --> cannot write  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
pass2.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass2.img  
Insert Password: 1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#2-2-c Both passwords incorrect

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi pass2.img -p  
What is the password? 1234  
successfully executed  
Insert Password: 1111  //incorrect  
Incorrect Password--> cannot read  
Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving.  
XXXX2  
:wq  
Insert Password: 1111  //incorrect  
Incorrect password --> cannot write  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
pass2.img&emsp;&emsp;&emsp;&emsp;t1.txt  
t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ds pass2.img  
Insert Password: 1234  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3 Error Cases

#3-1 Not inputting a file name

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi  
Usage: vi <filename> [-p]  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3-2 Not including a file extension

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi t3  
failed to create file  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3-3 Using a filename that already exists

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;i2.img  
pass.img&emsp;&emsp;&emsp;&emsp;pass.txt  
t1.txt&emsp;&emsp;&emsp;&emsp;t2.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi t1.txt  
failed to add file to file system, deleting file  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$

#3-4 Putting additional things after vi <filename>

Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi t2.txt -b  
execution failed  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  vi t2.txt t3.txt  
execution failed  
command failed  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$  ls  
i1.img&emsp;&emsp;&emsp;&emsp;pass.img  
pass.txt&emsp;&emsp;&emsp;&emsp;t1.txt  
Enter a command, 'q' to quit,'help' for a list of commands, or 'help' followed by a command name for more information about that command.  
$



