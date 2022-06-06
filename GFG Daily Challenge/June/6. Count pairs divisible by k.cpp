// Count pairs in an array divisible by K
// https://practice.geeksforgeeks.org/problems/count-pairs-in-array-divisible-by-k/1#
// Video Solution: https://www.youtube.com/watch?v=IUami0pKijo
// store the remainders in a map. Remainder addition logic


class Solution
{
    public:
    long long countKdivPairs(int A[], int n, int K)
    {
        long long ans=0;
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
            int rem=A[i]%K;
            
            if(rem!=0){
                ans+=m[K-rem];
            }
            else
                ans+=m[0];
            m[rem]++;
        }
        return ans;
        
    }
};
