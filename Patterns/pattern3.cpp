#include <iostream>
using namespace std;
int main(){
    int i, j, n;
    cin>>n;
    i=1;
    int count=1;
    while(i<=n){
        j=1;
    while(j<=n){
       cout<<count<<" ";
       count++;
       j++;
    }
    cout<<endl;
    i++;
    }
    return 0;
}