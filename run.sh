#!/bin/bash

#is-charging will print either true or false
#the output will be provided as stdin input for "dontStealMyMac" program
is-charging | cat | ./pipeProg
