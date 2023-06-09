#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n) {
    //  Write your code here.
    int l, r;
    for(l=n-2; l>=0; l--) {
        if(permutation[l] < permutation[l+1]) {
            break;
        }
    }
    if(l<0) {
        reverse(permutation.begin(), permutation.end());
    }
    else {
        for(r=n-1; r>l; r--) {
            if(permutation[r] > permutation[l]) {
                break;
            }
        }
        swap(permutation[l], permutation[r]);
        reverse(permutation.begin()+l+1, permutation.end());
    }
    return permutation;
}
