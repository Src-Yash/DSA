// power function ( logarithmic )

#include<iostream>
using namespace std;

int pow(int x ,int n){
   int ans;
   if(n==1) return x;
   if(n%2==0){
      ans=pow(x,n/2);
      return ans*ans;
   }
   int res;
   if(n%2!=0){
      res=pow(x,n/2);
      return res*res*x;
   }
}

int main(){
   cout<<pow(3,3);
   return 0;  
}