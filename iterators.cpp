#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v{1,2,3};
	vector<int>::iterator it = v.begin(); // v.begin -- iterator to 1st element
	
	while(it!=v.end())   // v,end -- returns iterator to 1 element next to the last element
	{
		cout<< *it << endl;
		it++;
	}
	
	cout<< "Same obj achieved using for loop\n";
	
	
	for(auto it1 = v.begin(); it1!= v.end();it1++)
	{
		cout<< *it1 <<endl;
	}
	
	
	// using reverse iterators
	
	cout<< "Print in reverse order\n";

	vector<int>::reverse_iterator itr = v.rbegin();  // v.rbegin() -- iterator to last element
	
	// or auto itr = v.rbegin() -- works the same
	
	while(itr != v.rend()) // v.rend() -- iterator to 1 element before the 1st element
	{
		cout<< *itr <<endl;
		itr++;
	}
	
	return 0;
}
	
	
	
