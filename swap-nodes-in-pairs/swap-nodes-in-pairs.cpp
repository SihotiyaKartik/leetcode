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
        ListNode* temp = head;
        if(head==NULL)return head;
        while(temp!=NULL && temp->next != NULL){
            int res = temp->val;
            temp->val = temp->next->val;
            temp->next->val = res;
            temp = temp->next->next;
            
        }
        return head;
    }
};