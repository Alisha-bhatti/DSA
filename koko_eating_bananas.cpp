class Solution {
public:
    bool Caneat(vector<int>&piles,int cap,int h){
        long long hours=0;
        for(int i=0;i<piles.size();i++){
            hours+=piles[i]/cap;
            if(piles[i]%cap>0)hours++;
        }
        return hours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1;
        int hi = *max_element(piles.begin(), piles.end());
        int ans = hi;

        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if(Caneat(piles, mid, h)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return ans;
    }
        
    
};
