class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
      int ans=0;
      sort(seats.begin(),seats.end());
      sort(students.begin(),students.end());
      for(int i=0;i<seats.size();i++){
      int temp=students[i]-seats[i];
      temp=temp<0? temp*-1 : temp;
      ans+=temp;
              }  
   return ans; }
};