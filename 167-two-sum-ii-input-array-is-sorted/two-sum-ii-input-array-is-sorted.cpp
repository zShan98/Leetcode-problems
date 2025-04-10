class Solution {
public:

    int BinarySearch(vector<int>& arr, int target, int min,int max){
        if(max - min == 0){
            return arr[max] == target ? max:-1;
        }
        int middle = (min+max)/2;

        if(target == arr[middle]){
            return middle;
        }else if(target > arr[middle]){
            return BinarySearch(arr, target, middle+1, max);
        }else{
            return BinarySearch(arr, target, min, middle-1);
        }

        return -1;
    }


    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> val;
        int sum;
        int ind1=0;
        int ind2 = numbers.size()-1;

        while(ind1 < ind2){
            sum = numbers[ind1]+numbers[ind2];

            if(sum == target){
                val.push_back(ind1+1);
                val.push_back(ind2+1);
                break;
            }
            if(sum > target) ind2--;
            if(sum < target) ind1++;
        }

        return val;
    }
};