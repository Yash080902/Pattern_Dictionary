#include <iostream>
using namespace std;

int main(){
    int a, b, n;
    a=0;
    b=1;
    
    int m;
    cin>>m;
    for(int i=1; i<=m; i++){
    n=a+b;
    cout<<i<<" "<<n <<' '<<endl;
    a=b;
    b=n;
    }
    return 0;
}