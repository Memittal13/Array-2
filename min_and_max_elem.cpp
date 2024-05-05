//Time O(n)
//Space O(1)
vector<int> findSum(int A[], int N)
{ 
    vector<int> ans;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int i = 0;
    int j = N - 1; // Using N instead of A.size()-1

    while (i < j) {
        if (A[i] < A[j]) {
            mini = std::min(mini, A[i]);
            maxi = std::max(maxi, A[j]);
        } else {
            mini = std::min(mini, A[j]);
            maxi = std::max(maxi, A[i]);
        }
        i++; // Update i and j to avoid infinite loop
        j--;
    }
    ans.push_bacK(mini);
    ans.push_back(maxi);
    return ans;
}
