class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> primes={2,3,5};
        priority_queue<long,vector<long>,greater<long>> pq;
        unordered_set<long> visited;
        pq.push(1);
        visited.insert(1);
        long curr;
        for(int i=0;i<n;i++){
            curr=pq.top();
            pq.pop();
            for(int prime:primes){
                long new_ugly=curr*prime;
                if(visited.find(new_ugly)==visited.end()){
                    pq.push(new_ugly);
                    visited.insert(new_ugly);
                }
            }
        }
        return (int)curr;
    }
};