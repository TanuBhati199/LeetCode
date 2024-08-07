class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";
        
        string bigString[] = {"Thousand", "Million", "Billion"};
        string result = numberToWordsHelper(num % 1000);
        num /= 1000;

        for (int i = 0; i < 3; ++i) {
            if (num > 0 && num % 1000 > 0) {
                result = numberToWordsHelper(num % 1000) + bigString[i] + " " + result;
            }
            num /= 1000;
        }

        return result.empty() ? result : result.substr(0, result.size() - 1); // Trim trailing space
    }

    string numberToWordsHelper(int num) {
        string digitString[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        string teenString[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        string tenString[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

        string result = "";
        if (num > 99) {
            result += digitString[num / 100] + " Hundred ";
        }
        num %= 100;
        if (num < 20 && num > 9) {
            result += teenString[num - 10] + " ";
        } else {
            if (num >= 20) {
                result += tenString[num / 10] + " ";
            }
            num %= 10;
            if (num > 0) {
                result += digitString[num] + " ";
            }
        }
        
        return result;
    }
};


/*class Solution {
public:
    string convertToWords(int n,string s){
        if(!n)return "";
        int h=n/100;
        int t=n%100;
        int o=n%10;
        if(t<20){
        string a[22]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
        return (h ? a[h] + " Hundred " : "")+a[t]+s;}
        else if(o==0){
            t=(n/10)%10;
            string a[11]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
            string b[10]={"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
            if(a[h]=="") return b[t]+s;
            return (h ? a[h] + " Hundred " : "")+b[t]+s;
        }
        else{ t=(n/10)%10;
            string a[11]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
            string b[10]={"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
            if(a[h]=="") return b[t]+s;
            return (h ? a[h] + " Hundred " : "")+b[t]+" "+a[o]+s;
        }
    }


public:
    string numberToWords(int num) {
        if(num==0)return "Zero";
        string res;
        res+=convertToWords((num/1000000000),"Billion");
        res+=convertToWords((num/1000000)%1000,"Million");
        res+=convertToWords((num/1000)%1000,"Thousand");
        res+=convertToWords((num%1000),"");
        return res;
    }
};*/