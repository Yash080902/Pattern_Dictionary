#include <iostream>
using namespace std;

int main(){

int r,c,n;
cin>>n;
char ch;
r=1;
while(r<=n){
    c=1;
ch= 'A'+n-r;
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
