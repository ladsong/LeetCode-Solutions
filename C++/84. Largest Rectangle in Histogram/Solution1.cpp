class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int largest = 0;
        int min;
        int size = heights.size();
        for(int i = 0; i < size; i++){
            min = heights[i];
            for(int j = i; j < size; j++){
                if(heights[j] < min){
                    min = heights[j];
                }
                if((j-i+1)*min > largest){
                    largest = (j-i+1)*min;
                }
                                   // cout << "i: " << i << "- j: " << j << " - min: " << min << " - larg: " << largest << endl;

            }
        }
        return largest;
    }
};