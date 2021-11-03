# decNumber
## commands to run
1. `cd decNumber-icu-368`
2. `clang-12 add.c lib/libdecNumbericu36864.a -g && valgrind ./a.out 2 31 -v`
## output
```
==422336== Memcheck, a memory error detector
==422336== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==422336== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==422336== Command: ./a.out 2 31 -v
==422336== 
==422336== 
==422336== HEAP SUMMARY:
==422336==     in use at exit: 0 bytes in 0 blocks
==422336==   total heap usage: 0 allocs, 0 frees, 0 bytes allocated
==422336== 
==422336== All heap blocks were freed -- no leaks are possible
==422336== 
==422336== For lists of detected and suppressed errors, rerun with: -s
==422336== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

# mpdecimal
## commands to run
1. `cd mpdecimal`
2. `clang-12 add.c lib/libmpdec.a -lm && valgrind ./a.out 2 31`
## output
```
==422425== Memcheck, a memory error detector
==422425== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==422425== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==422425== Command: ./a.out 2 31
==422425== 
==422425== 
==422425== HEAP SUMMARY:
==422425==     in use at exit: 0 bytes in 0 blocks
==422425==   total heap usage: 7 allocs, 7 frees, 268 bytes allocated
==422425== 
==422425== All heap blocks were freed -- no leaks are possible
==422425== 
==422425== For lists of detected and suppressed errors, rerun with: -s
==422425== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```