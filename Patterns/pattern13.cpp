#include <iostream>
using namespace std;

int main(){

int r,c,n;
cin>>n;
r=1;
char ch = 'A';
while(r<=n){
    c=1;
    while(c<=r){
        cout<< char(ch)<<" ";
        ch++;
        c++;

    }
    r++;
    cout<<endl;
}

    return 0;
    
    }
