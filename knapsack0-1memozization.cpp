#include<bits/stdc++.h>
using namespace std;

#include<iostream>
#include<bits/stdc++>
using namespace std;

void knapsack(int wt,int val,int w,int n){
	if(w==0 || n==0){
		return;
	}

     if(wt[n-1]<=w)
	  return max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
    
    else if(wt[n-1]>w)
      return knapsack(wt,val,w,n-1);

    
}


int main(){
  int wt []={1,3,4,5};
  int val[]={1,4,5,7};
  
  int w;
  
  cin>>w;
  
  int n=sizeof(wt)/sizeof(wt[0]);
  
  knapsack(wt,val,w,n);
}