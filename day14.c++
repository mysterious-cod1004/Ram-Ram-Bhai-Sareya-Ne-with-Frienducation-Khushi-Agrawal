#include<bits/stdc++.h>
using namespace std;

//1. Sort O-1
void sortZeroesAndOne(int input[], int size)
{    
    int cnt=0; 
    for (int i=0; i<size; i++) {
        if (input[i]==0) 
            cnt++; 
    }

    for (int i=0; i<cnt; i++) 
     {   input[i]=0; 
  
     }
    for (int i=cnt; i<size; i++) 
      {  input[i]=1;
      }
}

//2. Letter combinations of a phone number
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.empty()){
            return ans;
        }
        ans.push_back("");
        vector<string> mapp={"0","1","abc","def","ghi", "jkl","mno","pqrs","tuv","wxyz"};

        for(int i=0;i<digits.length();i++){
            int k=digits[i]-'0';
            if(k<0 || k>9){
              return ans;
            }
             while (ans.front().length()== i)
            {
                string h =ans.front();
                ans.erase(ans.begin());
                for (char m :mapp[k])
                {
                    ans.push_back(h + m);
                }
               }

        }
        return ans;
    }
};