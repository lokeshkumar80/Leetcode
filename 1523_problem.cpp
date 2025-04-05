class Solution {
    public:
        int countOdds(int low, int high) {
            if(low%2 != 0){
                low = low -1;
            }
            if(high%2 != 0){
                high = high+1;
            }
            // int totalodds;
            // totalodds = (high - low) / 2 ;
            // return totalodds;
            return (high-low)/2 ;
        }
    };