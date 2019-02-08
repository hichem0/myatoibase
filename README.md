program written on c & c++
Step of Correction 
use debian os && terminal 
for c myatoibase.c
$ cp /rendu/$NAME/myatoibase.c ./
$ wget www.hochart.fr/CPP/res/main-atoi.c
$ gcc -Wall -Werror myatoibase.c main-atoi.c -o ./myab-test $ ./myab-test

for the second 
use debian os && terminal 
$ wget www.hochart.fr/CPP/res/mychainedstack-base.tgz jho@debian:~$ mkdir sbuild
$ cd sbuild
$ tar xvzfk ../mychainedstack-base.tgz
main.cpp
mystack.cpp
mystack.h
$ tar xvzfk ../rendu/$ELEVE/mychainedstack.tgz mychainedstack.h
mychainedstack.cpp
$ g++ -Wall -Werror mystack.cpp mychainedstack.cpp main.cpp -o mycs-test
$ ./mycs-test
