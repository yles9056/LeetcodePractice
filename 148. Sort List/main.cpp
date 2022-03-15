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
  ListNode* merge(ListNode* l1, ListNode* l2) {
    ListNode tmp(0);
    ListNode* current = &tmp;

    while (l1 != NULL && l2 != NULL) {
      if (l1->val < l2->val) {
        current->next = l1;
        l1 = l1->next;
      } else {
        current->next = l2;
        l2 = l2->next;
      }

      current = current->next;
    }

    if (l1) {
      current->next = l1;
    } else if (l2) {
      current->next = l2;
    }

    return tmp.next;
  }

  ListNode* sortList(ListNode* head) {
    if (head == NULL || head->next == NULL) {
      return head;
    }

    ListNode* slow = head;
    ListNode* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
      slow = slow->next;
      fast = fast->next->next;
    }

    fast = slow->next;
    slow->next = NULL;

    return merge(sortList(head), sortList(fast));
  }
};