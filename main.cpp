#include <iostream>
using namespace std;
 
int main() {
int n,i,j,x,y;
cin>>n;
int k=n;
for(i=0;i<n;i++){
  for(j=0;j<k;j++)
    cout<<" ";
    k=k-1;
 
  for(j=0;j<=i;j++){
    cout<<"* ";
  }
  cout<<"\n";
 
  }
 for(i=n;i>0;i--){
   for(j=1;j<=k;j++)
     cout<<" ";
     k=k+1;
  
   for(j=1;j<=i;j++){
     cout<<" *";
   }
   cout<<"\n";
 }
 
}

