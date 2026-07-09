class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1) return 0;
        if(k%2==0){
            return 1-kthGrammar(n-1, k/2);  // if index even keep the paent bit
        }
        return kthGrammar(n-1, (k+1)/2);  // if index odd , flip the parent bit
    }
};

// 0->01
// 1->10

// row1 -> 0
// row2 -> 01
// row3 -> 0110
// row4 -> 01101001

// k is index, and it is 1 based indexing
// k/2 as alues keep decreasing by half, row4 ->8 values then row3 -> 4 values and so on.
