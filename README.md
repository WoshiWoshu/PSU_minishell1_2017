# PSU_minishell1_2017
First year mini project in C consisting of a simple version of the UNIX command line interpreter. It displays a prompt and then wait for the next command line. The program implements some basics following UNIX commands : cd, setenv, unsetenv, env, exit, ls, cd, mkdir etc...
Therefore advanced features such as pipes or redirections cannot be handled.

USAGE :
      
      Make
      
      ./mysh

Exemple :

      $> ls

      $> env

      $> mkdir test

      $> cd test

      $> touch test.txt

      $> exit
