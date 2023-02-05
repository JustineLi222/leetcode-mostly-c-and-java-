class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] twonum = new int[2];
        
        for(int i=0;i<nums.length;i++){
           for(int j=i+1;j<nums.length;j++){
            if(nums[i]+nums[j]==target){
                twonum[0]=i;
                twonum[1]=j;
            }

           }
           
             }
             return twonum;

        }

    }
