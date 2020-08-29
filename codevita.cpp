using namespace std;
#include<bits/stdc++.h>
#include<map>
int main() {
	 int t;
	 cin>>t;
	  int *n=new int[t];

	  for(int i=0;i<t;i++){
	  	cin>>arr[i];
	  }
	map<int,int>mp;

	mp[0]=2,mp[1]=1,mp[2]=1,mp[3]=2,mp[4]=2,mp[5]=2,mp[6]=1,mp[7]=2,mp[8]=2,mp[9]=2,
	mp[10]=1,mp[11]=3,mp[12]=2,mp[13]=3,mp[14]=4,mp[15]=3,mp[16]=3,mp[17]=4,mp[18]=4,mp[19]=4,
	mp[20]=1,mp[30]=1,mp[40]=1,mp[50]=1,mp[60]=1,mp[70]=2,mp[80]=2,mp[90]=2,mp[100]=2;
 
    for (int i=21;i<100;i++){
    	int num1=i%10;
    	int num2=i-num1;
    	if(num1!=0){
    		mp[i]=mp[num1]+mp[num2];
    	}
    }
     int sum=0;
    for(int i=0;i<n;i++){
       sum=sum+mp[arr[i]];
    }

		sort(arr,arr+t);

	int lastValidPairLarger = INT_MIN;
	int left = 0, right = t -1;
	int count = 0;

	while(left < right){
		int currSum = arr[left] + arr[right];
		if (currSum == sum){
			if(lastValidPairLarger != arr[right]){
				count++;
			}
			lastValidPairLarger = arr[right];
			left++; right--;
		} else if (currSum < sum){
			left++;
		} else{
			right--;
		}
	}
     
     cout<<count;

	return 0;
}