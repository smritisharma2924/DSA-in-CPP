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