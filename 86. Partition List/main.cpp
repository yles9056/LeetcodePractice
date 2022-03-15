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
  ListNode* partition(ListNode* head, int x) {
    ListNode node1(0), node2(0);
    ListNode* left = &node1;
    ListNode* right = &node2;
    ListNode* current = head;
    while (current) {
      if (current->val < x) {
        left->next = current;
        left = left->next;
      } else {
        right->next = current;
        right = right->next;
      }
      current = current->next;
    }
    right->next = NULL;
    left->next = node2.next;
    return node1.next;
  }
};