// class Solution {
//     public:
    
//     // // M1
//     //     bool isPrime(int n)
//     //     {
//     //         if (n <= 1)
//     //             return false;
//     //         for (int i = 2; i < n; i++)
//     //         {
//     //             if (n % i == 0)
//     //                 return false;
//     //         }
//     //         return true;
//     //     }
    
//     // // M2
//     //     bool isPrime(int n)
//     //     {
//     //         if (n <= 1)
//     //             return false;
//     //         for (int i = 2; i * i <= n; i++)
//     //         {
//     //             if (n % i == 0)
//     //                 return false;
//     //         }
//     //         return true;
//     //     }
    
//     //     int countPrimes(int n) {
    
//     //         int c = 0;
//     //         for (int i = 2; i < n; i++)
//     //         {
//     //             if (isPrime(i))
//     //                 c++;
//     //         }
//     //         return c;
//     //     }
//     // };
    
//     // // M3 Sieve of Eratosthenes Algorithm
//         int countPrimes(int n)
//         {
//             vector<bool> prime(n + 1, true);//this is consist of 0 to n indices marked as true
//             prime[0] = prime[1] = false; // as we are not checking for these in loop
//             int ans = 0;
    
//             for (int i = 2; i < n; i++)
//             {   // we are checking only 2 to n-1 as we have count only strictly less than n
//                 if (prime[i])
//                 {
//                     ans++;
    
//                     int j = i * 2;
//                     while (j < n)
//                     {
//                         prime[j] = false;
//                         j += i;
//                     }
//                 }
//             }
//             return ans;
//         }
//     };