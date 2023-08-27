//reverse string by using fun in class
class Solution
{
    public:
    string reverseWord(string str)
    {
       int s=0 , e = str.length()-1;

       while(s<=e){
           swap(str[s++],str[e--]);
       }
       return str;
    }
    
};
// Input:
// s = Geeks
// Output: skeeG
