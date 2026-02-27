class Solution {
public:
    int maxArea(vector<int>& height) {

        // .....TWO-POINTER....
         int left = 0;
        int right = height.size() - 1;
        int max_area = 0;

        while (left < right) {
            int width = right - left;
            int currHeight = min(height[left], height[right]);
            max_area = max(max_area, currHeight * width);

            // Move the pointer with smaller height
            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return max_area;
    }
};
