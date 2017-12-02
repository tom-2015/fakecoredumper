#fakecoredumper
This project can be used to replace the libcoredumper on systems where compilation of the original source doens't work (like the Raspberry Pi).
It creates a coredumper library with the same header and functions but all function are empty and do nothing.
Ofcourse this "coredumper" library will NOT work but at least you can get your OpenBTS code compiled.