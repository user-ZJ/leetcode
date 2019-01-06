/*
 * twosum.cpp
 *
 *  Created on: 2019Äê1ÔÂ6ÈÕ
 *      Author: ZJ
 */
#include<iostream>
#include<vector>
#include "twosum.h"

using namespace std;

two_sum::two_sum() {
	// TODO Auto-generated constructor stub

}

two_sum::~two_sum() {
	// TODO Auto-generated destructor stub
}

vector<int> two_sum::twoSum(vector<int>& nums, int target){
	 int length = nums.size();//sizeof(nums)/sizeof(nums[0]);
			vector<int> index(2,-1);
			for(int i=0;i<length-1;i++){
				for(int j=i+1;j<length;j++){
					if(nums[i]+nums[j]==target){
						index[0] = i;
						index[1] = j;
						return index;
					}
				}
			}
			return index;
}



int main(){
	int n[] = {2, 7, 11, 15};
	vector<int> nums(n,n+4);
	int target = 9;
	two_sum ts;
	//two_sum *ts = new two_sum();
	vector<int> index = ts.twoSum(nums,target);
	cout<<index[0]<<" "<<index[1]<<endl;
	return 0;
}
