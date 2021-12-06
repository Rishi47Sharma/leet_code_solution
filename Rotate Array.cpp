class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k =k%nums.size();
            reverse(nums,k,0,nums.size()-1);
            reverse(nums,k,k,nums.size()-1);
            reverse(nums,k,0,k-1);
            
      
    }
    void reverse(vector<int>& nums, int k,int start ,int end){
   while(start<end){
       
    int temp=nums[start];
    nums[start]=nums[end];
    nums[end]=temp;
    start++;
    end--;
       
   }
    
}
};
