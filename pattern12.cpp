#include <iostream>
using namespace std;

int main(){

int r,c,n;
cin>>n;
r=1;
while(r<=n){
    c=1;
    while(c<=r){   // c<=n leads to sqaure of same rows AAA BBB CCC
        cout<< char('A'+r-1)<<" ";
        c++;

    }
    r++;
    cout<<endl;
}

    return 0;
    
    }
