#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for (int i =2; i<n;i++){
        if((n%i)==0){
            cout<<"Not a Prime Number"<< endl;
            break;
        }
        else {
            cout<<"Prime number";
            break;
        }
    }
    return 0;
}