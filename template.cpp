#include<bits/stdc++.h>
using namespace std;

template <typename T>
T maximum(T a, T b)
{
	return a>b?a:b;
}

// template function with 2 arguments (both can be of different type)

template <typename T1, typename T2>
void print( T1 a, T2 b)
{
	cout<< a << " " << b << endl;
} 



int main()
{
	int a {10};
	int b {20};
	
	cout<<"Interger\n";
	cout<<maximum(a,b)<<endl;
	
	double c {10.2};
	double d {10.1};
	
	cout<<"Double\n";
	cout<<maximum(c,d)<<endl;
	
	char e {'A'};
	char f {'D'};	
	
	cout<<"Chars\n";
	cout<<maximum(e,f);
	
	print(10,12.5);
	
	return 0;
}
