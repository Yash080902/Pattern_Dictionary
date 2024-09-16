#include <iostream>
using namespace std;

int main(){

    int r,c,n;
    char ch ='A';
    cin>>n;
    r=1;
while(r<=n){
    c=1;
    while(c<=n){
        cout<<char(ch) <<" ";
        ch++;
        c++;
    }
    r++;
    cout<<endl;
}
    return 0;
}