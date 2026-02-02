// Problem Solving

// Example 1 - Convert lowercase to uppercase
// #include<iostream>
// using namespace std;

// char toUppercase(char c) {
//     if(c>='a' && c<='z') {
//         return char(c-32);
//     }
//     else return c;
// }

// int main() {
//     char ch;
//     cout<<"Enter a lowercase letter : ";
//     cin>>ch;
//     char upper = toUppercase(ch);
//     cout<<"Uppercase letter is : "<<upper;
//     return 0;
// }



// Example 2 - Check armstrong number
// #include<iostream>
// #include<cmath>
// using namespace std;

// bool isArmstrong(int num) {
//     int len=0;
//     int temp=num,sum=0;
//     while(temp>0) {
//         len++;
//         temp /= 10;
//     }
//     temp=num;
//     while(temp>0) {
//         int digit = temp%10;
//         sum += pow(digit,len);
//         temp /=10;
//     }
//     return sum==num;
// }

// int main() {
//     int num;
//     cout<<"Enter a number : ";
//     cin>>num;
//     if (isArmstrong(num)==1) cout<<"Armstrong number.";
//     else cout<<"Not an armstrong number.";
//     return 0;
// }



// Example 3 - Can a rectangle be formed by given sides
// #include <iostream>
// using namespace std;

// bool is_rectangle(int a, int b, int c, int d) {
//     if ((a==b)&&(c==d) || (a==c)&&(b==d) || (a==d)&&(b==c)) return 1;
//     else return 0;
// }

// int main() {
//     int a, b, c, d;
//     cout<<"Enter the length of 4 sides : "<<endl;
//     cout<<"side 1 : ";
//     cin>>a;
//     cout<<"side 2 : ";
//     cin>>b;
//     cout<<"side 3 : ";
//     cin>>c;
//     cout<<"side 4 : ";
//     cin>>d;
//     if (is_rectangle(a,b,c,d)) cout<<"Given sides can form a rectangle.";
//     else cout<<"Given sides can't form a recatngle";
//     return 0;
// }



// Example 4 (HARD) - Find the number of moves a bishop can make without changing its direction of movement.
// Hints - when the bishop moves to a particular diagonal then maximum it can go to the corresponding first/last row or first/last column of which their minimum is the maximum number of moves it can make in that particular direction.
#include<iostream>
using namespace std;

int max_bishop_moves(int initial_row, int initial_column) {
    int count = 0;
    count += min(8-initial_row,8-initial_column); // when it moves towrards bottom right
    count += min(8-initial_row,initial_column-1); // towards bottom left
    count += min(initial_row-1,initial_column-1); // towards top left
    count += min(initial_row-1,8-initial_column); // towards top right
    return count;
}

int main() {
    int row,col;
    cout<<"Enter the initial position of the bishop (row, column) -"<<endl;
    cout<<"Row : ";
    cin>>row;
    cout<<"Column : ";
    cin>>col;
    cout<<"The maximum number of moves bishop can take from that place are : "<<max_bishop_moves(row,col);
    return 0;
}