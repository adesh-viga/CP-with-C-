#include<bits/stdc++.h>
using namespace std;

int func(int s, vector<int> arr)
{
	int res = -1;
	int ans = INT_MAX;
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i] >= s){ return 1;}
		int sum = arr[i]; res = 1;
		int j =i+1;
		while(sum < s && j < arr.size())
		{
			res++;
			sum += arr[j++];
		}
		//if(j != arr.size())
		if(sum >= s)
		ans = min(ans, res); 
	}
	return ans;
}

int main()
{
	
	vector<int> test1{2,1,5,2,3,2};
	vector<int> test2{2,1,5,2,8};
	vector<int> test3{3,4,1,1,6};
	int res = func(7, test1);
	cout << res << endl;
	res = func(7, test2);
	cout << res << endl;
	res = func(8, test3);
	cout << res << endl;
	return 0;
}
