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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr;
        ListNode *current = head;
        ListNode *nextNode;
        
        while (current != nullptr) {
            nextNode = current->next; // Store next node
            current->next = prev;     // Reverse current node's pointer
            prev = current;           // Move pointers one position ahead
            current = nextNode;       // Move pointers one position ahead
        }
        return prev; // Previous is the new head of the reversed list
    }
};