// class Solution {
//     public:
//     //  POTD Problem : Submitted Successfully (But optimization required)
//         vector<bool> Sieve(int n)
//         {
//             // create a sieve array telling isPrime till 'n'
//             vector<bool> sieve(n + 1, true);
//             sieve[0] = sieve[1] = false;
    
//             // for (long long int i = 2; i <= n; i++)
//             for (int i = 2; i * i <= n; i++) 
//             // Optimisation 2: (Outer loop): // optimization 2 occur bcz of optimization 1...
//                                                        // if i becomes > sqrt(N), then the
//                                                        // inner loop does not work.
//             {
//                 if (sieve[i] == true)
//                 {
//                     // means, sieve[i] is Prime and mark its multiples
//                     //  as non-prime.
//                     //long long int j = i * 2;
//                     int j = i * i; // Optimisation 1 (inner loop):
//                                              // first unmarked number would be i*i
//                                              // as, other have been marked by 2 to (i - 1).
//                     while (j <= n)
//                     {
//                         sieve[j] = false;
//                         j += i;
//                     }
//                 }
//             }
//             return sieve;
//         }
    
//         vector<int> closestPrimes(int left, int right) {
//             // Get me prime marking array.
//             // to be used to mark primes in segmented sieve.
//             vector<bool> sieve = Sieve(right);
//             vector<int> basePrimes;
//             for (int i = 0; i < sieve.size(); i++)
//             {
//                 if (sieve[i] && i>=left){
//                     basePrimes.push_back(i);
//                 }
//             }
    
//             vector<int>ans;
//             int n = basePrimes.size();
//             if(n<=1){
//                 ans.push_back(-1);
//                 ans.push_back(-1);
//                 return ans;
//             }
//             int diff;
//             int min = INT_MAX;
//             stack<int>s;
//             for(int i=0; i<n-1; i++){
//                 diff = basePrimes[i+1] - basePrimes[i];
//                 if(diff<min){
//                     min = diff;
//                     s.push(basePrimes[i+1]);
//                     s.push(basePrimes[i]);
//                 }
//             }
//             ans.push_back(s.top());
//             s.pop();
//             ans.push_back(s.top());
//             return ans;
    
//         }
//     };