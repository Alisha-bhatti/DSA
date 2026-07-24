class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq(stones.begin(),stones.end());   
        while(pq.size()>1){
            int stone1=pq.top();
            pq.pop();
            int stone2=pq.top();
            pq.pop();
            if(stone1 != stone2)pq.push(stone1-stone2);
        }
        return pq.empty()?0: pq.top();
    }
};

// when we see in ques that we need to find "heaviest two stones" we understand we use heap and heaviest means using max heap as it has largest element at its top,
//then we make a max heap and insert the values of the array in it while initializing the heap itself
//Now, till the heap size is greater than 1 , which means till there are elements as we need one last elements after each stone is crashed.
//Then after max heap is created we store the top two values and crash them i.e stone 1-stone2 ,eg->7-8=1,4-2=2, and so on keep on crashing and return the one final last value
