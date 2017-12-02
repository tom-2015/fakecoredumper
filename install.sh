#!/bin/bash
#create static library
gcc -c coredumper.c -o coredumper.o
ar rcs libcoredumper.a coredumper.o
#create shared library
gcc -c -fPIC coredumper.c -o coredumper.o
gcc -shared -Wl,-soname,libcoredumper.so.1 -o libcoredumper.so.1.0.0 coredumper.o
#install
sudo cp libcoredumper.a /usr/lib/
sudo cp libcoredumper.so.1.0.0 /usr/lib/
sudo ldconfig
sudo mkdir /usr/include/google/
sudo cp coredumper.h /usr/include/google/coredumper.h