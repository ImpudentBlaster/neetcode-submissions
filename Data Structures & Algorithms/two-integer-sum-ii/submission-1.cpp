class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int leftPtr = 0;
        int rightPtr = numbers.size() - 1;

        while(leftPtr < rightPtr){
            int sum = numbers[leftPtr] + numbers[rightPtr];

            if(sum > target) {
                rightPtr --;
                continue;
            }

            if(sum < target) {
                leftPtr ++;
                continue;
            }

            if(sum == target) {
                return {++leftPtr, ++rightPtr};
            }

            leftPtr++;
            rightPtr--;
        }

        return {};
    }
};
