#include <iostream>
#include <algorithm>
#include <vector>
#include <map>




using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> aMap;
		vector<int> result;
		for (int i = 0; i < nums.size(); i++) {
			int v = nums[i];

			if (aMap.find(target - v) != aMap.end()) {

				result.push_back(aMap[target - v]);
				result.push_back(i);
				return result;
			}
			else {
				aMap[v] = i;
			}
		}
		return result;
	}
};
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution2 {
public:

	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int sum = 0;
		ListNode *l3 = NULL;
		ListNode **node = &l3;
		while (l1 != NULL || l2 != NULL || sum > 0) {

			if (l1 != NULL) {
				sum = sum + l1->val;
				l1 = l1->next;
			}
			if (l2 != NULL) {
				sum = sum + l2->val;
				l2 = l2->next;
			}
			(*node) = new ListNode(sum % 10);
			sum = sum / 10;
			node = &((*node)->next);
		
			
		}
		return l3;
	}
};

int main()
{
	ListNode *ass = new ListNode(5);
	ass->next = NULL;
	ListNode *ass2 = new ListNode(4);
	ass2->next = NULL;
	ass->next = ass2;
	ListNode *ass3 = new ListNode(3);
	ass3->next = NULL;
	ass2->next = ass3;

	ListNode *ass1 = new ListNode(2);
	ass1->next = NULL;
	ListNode *ass4 = new ListNode(6);
	ass4->next = NULL;
	ass1->next = ass4;
	ListNode *ass5 = new ListNode(3);
	ass5->next = NULL;
	ass4->next = ass5;

	

	
	Solution2 aa;
	ListNode *ass6 = aa.addTwoNumbers(ass,ass1);

	while (ass6 != NULL) {
		cout << ass6->val;
		cout << "->";
		ass6 = ass6->next;
	}
	cout << "NULL \n";


	//aa.addTwoNumbers();


	/*Solution aaa;
	vector<int> q;
	q.push_back(2);
	q.push_back(7);
	q.push_back(11);
	q.push_back(15);

	q = aaa.twoSum(q, 17);

	for (int i = 0; i < q.size(); i++)
	{
		cout << q[i] << endl;
	}*/
	system("PAUSE");
	return 0;
}