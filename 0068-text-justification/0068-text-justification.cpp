class Solution {
public:
    string justify(int temp,int base ,int freq,int maxWidth,vector<string>& words){
       
        string ans="";

        if(freq==1){ // in case of sentence with only one word
            int j=words[base].length();
            ans+=words[base];
            while(j<maxWidth) {
                ans+=" ";
                j++;
            }
            return ans;
        }

        // fill space using piegon hole 
        int space=maxWidth-temp+freq-1; // total space to be distributed
        int mini=space/(freq-1); // minimum space between each word
        int ext=space%(freq-1); // in case of uneven space distribution

        for(int i=base,j=mini;i<base+freq-1;i++){
            ans+=words[i];
            j=mini;
            if(ext!=0) { // extra space to adjacent left-side words
                j++;
                ext--;
            }
            while(j>0){ // evenly distributing spaces" ""
                ans+=" ";
                j--;
            }
        }
        ans+=words[base+freq-1];  // adding last word to the justified sentence
        return ans;
    }

    string last_justify(int base,int limit,int maxWidth,vector<string>& words){
        // function for last sentence, 
        // left aligning all words and then adding " " till maxWidth
        string ans;
        for(int i=base;i<base+limit;i++){
            ans+=words[i];
            ans+=" ";
        }
        int len=ans.length();
        ans=ans.substr(0,len-1);
        while(len<=maxWidth){
            ans+=" ";
            len++;
        }
        return ans;
    }

    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;

        int temp=0; // counting length of the sentence
        int cnt=0; // for counting words
        for(int i=0;i<words.size();i++){
            if(temp+words[i].length()<=maxWidth){
                cnt++;
                temp+=(words[i].length()+1);

            }
            else{
                ans.push_back(justify(temp-1,i-cnt,cnt,maxWidth,words));
                cnt=1;
                temp=words[i].length()+1;
            }
        }

        ans.push_back(last_justify(words.size()-cnt,cnt,maxWidth,words));
        return ans;
    }
};