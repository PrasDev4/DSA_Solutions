/* brute force approach can take O(n^2) time complexity*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(numbers[i]+numbers[j] == target)
                   return {i+1, j+1};
            }
        }
        return {};
    }
};

/* As in the question they have mentioned that Given an array of integers numbers that is sorted in non-decreasing order. So we can implement the Binary search on this problem and the time complexity is O(nlogn)*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0; i < numbers.size(); i++) {
            int l = i + 1, r = numbers.size() - 1;
            int tmp = target - numbers[i];
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (numbers[mid] == tmp) {
                    return { i + 1, mid + 1 };
                } else if (numbers[mid] < tmp) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        return {};
    }
};
/*And also we can use hashmap for this question*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < numbers.size(); i++) {
            int tmp = target - numbers[i];
            if (mp.count(tmp)) {
                return { mp[tmp], i + 1 };
            }
            mp[numbers[i]] = i + 1;
        }
        return {};
    }
};

/*we can also implement the two pointers approch to this question*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j=numbers.size()-1;
        while(i<j){
            if(numbers[j]+numbers[i] > target)
               j--;
            if(numbers[i]+numbers[j] < target)
               i++;
            if(numbers[i]+numbers[j]==target)
               return {i+1, j+1};
        }
        return {};
    }
};
