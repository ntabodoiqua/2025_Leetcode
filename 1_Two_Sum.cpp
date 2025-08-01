#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> res;
	unordered_map<int,int> umap;
	for (int i = 0; i < nums.size(); i++) {
		int a = target - nums[i];
		if (umap.count(a)) {
			res.push_back(i);
			res.push_back(umap[a]);
			break;
		}
		umap[nums[i]] = i;
	}
	return res;        
}

int main() {
	vector<int> nums;
	int target;
	nums = {3,2,4};
	target = 6;
	vector<int> res = twoSum(nums, target);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << " ";
	}
	return 0;
}