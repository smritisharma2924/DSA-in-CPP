// DOUBLE POINTER

// int num = 10;
// int *ptr = &num;
// int **dptr = &ptr;

// ptr  -> pointer to int
// dptr -> pointer to pointer to int

// *ptr   -> gives value of num
// *dptr  -> gives ptr
// **dptr -> gives value of num

// Changing **dptr changes the original variable.
// **dptr = 50;    num becomes 50


// #include<iostream>
// using namespace std;

// int main() {
//     int n = 10;
//     int *ptr = &n; // single pointer
//     int **dptr = &ptr; // double pointer
//     int ***tptr = &dptr; // triple pointer
//     cout<<ptr<<endl;
//     cout<<&ptr<<endl;
//     cout<<dptr<<endl;
//     cout<<&dptr<<endl;
//     cout<<tptr<<endl;

//     // Modifying the value of n using pointers
//     *ptr = *ptr + 5;
//     cout<<n<<endl;
//     **dptr = **dptr + 5;
//     cout<<n<<endl;
//     ***tptr = ***tptr + 5;
//     cout<<n<<endl;
//     return 0;
// }



// Problem: Find the output
// #include <iostream>
// using namespace std;

// int main() {
//     char C[] = "GATE2024";
//     char *P = C;

//     cout << P + P[3] - P[1];

//     return 0;
// }

/*
Explanation:

P[3] = 'E' and P[1] = 'A'

'E' - 'A' = 69 - 65 = 4

Therefore:
P + P[3] - P[1]
= P + 4

P + 4 points to index 4 of "GATE2024", i.e. "2024".

Since P+4 is a char*, cout prints characters from
that position until '\0'.

Output: 2024
*/



// Problem: Find the output of the following pointer code.
// #include <iostream>
// using namespace std;

// void second(int *p1, int *p2) {
//     p1 = p2;
//     *p1 = 2;
// }

// int main() {
//     int i = 0, j = 1;
//     second(&i, &j);
//     cout << i << " " << j;
//     return 0;
// }

/*
Explanation:

Initially:
i = 0, j = 1
p1 -> i, p2 -> j

p1 = p2;
Now p1 also points to j.
(This changes only the local pointer p1.)

*p1 = 2;
Since p1 points to j, j becomes 2.

i remains unchanged.

Output:
0 2
*/



// Problem: Find the output of the following pointer code.

// #include <iostream>
// using namespace std;

// int main() {
//     int *ptr;
//     int x = 0;
//     ptr = &x;
//     int y = *ptr;
//     *ptr = 1;
//     cout<<x<<y;
//     return 0;
// }

/*
Explanation:

Initially: x = 0
ptr = &x       -> ptr points to x

y = *ptr       -> y gets the current value of x = 0

*ptr = 1       -> changes x to 1
y remains 0 (it stored a copy)

So:
x = 1
y = 0

Output:
10
*/



// Problem: Find the output of the following reference & pointer code.
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5, b = 10;
//     int &name = a;
//     int *ptr = &a;
//     (*ptr)++;          // a = 6
//     ptr = &b;
//     *ptr = *ptr + 5;   // b = 15
//     name += 5;         // name refers to a, so a = 11
//     cout << a << " " << b;
//     return 0;
// }

/*
Explanation:

Initially: a = 5, b = 10

name is a reference (alias) of a.
ptr initially points to a.

(*ptr)++  -> a becomes 6

ptr = &b  -> ptr now points to b
*ptr += 5 -> b becomes 15

name += 5 -> name still refers to a, so a becomes 11

Note:
A pointer can change what it points to,
but a reference remains attached to the same variable.

Output:
11 15
*/



// Problem: Find the output using pointers and double pointers.
// #include <iostream>
// using namespace std;
// int four(int x, int *py, int **ppz) {
//     int y, z;
//     **ppz += 1;
//     z = **ppz;
//     *py += 2;
//     y = *py;
//     x += 3;
//     return x + y + z;
// }

// int main() {
//     int c, *b, **a;
//     c = 4;
//     b = &c;
//     a = &b;
//     cout << four(c, b, a);
//     return 0;
// }

/*
Explanation:

Initially:
c = 4
b -> c
a -> b -> c

four(c, b, a):

**ppz += 1  -> c = 5, z = 5
*py += 2    -> c = 7, y = 7
x += 3      -> x = 7

Note: x is passed by value, so it is a separate copy.

Return:
x + y + z
= 7 + 7 + 5
= 19

Output: 19
*/