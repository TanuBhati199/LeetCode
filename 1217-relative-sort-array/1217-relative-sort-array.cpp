class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
          vector<int> ans;
    unordered_map<int, int> freq;
    for (int num : arr1) {
        freq[num]++;
    }
    for (int num : arr2) {
        if (freq.count(num)) {
            int count = freq[num];
            for (int i = 0; i < count; ++i) {
                ans.push_back(num);
            }
            freq.erase(num);
        }
    }
    vector<int> remaining;
    for (const auto& pair : freq) {
        for (int i = 0; i < pair.second; ++i) {
            remaining.push_back(pair.first);
        }
    }
    sort(remaining.begin(), remaining.end());
   
    ans.insert(ans.end(), remaining.begin(), remaining.end());
    
    return ans;
}
     /*   vector<int>ans;
        for(int i=0;i<arr2.size();i++){
            int c=0;
            c=count(arr1.begin(),arr1.end(),arr2[i]);
            for(int j=0;j<c;j++){
              ans.push_back(arr2[i]);
            }
            remove(arr1.begin(),arr1.end(),arr2[i]);
        }
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr1.size();i++){
            ans.push_back(arr1[i]);
        }
        return ans;*/
};