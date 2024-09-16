#include <iostream>
using namespace std;

int main(){

int r,c,n;
cin>>n;
r=1;
while(r<=n){
    int j= n-r+1;
    int space = r-1;
    while(space){
cout<<" ";
space = space-1;
}
c=1;
while(j){
cout<<j;
j--;
c++;
}
r++;
cout<<endl;
}
    return 0;
    
    }
