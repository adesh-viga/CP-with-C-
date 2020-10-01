#include<bits/stdc++.h>
using namespace std;

int findLength(const string& str)
{
    int maxLength = 0;
    int windowStart =0;
    unordered_map<char, int> charFreq;
    for(int windowEnd =0; windowEnd < (int)str.length(); windowEnd++)
    {
        charFreq[str[windowEnd]]++;
        
        // check for repeated chars
        while((int)charFreq.size() < (windowEnd - windowStart + 1))
        {
            charFreq[str[windowStart]]--;
            // erase the char if it's frequency is 0
            if(charFreq[str[windowStart]] == 0)
                charFreq.erase(str[windowStart]);
            windowStart++;
        }
        maxLength = max(maxLength, (windowEnd - windowStart + 1));
    }
    return maxLength;
}

int main()
{
	cout << findLength("aabccbb") << endl;
	cout << findLength("abbbb") << endl;
	cout << findLength("abccde") << endl;
	cout << findLength("abbbcde") << endl;
   return 0; 
}
