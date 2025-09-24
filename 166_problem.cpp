// class Solution {
// public:

// // Logic is same but fails for some cases as it does not handel repetition properly
//     // bool checkRep(string &str){
//     //     size_t pos = str.find('.'); 
//     //     // find() returns unsigned type.... if not found then it returns npos 
//     //     if(pos != string::npos){
//     //         string traced = "";
//     //         size_t pos1;
//     //         for(size_t i = pos + 1; i < str.length(); i++){
//     //             char ch = str[i];

//     //             pos1 = traced.find(ch);
//     //             if(pos1 != string::npos){
//     //                 traced.push_back(')');
//     //                 traced.insert(pos1, 1, '(');
//     //                 // pos = pos1 → where to insert.1 → how many times to insert the character
//     //                 // 'l' → the character to insert.

//     //                 str.erase(pos+1); 
//     //                 // remove all characters from pos+1 to end (after decimal)

//     //                 str = str + traced;
//     //                 return true;
//     //             }else{
//     //                 traced.push_back(ch);
//     //             }
//     //         }
//     //     }
//     //     return false;
//     // }

//     // string fractionToDecimal(int numerator, int denominator) {
//     //     // double num = numerator;
//     //     // double den = denominator;
//     //     // double fd = num / den;
//     //     // ⚠️ Problem: Using double will only give you an approximate decimal value 
//     //     // (limited by floating-point precision).

//     //     string str = "";

//     //     if(numerator == 0){
//     //         return "0";
//     //     }
//     //     if(numerator<0 && denominator>0 || numerator>0 && denominator<0){
//     //         str+='-';
//     //     }

//     //     long long num = llabs((long long)numerator);
//     //     long long den = llabs((long long)denominator);
//     //     // Why llabs?
//     //     // abs() works for int.
//     //     // labs() works for long.
//     //     // llabs() works for long long.

//     //     bool flag = true;
//     //     while(true){
//     //         long long result = num / den ;
//     //         str += to_string(result);
//     //         long long remainder = num % den ;
//     //         if(flag && remainder != 0 ){
//     //             flag = false;
//     //             str += '.';
//     //         }
//     //         if(remainder != 0){
//     //             num = remainder * 10;
//     //         }else{
//     //             break;
//     //         }
//     //         bool checkflag = checkRep(str);
//     //         if(checkflag){
//     //             return str;
//     //         }
//     //     }

//     //     return str;
//     // }

//     string fractionToDecimal(int numerator, int denominator){
//         if (numerator == 0){
//             return "0";
//         }

//         string result;

//         // Handle sign
//         if (numerator<0 && denominator>0 || numerator>0 && denominator<0){
//             result += "-";
//         }

//         // Convert to positive long long to avoid overflow
//         long long num = llabs((long long)numerator);
//         long long den = llabs((long long)denominator);

//         // Integer part
//         result += to_string(num / den);
//         long long rem = num % den;
//         if (rem == 0){
//             return result;
//         }

//         result += ".";


//         unordered_map<long long, int> remainderPos;
//         // this map stores the pairs of remainders and index of these remainders in the 
//         // string where next fractional digit will be placed ...

//         // Fractional part
//         while (rem != 0) {
//             if (remainderPos.count(rem)) {
//                 // repeating part found
//                 result.insert(remainderPos[rem], "(");
//                 result += ")";
//                 break;
//             }
//             remainderPos[rem] = result.size();  //stores the index in the string where the 
//             // next fractional digit (for this remainder) will be placed.

//             rem *= 10;
//             result += to_string(rem / den);
//             rem %= den;
//         }
//         return result;
//     }
// };