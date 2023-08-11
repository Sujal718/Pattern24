/*

1 2 3 4 
  2 3 4 
    3 4
      4

*/

#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    /*
     while(i<=n){
         int space=i-1;
         while(space){
            cout<<" ";
            space=space-1;
         }
         int j=1;
         while(j<=n-i+1){
   cout<<j;
            j=j+1;
         }
         cout<<endl;
         i=i+1;


     }*/


     for(int i=1;i<=n;i++){
      int j=i;
      for(j=i;j<=n;j++){
         cout<<j;
      }
      cout<<endl;
      for(int space=1;space<=i;space++)
      cout<<" ";
     }
}