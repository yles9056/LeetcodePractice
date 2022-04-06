/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
 public:
  ListNode* swapPairs(ListNode* head) {
    ListNode* dummy = new ListNode(0, head);
    ListNode* current = dummy;

    while (current) {
      if (!current->next || !current->next->next) {
        break;
      }

      ListNode* next1 = current->next;
      ListNode* next2 = current->next->next;
      ListNode* next3 = current->next->next->next;

      current->next = next2;
      next2->next = next1;
      next1->next = next3;

      current = next1;  // current->next->next
    }

    /*current = dummy->next;
    while(current) {
        cout << current->val << " ";
        current = current->next;
    }*/

    return dummy->next;
  }
};