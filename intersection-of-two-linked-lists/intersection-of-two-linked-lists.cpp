/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        unordered_set<ListNode*> s;
        if(temp1==NULL || temp2==NULL)return 0;
        while(temp1!=NULL){
            s.insert(temp1);
            temp1 = temp1->next;
        }
        while(temp2!=NULL){
            if(s.find(temp2) != s.end())return temp2;
            else{temp2 = temp2->next;}
        }
        return 0;
    }
};