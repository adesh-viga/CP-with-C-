#include<bits/stdc++.h>
using namespace std;

vector<int> findStringAnagrams(const string &str, const string &pat)
{
    vector<int> resultIndices;
    int windowStart = 0, matched = 0;
    unordered_map<char, int> charFreq;
    for(char x: pat)
    {
        charFreq[x]++;
    }
    
    // goal is match all chars in charFreq to current window
    for(int windowEnd =0; windowEnd < (int)str.length(); windowEnd++)
    {
        char right = str[windowEnd];
        
        if(charFreq.find(right) != charFreq.end()){
            // curr char is in the pat
            charFreq[right]--;
            if(charFreq[right] == 0)
                matched++;
        } 
        	
        if(matched == (int)charFreq.size())
            resultIndices.push_back(windowStart);
        
        if(windowEnd >= (int)pat.length() - 1){
            // shrink the window
            char left = str[windowStart++];
            
            if(charFreq.find(left) != charFreq.end()){
                if(charFreq[left] == 0)
                    matched--;// before putting the char, decrement the matched
                // put the char back for matching
            charFreq[left]++;
            }
            
        }
    }
    return resultIndices;
}

int main(){
	
	vector<int> res = findStringAnagrams("abbcabc", "abc");
	for(auto x : res)
		cout << x << endl;
		
	return 0;
	
}
