# CS-113 Progressions Lab

## Purpose

In this lab you will explore sequences (arithmetic and geometric) by implementing explicit and recurrence formulas using for loops and recursive functions.

## Code Block

Look over the code below. It is written in C not C++ but it should be fairly straightforward to read if you know C++. Answer the questions below and write the code. I will refer to the for statements by the order in which they appear in the code for instance block one refers to the first for loop.

```c
#include <stdio.h>

int a(int a0, int d, int i)
{
  return d*i + a0;
}

int recurrencea(int anminusone, int d)
{
  return anminusone + d;
}

int fibb(int n)
{
  if(n ==0 || n == 1){
    return 1;
  }
  return n*fibb(n-1);
}

int main()
{
  for(int i=0; i<= 5; i++){
    printf("%d\n", i);
  }

  printf("\n");

  for(int i=0; i<= 5; i++){
    printf("%d\n",a(17, 3, i));

  }

  printf("\n");

  int a = 17;
  printf("%d\n", a);
  for(int i=0; i<5; i++){
    printf("%d\n", recurrencea(a, 3));
    a = recurrencea(a, 3);

  }

  printf("\n");

  for(int i=0; i<6; i++){
    printf("%d\n", fibb(i));
  }

  return 0;
}
```

```
0
1
2
3
4
5

17
20
23
26
29
32

17
20
23
26
29
32

1
1
2
6
24
120
```

## Questions

1. Blocks 2 and 3 generate the same output but their `for` loops are not the same. How are the loops different and why? Could you rewrite block 3 so that the bounds of the loop are the same as in block 2?
2. Implement a `for` loop which generates and prints the 16th through 27th terms of the geometric sequence that starts at 18.25 and has a common ratio of 1.5. Use an explicit formula!
3. Implement a function that uses a recurrence relation to achieve the same as above.
4. Write a short program which stores the 3rd through 99th terms of the arithmetic sequence which starts at 54321 and has a common difference of -33.2 in an array. Generate the terms using a function that implements a recurrence relation using the previous element of the array.
5. Write a short program using a recursive function that generates the terms of the sequence a_n = a_n-1 * a_n-2. Generate the first twenty terms of the sequence if a_1 = 3 and a_2 = 0.5. Store the elements in an array. Print the elements in the array.