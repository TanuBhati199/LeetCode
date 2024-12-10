/*class Solution {
public:
    string ans="";
    int count=0;
    void helper(vector<int> &arr,int k,int i){
        if(i==arr.size()){
            count++;
            if(k==count){
                for(int a:arr){
                    ans+=to_string(a);
                }
            }         
        return; }
        for(int j=i;j<arr.size();j++){
            swap(arr[i],arr[j]);
            helper(arr,k,i+1);
            swap(arr[i],arr[j]);
            if(!ans.empty()){
                return; 
            }
        }
    }
    string getPermutation(int n, int k) {
        vector<int>num;
        for(int i=1;i<=n;i++){
           num.push_back(i);
        }
        helper(num,k,0);
        return ans;
    }
};*/
class Solution {
public:
    string getPermutation(int n, int k) {
        
        vector<int> numbers;
        for(int i = 1; i <= n; i++) {
            numbers.push_back(i);
        }
        
        vector<int> factorial(n+1, 1);
        for(int i = 1; i <= n; i++) {
            factorial[i] = factorial[i-1] * i;
        }

        k--;
        
        string result;
        
      
        for(int i = 1; i <= n; i++) {
            int index = k / factorial[n-i];
           
            result += to_string(numbers[index]);
            
            numbers.erase(numbers.begin() + index);
            
            k %= factorial[n-i];
        }
        
        return result;
    }
};