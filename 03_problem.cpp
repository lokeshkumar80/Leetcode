// class Solution {
//     public:
//         // Do it again it was sliding window problem.... at this time more help taken by chat gpt.... 
//         int lengthOfLongestSubstring(string s) {
//             //     int n = s.length();
//             //     int anslength = 0;
//             //     string temp = "";
//             //     stack<int> si; 
//             //     int i = 0;
        
//             //     while (i < n) {  // Fix: changed i <= n to i < n
//             //         int flag = 0;
        
//             //         while (!si.empty() && temp.find(s[si.top()]) == string::npos) { // Fix: Corrected find() condition
//             //             temp.push_back(s[si.top()]);
//             //             si.pop();
//             //             flag = 1;
//             //         }
        
//             //         if (flag) {
//             //             si.push(i);
//             //             i++;
//             //         } else if (!si.empty()) {
//             //             anslength = max(anslength, (int)temp.length()); // Fix: Directly update anslength
                        
//             //             if (!temp.empty() && !si.empty()) {
//             //                 size_t di = temp.find(s[si.top()]);
//             //                 if (di != std::string::npos) {
//             //                     temp = temp.substr(di + 1);  // Fix: Corrected erase logic
//             //                 }
//             //             }
//             //         } else {
//             //             si.push(i);
//             //             i++;
//             //         }
//             //     }
        
//             // return anslength;
    
//             unordered_map<char, int> charIndex;
//             int left = 0, maxLength = 0;
    
//             for (int right = 0; right < s.length(); right++) {
//                 // If s[right] is already in the map, move left pointer
//                 if (charIndex.find(s[right]) != charIndex.end() && charIndex[s[right]] >= left) {
//                     left = charIndex[s[right]] + 1;  // Move left to the right of the last occurrence
//                 }
    
//                 charIndex[s[right]] = right;  // Store/update character index
//                 maxLength = max(maxLength, right - left + 1);
//             }
            
//             return maxLength;
//         }
//     };
    