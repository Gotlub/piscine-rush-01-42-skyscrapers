# piscine-remake-42 {
#\* Hello world */"  \n  
probablement pas aux normes  
Marche jusqu'au 8 * 8 . N'accepte que les format "x x x x"(%4 = 0)  

"25815 gotlub      20   0  2612   932   844 R  99.9  0.0 10h49:28 ./a.out 3 2 1 3 2 2 4 6 3 2 1 5 3 4 3 2 4 5 3 4 3 4 2 3 1 4 2 3 3 3 1 3 2 3 3 5"  
-> 9*9 :'(  
"""  
[gotlub@fedora ex00 v2]$ gcc -Wall -Werror -Wextra -O3 main.c  
[gotlub@fedora ex00 v2]$ time valgrind ./a.out "2 5 3 4 1 3 2 1 2 3 3 4 4 3 2 6 4 3 3 2 1 2 1 2 4 3 5 4"  
==72585== Memcheck, a memory error detector  
==72585== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.  
==72585== Using Valgrind-3.19.0 and LibVEX; rerun with -h for copyright info  
==72585== Command: ./a.out 2\ 5\ 3\ 4\ 1\ 3\ 2\ 1\ 2\ 3\ 3\ 4\ 4\ 3\ 2\ 6\ 4\ 3\ 3\ 2\ 1\ 2\ 1\ 2\ 4\ 3\ 5\ 4  
==72585==   
6 1 2 3 7 4 5   
1 3 4 5 2 6 7  
3 2 1 4 5 7 6  
2 4 7 6 1 5 3  
4 5 3 7 6 1 2  
5 7 6 2 4 3 1  
7 6 5 1 3 2 4  
==72585==  
==72585== HEAP SUMMARY:  
==72585==     in use at exit: 0 bytes in 0 blocks  
==72585==   total heap usage: 18 allocs, 18 frees, 1,640 bytes allocated  
==72585==   
==72585== All heap blocks were freed -- no leaks are possible  
==72585==  
==72585== For lists of detected and suppressed errors, rerun with: -s  
==72585== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)  
  
real	0m14.972s  
user	0m14.883s  
sys	0m0.049s  
"""  
 Sur un q6600 à 5GHz (grille dur).  
}  
