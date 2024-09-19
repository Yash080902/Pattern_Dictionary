#include <iostream>
using namespace std;

int main(){
int i,j,n;
cin>>n;
// for(i=1; i<=4; i++){
//     for(j=1; j<=4; j++){
//         cout<<j;
//     }
// cout<<endl;
//     j=1;
// }

i=1;
while(i<=n){
    j=1;
    while(j<=n)
    {
    cout<<j;
    j++;
        }
        cout<<endl;
        i++;
}
return 0;
}