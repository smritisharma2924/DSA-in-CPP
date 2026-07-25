// Problem 1 - Convert Roman Number into Integer
// #include<iostream>
// using namespace std;

// int value(char symbol) {
//     switch (symbol) {
//         case 'I' : return 1;
//         case 'V' : return 5;
//         case 'X' : return 10;
//         case 'L' : return 50;
//         case 'C' : return 100;
//         case 'D' : return 500;
//         case 'M' : return 1000;
//     }
//     return 0;
// }

// int main() {
//     string roman;
//     cout<<"Enter a Roman Number : ";
//     cin>>roman;
//     int ans = 0, idx = 0;
//     while (idx < roman.size() - 1) {
//         if (value(roman[idx]) < value(roman[idx+1])) ans -= value(roman[idx]);
//         else ans += value(roman[idx]);
//         idx++;
//     }
//     ans += value(roman[idx]);
//     cout<<"Integer equivalent is : "<<ans;
//     return 0;
// }



// Problem 2 - Convert Integer Number(max 3999) into Roman
// #include<iostream>
// using namespace std;

// int placeValue (int num) {
//     int multiplier = 1 ;
//     while (num > 9) {
//         num /= 10;
//         multiplier *= 10;
//     }
//     return num * multiplier;
// }

// string value(int num) {
//     switch (num) {
//         case 1 : return "I";
//         case 2 : return "II";
//         case 3 : return "III";
//         case 4 : return "IV";
//         case 5 : return "V";
//         case 6 : return "VI";
//         case 7 : return "VII";
//         case 8 : return "VIII";
//         case 9 : return "IX";
//         case 10 : return "X";
//         case 20 : return "XX";
//         case 30 : return "XXX";
//         case 40 : return "XL";
//         case 50 : return "L";
//         case 60 : return "LX";
//         case 70 : return "LXX";
//         case 80 : return "LXXX";
//         case 90 : return "XC";
//         case 100 : return "C";
//         case 200 : return "CC";
//         case 300 : return "CCC";
//         case 400 : return "CD";
//         case 500 : return "D";
//         case 600 : return "DC";
//         case 700 : return "DCC";
//         case 800 : return "DCCC";
//         case 900 : return "CM";
//         case 1000 : return "M";
//         case 2000 : return "MM";
//         case 3000 : return "MMM";
//     }
//     return "0";
// }

// int main() {
//     int num;
//     cout<<"Enter an Integer Number : ";
//     cin>>num;
//     string roman;
//     while (num) {
//         roman += value(placeValue(num));
//         num %= placeValue(num);
//     }
//     cout<<"Roman equivalent is : "<<roman;
//     return 0;
// }



// Problem 3 - Factorial of a Number
// #include<iostream>
// using namespace std;

// int main() {
//     int num;
//     cout<<"Enter a number : ";
//     cin>>num;
//     vector<int> ans(1,1);
//     while (num > 1) {
//         int carry = 0, res, size = ans.size();
//         for (int i=0 ; i < size ; i++) {
//             res = ans[i] * num + carry;
//             carry = res/10;
//             ans[i] = res % 10;
//         }
//         while (carry) {
//             ans.push_back(carry % 10);
//             carry /= 10;
//         }
//         num--;
//     }
//     reverse(ans.begin(), ans.end());
//     cout<<"Factorial is : ";
//     for (int i=0 ; i < ans.size() ; i++) {
//         cout<<ans[i];
//     }
//     return 0;
// }