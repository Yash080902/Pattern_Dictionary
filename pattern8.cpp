#include <iostream>
using namespace std;

int main(){
    int c, r, n;
    r=1;
    cin>>n;
    while(r<=n){
        c=1;
        while(c<=r){
        cout<<r-c+1<<" ";
c++;
        }
        cout<<endl;
        r++;
    }
}