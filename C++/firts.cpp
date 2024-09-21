#include <iostream>
#include <bitset>
using namespace std;

int main(){
// int number = 12;
// bitset<4> binary(number); // here bitset is the function to which convert the number into binary with the help of bitset library
// cout<<binary;
//     return 0;
int  a=10;
int b =4;

cout<< "a & b "<< (a & b)<<endl;
cout<< "a & b "<< (a | b)<<endl;
cout<< "a & b "<< (a ^ b)<<endl;
cout<< "a & b "<< ( ~a)<<endl;
return 0;
}