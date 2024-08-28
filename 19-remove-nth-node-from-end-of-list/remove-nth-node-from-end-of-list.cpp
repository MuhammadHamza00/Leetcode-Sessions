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
    ListNode* removeNthFromEnd(ListNode* head, int N) {
        if(head == NULL){
            return NULL;
        }
        int cnt=0;
        ListNode *temp = head;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        if(cnt == N){
            ListNode* newhead = head->next;
            delete (head);
            return newhead;
        }
        int res = cnt - N;
        ListNode *newtemp = head;
        while(newtemp!=NULL){
            res--;
            if (res == 0) {
                break;
            }
            newtemp=newtemp->next;
        }
        ListNode *nthnode = newtemp->next;
        newtemp->next = newtemp->next->next;
        delete(nthnode);
        return head;
    }
};