#include <iostream>
using namespace std;
int main(){
    int n, r, c;
    cin >>n;
    r=1;
    while(r<=n){
        c=1; int p=r;
        while(c<=r){
            cout<<p<<" ";
            p++;
            c++;
        }
        r++;
        cout<<endl;
    }
return 0;
}