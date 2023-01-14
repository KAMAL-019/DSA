int Solution::solve(vector<int> &A) {
    unordered_map<int,int>unm;
    int N = A.size();
    for(int i = 0; i<N ; i++){
        unm[A[i]]++;
    }
    for(int i = 0;i<N;i++){
        int target = A[i];
        auto num = unm.find(target);
        if(num->second > 1){
            return A[i];
        }
    }
    return -1;
}
