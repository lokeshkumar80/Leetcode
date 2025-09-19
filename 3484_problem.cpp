// class Spreadsheet {
// public:
//     vector<vector<int>> sheet;

//     Spreadsheet(int rows) {
//     for (int i = 0; i < rows; i++) {
//         sheet.push_back(vector<int>(26, 0));
//     }
// }

// //Created Helper: parse cell like "A1", "B12" -> (row, col)
// // string cell (by value)
// // Makes a copy of the argument when the function is called.
// // More expensive if the string is large (though small here).
// // const string& cell (by reference to const)
// // Passes the string by reference, no copy is made.
// // const ensures you don’t accidentally modify the caller’s string.
// // More efficient and idiomatic in C++ when the function only needs to read the string.

//     pair<int, int> parseCell(const string& cell) {
//         int col = cell[0] - 'A';      // Column: first char
//         int row = stoi(cell.substr(1)) - 1; // Row: remaining chars
//         return {row, col};
//     }

//     void setCell(string cell, int value) {
//         auto [i, j] = parseCell(cell);
//         sheet[i][j] = value;
//     }

//     void resetCell(string cell) {
//         auto [i, j] = parseCell(cell);
//         sheet[i][j] = 0;
//     }

// // ⚠️ Why size_t?
// // Because string::find returns size_t (an unsigned type).
// // If you stored it in an int, you might accidentally mis-handle npos (since it’s usually a very large number like 18446744073709551615 on 64-bit systems).

//     int getValue(string formula) {
//         size_t plusPos = formula.find('+');
//         string left = formula.substr(1, plusPos); // after '=' to '+'
//         string right = formula.substr(plusPos + 1);

//         int A, B;

//         if (isdigit(left[0])) {
//             A = stoi(left);
//         }
//         else { 
//             auto [i, j] = parseCell(left); 
//             A = sheet[i][j]; 
//         }

//         if (isdigit(right[0])) {
//             B = stoi(right);
//         }
//         else { 
//             auto [i, j] = parseCell(right); B
//              = sheet[i][j]; 
//         }

//         return A + B;
//     }
// };
