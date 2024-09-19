#include <iostream>
using namespace std;

int main(){

int r,c,n;
cin>>n;
r=1;
while(r<=n){
    c=1;
    while(c<=n){
        cout<< char('A'+r+c-2)<<" ";
        c++;

    }
    r++;
    cout<<endl;
}

    return 0;
    
    }
