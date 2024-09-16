#include <iostream>
using namespace std;
#include <typeinfo>

int main (){

//     typedef int marks;
//     typedef int roll;

//     marks m1, m2, m3;
//     roll r1, r2, r3;

// cout<<"Enter your Marks here!";
// cin >>m1;
// cin>> m2;
// cin>>m3;

// int total_marks= m1+m2+m3;

// cout<<"Total marks ="<<total_marks;
// cout << "Type of m1: " << typeid(m1).name() << endl;
//     cout << "Type of m2: " << typeid(m2).name() << endl;
//     cout << "Type of m3: " << typeid(m3).name() << endl;

// float i;
// cin>>i;
// if(1){
//     cout<< "All okay";
// }
// else {
//     cout<<"I am not okay";
// }
int i = 0;
for (; i < 10;) {  // Only condition is provided
    cout << i << " ";
    ++i;  // Increment must be handled inside the loop
    
}
return 0;
}