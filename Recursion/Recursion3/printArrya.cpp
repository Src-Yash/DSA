#include<iostream>
#include<vector>
using namespace std;

void display(int arr[],int n, int idx){
   if(idx==n) return ;
   cout<<arr[idx]<<" ";
   display(arr,n,idx+1);

}
void display2(vector<int>& V,int idx){
   if(idx==V.size()) return ;
   cout<<V[idx]<<" ";
   display2(V,idx+1);

}

int main(){
   int arr[]={2,1,1,3,4,1,32};
   int n=sizeof(arr)/sizeof(arr[0]);
   display(arr,n,0);
   vector<int> V(n);
   for(int i=0;i<n;i++){
      V[i]=arr[i];
   }
   display2(V,0);
   return 0;  
}