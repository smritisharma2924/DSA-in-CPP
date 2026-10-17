// WRITE IN A FILE

// #include<iostream>
// #include<fstream>

// using namespace std;

// int main() {
//     // open file
//     ofstream fout;
//     fout.open("day69zoom.txt");
//     // write in file
//     fout<<"hello world!";
//     fout.close();
//     return 0;
// }



// READ FROM A FILE

// #include<iostream>
// #include<fstream>

// using namespace std;

// int main() {
//     ifstream fin;
//     // open file
//     fin.open("day69zoom.txt");
//     // read the file
//     char c;
//     fin>>c;
//     while (!fin.eof()) {
//         cout<<c;
//         fin>>c;
//     };
//     fin.close();
// }