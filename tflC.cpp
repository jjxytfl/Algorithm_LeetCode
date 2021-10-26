#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <math.h>
#include <set>
#include <map>
#include <bitset>
#include <queue>
#include <functional>
#include <stack>
#include <iomanip>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
	
};


struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
	
};


struct cmp1{
	bool operator()(const pair<int, int> &a, const pair<int, int> &b){
		return a.first + a.second < b.first + b.second;
	}
};


class Solution {
public:
	vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
		priority_queue<int, vector<int>, greater<int>> q;
		unordered_map<int, int> map;
		int n = nums2.size();

		for (int i = 0; i < n - 1; i++){
			if (nums2[i] > nums2[i + 1]){
				q.push(nums2[i]);
			}
			else{
				map[nums2[i]] = nums2[i + 1];
				while (!q.empty()){
					auto t = q.top();
					if (t < nums2[i + 1]){
						map[t] = nums2[i + 1];
						q.pop();
					}
					else{
						break;
					}
				}
			}
		}
		vector<int> ans(nums1.size());
		for (int i = 0; i < nums1.size(); i++){
			ans[i] = map[nums1[i]] != 0 ? map[nums1[i]] : -1;
		}
		return ans;
	}
};

int main(){
	Solution a;
	vector<string> b = { "101" };
	vector<int> c = { 2, 5};
	vector<int> c2 = { 3, 2 };
	vector<bool> c1 = { true, false };
	vector<vector<int>> q = { { 3,0, 5 }, {1, 2, 10 } };
	
	bitset<32> bs(3);

	unordered_set<int> se;

	unordered_map<int,int> mp;

	//cout << fixed << setprecision(2) << 5.164 << endl;;

	system("pause");

	return 0;
}


