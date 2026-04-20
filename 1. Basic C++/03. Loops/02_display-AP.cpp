#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cout<<"Enter n:";
   cin>>n;
   for(int i=4; i<=4*n+1; i+=3){
    cout<<i<<" ";
   }

}

/*
  condition ey last number dite hoy 
  ap law use kore last digit ber kora hoy 
  */

/*
arithmetic progress
N th term formula:
 a of n = a+(n-1)d
 a=1st digit
 n=term
 d=difference between two number 
*/

//ALTERNATIVE:
/*
int main(){
   int n;
   cout<<"Enter n:";
   cin>>n;
   int a=1;
   for(int i=1; i<=2*n-1; i+=2){
    cout<<a<<" ";
    a+=2;
   }
}
*/
