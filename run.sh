#!/bin/sh
ls

# exercise 1
echo
echo "Exercise 1:"
gcc -o exercise1 exercise1.cpp -lstdc++
./exercise1 19 5 42 2 77
./exercise1 3453545353453 10 343445353 3453445
./exercise1 2 9 6 -1
./exercise1 879 953 694 -847 342 221 -91 -723 791 -587
./exercise1 3683 2902 3951 -475 1617 -2385

# exercise 2
echo
echo "Exercise 2:"
gcc -o exercise2 exercise2.cpp -lstdc++
./exercise2 1 2 4 3
./exercise2 1 4 4 4 4 4 3 2 1 2
./exercise2 6 7 3 2 1

# exercise 3
echo
echo "Exercise 3:"
gcc -o exercise3 exercise3.cpp -lstdc++
./exercise3 \(\)
./exercise3 \({[]}\)
./exercise3 \(\(\){}\(\)\)
./exercise3 \(\(}
./exercise3 \(\)\(

echo
echo "End of script."