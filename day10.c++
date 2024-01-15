#include<bits/stdc++.h>
using namespace std;

//2. koko eating bananas
class Solution {
public:
  bool enough(int speed,vector<int> &piles, int h){
        long long countHours=0;
        for(auto i:piles)
        {
            countHours+=(i+speed-1)/speed;
        }
        if(countHours<=h)return true;
        else return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
         int n = piles.size(); 
        int s = 1;
        int e = *max_element(piles.begin(),piles.end());
        
        if(n == h) return e;
        
        while(s <= e){
            int m = s + (e-s)/2;

            if(enough(m,piles,h)){
                e = m - 1;
            }
            else{
                s = m + 1;
            }
        }
        return s;
    }
};