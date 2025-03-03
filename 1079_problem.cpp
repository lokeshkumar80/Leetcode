// class Solution {
//     public:
//     //  POTD Problem: understand it and solve it again
//         int countSequences(vector<int>& freq) {
//             int count = 0;
//             for (int i = 0; i < 26; i++) {
//                 if (freq[i] > 0) {  // If the letter is available
//                     count++;         // Count this new sequence
//                     freq[i]--;       // Use this letter
//                     count += countSequences(freq);  // Continue forming sequences
//                     freq[i]++;       // Backtrack (restore count)
//                 }
//             }
//             return count;
//         }
    
//         int numTilePossibilities(string tiles) {
//             vector<int> freq(26, 0);  // Frequency array for letters A-Z
//             for (char c : tiles) freq[c - 'A']++; // Count letter occurrences
//             return countSequences(freq);
//         }
//     };