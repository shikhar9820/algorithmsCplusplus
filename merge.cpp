#include<iostream>
#include<bits/stdc++>
using namespace std;
void merge(int arr[],int low,int mid ,int high){
   int arr[end-start+1];

   for(int i=0;i<)

}

void mergesort(int arr[],int low ,int high)
{
	if(low<high)
	{
	int mid=low+high/2;
	mergesort(arr,low,mid);
	mergesort(arr,mid+1,high);
	merge(arr,low,mid,high);

	return;
}
int main()
{
	vector<int>arr={4,452,2,4,7,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	mergesort(arr,0,n);

}