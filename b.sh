#!/bin/bash
ulimit -t 30

CC="/path/to/your/gcc-9"    #The path to your gcc-9 on your machine. The gcc-9 should be built from https://ftp.gnu.org/gnu/gcc/gcc-9.4.0/gcc-9.4.0.tar.gz.

rm orig.txt opt.txt a.out msg.txt > /dev/null 2>&1


#Please feel free to change the script. You do not need to submit this script. We will use the provided script to evaluate your project.



$CC -Wall  abc.c >msg.txt 2>&1 || {
    echo "Error: orig does not compile!"
    exit 1
 
}

if grep 'warning:' msg.txt | grep -v "Wunused-function" | grep -v "unused-variable" | grep -v "unused-value" | grep -v "is always true " | grep -v "always false" | grep -v "always evaluates to" | grep -v " always evaluate as" | grep -v "set but not used" | grep -v " on a boolean expression" 
then
    echo "Error: unexpected warnings!"
    exit 1
fi


(timeout -s 9 10 ./a.out >orig.txt 2>&1) >&/dev/null
ret=$?
if [ $ret != 0 ] ; then
    echo "Error: orig runtime error!"
    exit 1
fi

rm a.out

$CC -O3 abc.c >/dev/null 2>&1 || {
    echo "Error: opt does not compile!"
    exit 1

}



(timeout -s 9 10 ./a.out >opt.txt 2>&1) >&/dev/null
ret=$?
if [ $ret != 0 ] ; then
    echo "Error: opt runtime error!"
    exit 1
fi


if diff -q opt.txt orig.txt >/dev/null ; then
    echo "Error: outputs should not be the same!"
    exit 1
fi


echo "Correct! The size of abc.c is $(cat abc.c | wc -c)."
rm opt.txt orig.txt a.out msg.txt
exit 0
