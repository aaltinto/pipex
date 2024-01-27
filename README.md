
# Pipex

This project aims to replicate the pipe '|'. The pipe is used to take a program's output and then send it as input to another program. 

#### Example for better understanding:
```bash
  ls | wc -l
```
'ls' lists items in your directory, and gives the output to 'wc -l' which is used to count the lines. This should provide us with information on how many items are in our working directory.


```bash
  <example.txt grep "x" | wc -l > output.txt
```
If we wanna take a specific file as an argument. Then we should use '<'. This should provide us with information on how many x's are in our given file and this will printed on "output.txt".

## Execute the pipex
```bash
  $ > make
  $ > ./pipex input_file cmd1 cmd2 output_file
```
 
