#include<bits/stdc++.h>
using namespace std;

int maxiSubarraysum(int k, vector<int> arr)
{
	int sum = 0;
	int res = 0;
	/*
	for(int i =0; i < k; i++)
	{
		sum+=arr[i];
	}
	res = max(sum,res);
	for(int i = k; i<arr.size(); i++)
	{
		sum -= arr[i-k];
		sum += arr[i];
		res = max(sum,res);
	}
	*/
	for(int i = 0;i<arr.size();i++)
	{
		if( i < k) 
		{
			sum+=arr[i];
		}
		else
		{
			res = max(sum,res);
			sum -= arr[i-k];
			sum += arr[i];
			res = max(sum,res);
		}
			
		
	}
	
	return res;
}

int main()
{
	vector<int> test1{4,1,5,1,3,2};
	vector<int> test2{2,3,4,1,5};
	int res = maxiSubarraysum(3, test1);
	int res1 = maxiSubarraysum(2, test2);
	cout << res << endl << res1 <<endl;
	return 0;
}
