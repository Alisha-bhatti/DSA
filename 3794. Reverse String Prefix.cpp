class Solution {
public:
    string reversePrefix(string s, int k) {
        //....BY STL....
        // reverse(s.begin(), s.begin() + k);
        // return s;

        // ......BY TWO-POINTER....
        int left=0;
        int right=k-1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;
    }
};
