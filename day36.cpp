// KMP Algorithm

// Longest Prefix Suffix (LPS)

// --------------------------------------------------
// BRUTE FORCE APPROACH
// --------------------------------------------------

// str = ABCDEABCD
// Prefix: A, AB, ABC, ABCD, ABCDE, ABCDEA, ABCDEAB, ABCDEABC
// Suffix: D, CD, BCD, ABCD, EABCD, DEABCD, CDEABCD, BCDEABCD
//          -   -   -     +     -       -        -        -
// ANS = 4
// LPS = "ABCD"

// For every position, we generate/check prefixes and suffixes.
// This can take O(n²) time.
// Space can also become O(n²) if we actually store all prefixes/suffixes.



// --------------------------------------------------
// BETTER APPROACH — PREFIX & SUFFIX POINTERS
// --------------------------------------------------

// We use two pointers:
// prefix -> starts from index 0
// suffix -> starts from index 1

// prefix = 0
// suffix = 1
// We compare characters at prefix and suffix.

// Example:
// str = AAAAD
// Index:    0 1 2 3 4
// String:   A A A A D

// STEP 1:
// prefix = 0
// suffix = 1
// A == A  -> MATCH
// prefix++
// suffix++
// prefix = 1
// suffix = 2

// STEP 2:
// A == A  -> MATCH
// prefix++
// suffix++
// prefix = 2
// suffix = 3

// STEP 3:
// A == A  -> MATCH
// prefix++
// suffix++
// prefix = 3
// suffix = 4

// STEP 4:
// A != D  -> MISMATCH
// Now we cannot continue with this prefix/suffix.
// So we start checking the NEXT possible suffix:
// prefix = 0
// suffix = 2

// Notice:
// suffix is moved to 2, NOT 5.
// We are now checking whether a prefix starting from
// index 0 matches the substring starting from index 2.

// --------------------------------------------------
// WHY suffix = 2?

// Initially:
// prefix = 0
// suffix = 1

// This means:
// "Let's check whether the prefix matches a suffix
// starting at index 1."

// If that fails, we try:
// suffix = 2
// Then:
// suffix = 3
// suffix = 4
// ...

// So suffix represents the STARTING POSITION of the
// suffix we are currently checking.

// Whenever we start a new candidate:

// prefix = 0
// suffix++

// --------------------------------------------------
// IMPORTANT

// This approach tries every possible starting position
// for the suffix.

// It reuses matching characters while moving forward,
// but when a mismatch occurs, it may start over again.

// Therefore, in the worst case:
// Time Complexity = O(n²)
// Example:
// AAAAAD
// Many A's match repeatedly before the final mismatch.
// This is why this is still NOT the final O(n) KMP
// LPS construction.

// The next optimization will use the already calculated
// LPS values to avoid these repeated comparisons.



// --------------------------------------------------
// OPTIMIZED KMP ALGORITHM — LPS ARRAY
// --------------------------------------------------

// In the previous approach:

// If str[prefix] != str[suffix]:
//      prefix = 0
//      suffix++

// Problem:
// We throw away all the matching information we already have.
// KMP optimizes this by using the LPS array itself.

// On mismatch:
//      prefix = lps[prefix - 1]

// We DO NOT move suffix back.
// suffix keeps moving forward.

// --------------------------------------------------
// TWO POINTERS
// --------------------------------------------------

// prefix -> points to the character we are comparing with
// suffix -> current position in the string

// Initially:

// prefix = 0
// suffix = 1

// lps[0] = 0
// Because a single character cannot have a proper prefix which is also a suffix.

// --------------------------------------------------
// CASE 1: MATCH
// --------------------------------------------------

// If:

// str[prefix] == str[suffix]

// Then:
// prefix++;
// lps[suffix] = prefix;
// suffix++;

// We have extended the previous matching prefix.
// --------------------------------------------------
// CASE 2: MISMATCH
// --------------------------------------------------

// If:

// str[prefix] != str[suffix]

// Instead of:
// prefix = 0;

// we use:

// prefix = lps[prefix - 1];

// Then we compare again.

// IMPORTANT:
// suffix does NOT move here.

// We are trying a smaller prefix for the SAME suffix.
// Why can we do this

// Because lps[prefix - 1] tells us the longest prefix that is already known to be a suffix of the part we have matched.

// Therefore, we don't need to compare those characters again.

// --------------------------------------------------
// EXAMPLE
// --------------------------------------------------

// str = AAACAAAA
// Index:  0 1 2 3 4 5 6 7
// String: A A A C A A A A

// LPS:

// index:  0 1 2 3 4 5 6 7
// char:   A A A C A A A A

// lps:    0 1 2 0 1 2 3 3

// At index 7:
// prefix = 3
// suffix = 7

// Compare:

// str[3] = C
// str[7] = A

// C != A  -> MISMATCH

// OLD APPROACH:
// prefix = 0

// OPTIMIZED APPROACH:

// prefix = lps[prefix - 1]
//        = lps[2]
//        = 2

// Now compare again:

// str[2] = A
// str[7] = A

// MATCH!
// We did NOT start from the beginning.
// We reused information we had already calculated.

// --------------------------------------------------
// WHY IS KMP O(n)?
// --------------------------------------------------

// suffix only moves FORWARD. It never moves backwards.
// prefix can move backwards, but it moves using: prefix = lps[prefix - 1]

// Since we are always using previously calculated information, characters are not repeatedly compared from scratch.

// Therefore:
// Time Complexity  = O(n)
// Space Complexity = O(n)





// CODE PART

// #include<iostream>
// using namespace std;

// int main() {
//     string s;
//     cout<<"Enter a string : ";
//     cin>>s;
//     vector<int> lps(s.size(),0);
//     int pre = 0, suf = 1;
//     while (suf < s.size()) {
//         // case 1 they match
//         if (s[pre] == s[suf]) {
//             lps[suf] = pre + 1;
//             pre++;
//             suf++;
//         }
//         // case 2 they dont match
//         else {
//             // if pre=0
//             if (pre == 0) {
//                 lps[suf] = 0;
//                 suf++;
//             }
//             // not 0
//             else {
//                 pre = lps[pre-1];
//             }
//         }
//     }
//     cout<<"Length of LPS is : "<<lps[s.size()-1]; 
// }