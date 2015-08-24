#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *lTag = NULL;
		ListNode *HeadNode = NULL;
		int nFlag = 0;
		while ( 1)
		{
			int nSum = 0;
			if (nFlag)
			{
				nSum+=1;
			}
			if (l2 == NULL && l1 == NULL)
			{
				break;
			}
			if (l1 != NULL)
			{
				nSum+=l1->val;
				l1 = l1->next;
			}
			if (l2 != NULL)
			{
				nSum+=l2->val;
				l2 = l2->next;
			}
			ListNode* Temp = new ListNode(0);


			Temp->val = nSum%10;
			Temp->next = NULL;
			if (lTag == NULL)
			{
				lTag = Temp;
				HeadNode = lTag;
			}
			else
			{
				lTag->next = Temp;
				lTag = lTag->next;
			}
			if (nSum > 9)
			{
				nFlag = 1;
			}
			else
			{
				nFlag = 0;
			}
		}
		return HeadNode;
	}
};
