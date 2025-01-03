int waysToSplitArray(vector<int>& nums) {
    int count = 0;
    int n = nums.size();
    int totalSum = 0;
    for(int i=1;i<n;i++) {
        totalSum+=nums[i];
    }
    int sum = 0;
    for(int i=0;i<n-1;i++) {
        sum += nums[i];
        if(sum >= totalSum) {
            count++;
            totalSum -= nums[i+1];
        } else break;
    }
    return count;
}