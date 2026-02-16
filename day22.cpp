// Standard template Library 

// Declaring a vector 

// vector<data_type>vector_name;
// ex : vector<int>v;



// Inserting value in vector 

// vector<data_type>vector_name (size_of_vector, initialization_value);
// ex : vector<int>v (4,2);

// vector<int>a;         | |
// a.push_back(4);       |4|
// a.push_back(8);       |4|8|
// a.push_back(5);       |4|8|5| |
// a.push_back(3);       |4|8|5|3|

// vector<int>v = {2,4,6,8,10}      |2|4|6|8|10|

// vector<int>v(5);
// for(int i=0 ; i<5 ; i++) cin>>v[i];



// Removing value from a vector

// v.pop_back();              removes last value
// v.clear();                 removes all values
// v.erase(v.begin()+2);      removes the second element



// Size and Capacity

// |4|8|5| |        size=3, capacity=4
// |4|8|5|3|        size=4, capacity=4



// Front, Back, At, Empty

// v : |1|2|3|4|
// cout<<v.front();             1
// cout<<v.back();              4
// cout<<v.empty();             0



// Iterator in a vector

// v : |4|6|8|10|
// v.begin() points to 4
// v.end() points to just after 10
// ex : for(auto it=v.begin() ; it != v.end() ; it++) cout<<*it<<" ";
//     4 6 8 10

// v : |2|4|6|8|10|
// v.rbegin() points to 10
// v.rend() points to just before 2
// ex : for(auto it=v.rbegin() ; it != v.rend() ; it++) cout<<*it<<" ";
//     10 8 6 4 2



// Sorting

// v : |2|3|1|7|4|
// sort(v.begin(),v.end());                    v : |1|2|3|4|7|
// sort(v.begin(),v.end(),greater<int>())      v : |7|4|3|2|1|



// Implementing a Vector

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {

//     // Size and Capacity
//     vector<int>v;

//     cout<<"Size : "<<v.size()<<endl;
//     cout<<"Capacity : "<<v.capacity()<<endl;
    
//     cout<<"Inserting 2 - "<<endl;
//     v.push_back(2);
//     cout<<"Size : "<<v.size()<<endl;
//     cout<<"Capacity : "<<v.capacity()<<endl;
    
//     cout<<"Inserting 3 - "<<endl;
//     v.push_back(3);
//     cout<<"Size : "<<v.size()<<endl;
//     cout<<"Capacity : "<<v.capacity()<<endl;
    
//     cout<<"Inserting 10 - "<<endl;
//     v.push_back(10);
//     cout<<"Size : "<<v.size()<<endl;
//     cout<<"Capacity : "<<v.capacity()<<endl;

//     // Update Value
//     v[1]=5;

//     // Initialize a vector
//     vector<int>v1(5,1);
//     cout<<"Size : "<<v1.size()<<endl;
//     cout<<"Capacity : "<<v1.capacity()<<endl;

//     cout<<"Inserting 8 - "<<endl;
//     v1.push_back(8);
//     cout<<"Size : "<<v1.size()<<endl;
//     cout<<"Capacity : "<<v1.capacity()<<endl;

//     vector<int>v3 = {1,2,3,4,5};
//     return 0;
// }