package test;

public class two_sum {
	
	 public static int[] twoSum(int[] nums, int target) {
	     for(int i=0;i<nums.length-1;i++) {
	    	 for(int j=i+1;j<nums.length;j++) {
	        		if(nums[i] + nums[j] == target) {
	        			return new int[] { i, j };
	        		}
	        	}
	     }
	     throw new IllegalArgumentException("No two sum solution");
	 }
	 public static void main(String [] args) {
		 int [] nums = {2, 7, 11, 15};
		 int target = 9;
		 int [] index = twoSum(nums,target);
		 System.out.print(index[0]+"  "+index[1]);
	 }
	

}
