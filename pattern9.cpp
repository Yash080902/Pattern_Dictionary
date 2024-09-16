#include <iostream>
using namespace std;

int main(){
    int c, r, n;
    cin>>n;
    r=1;
    char ch ='A';
    while(r<=n){
        c=1;
        while (c<=n)
        {
            cout<<char(ch+r-1)<<" "; // this is the typecasing used here for better output
            c++;
        }
        r++;
        cout<<endl;
    }
    return 0;
}