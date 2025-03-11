// class Solution {
//     public:
//         vector<int> frequency(string s){
//             int n = s.length();
//             vector<int>freq;
//             int i=0;
//             while(i<26){
//                 int count=0;
//                 for(int j=0; j<n; j++){
//                     if(s[j]=='a'+i){
//                     count++;
//                     }
//                 }
//                 freq.push_back(count);
//                 i++;
//             }
//             return freq;
//         }
    
//     // An anagram is a word or phrase formed by rearranging the letters of another word or phrase. All the original letters must be used exactly once, but their order can be changed
    
//         bool isAnagram(string s, string t) {
//             int n = s.length();
//             int m = t.length();
//             if(n!=m){
//                 return false;
//             }
//             // first create a frequency function which returns freq of each letter(a to z) in the string.. 
//             vector<int>freq1 = frequency(s);
//             vector<int>freq2 = frequency(t);
//             // if frequency of each letter in both the string is same then it will be the anagram...
//             if(freq1==freq2){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }
//     };