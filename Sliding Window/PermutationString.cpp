#include<bits/stdc++.h>
using namespace std;

bool findPermutation(const string &str, const string &pat)
{
	unordered_map<char, int> smap, pmap;
	for(char x: pat)
		pmap[x]++;
	int windowStart = 0;
	int flag =1;
	for(int windowEnd = 0; windowEnd < (int)str.length(); windowEnd++)
	{
		flag =1;
			if(windowEnd >= (int)pat.length())
			{
				for(auto x: pmap)
				{
					if(smap[x.first] != pmap[x.first])
						{flag = 0; break;}
				}
				if(flag) return true;
				char rem = str[windowStart++];
				smap[rem]--;
				if(smap[rem] == 0)
					smap.erase(rem);
			}
			char temp = str[windowEnd];
			smap[temp]++;
			//for(auto x: smap)
			//{
				//cout << x.first << " : " << x.second << " ";
			//}
			//cout << endl;
	}
	flag =1;
	for(auto x: pmap)
		{
			if(smap[x.first] != pmap[x.first])
				{flag = 0; break;}
		}
	if(flag) return true;
	return false;
}

int main()
{
  cout << findPermutation("oidbcafs", "abc") << endl;
  cout << findPermutation("odicf", "dc") << endl;
  cout << findPermutation("bcdxabcdy", "bcdyabcdx")<< endl;
  cout << findPermutation("aaacb", "abc") << endl;
  cout << findPermutation("adesh", "shedfad");
  return 0;
} 
