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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        int count = 0;
        //traversing list to get size of list
        while(temp1!=NULL){
            ++count;
            temp1 = temp1->next;
        }
        int x = count - n + 1;
        //when we have to remove first element of list
        if(x==1){
            head = temp2->next;
            return head;
            
        }
        //when we have to remove last element of list 
        else if(n==1){
            while(temp2->next->next != NULL){
                temp2 = temp2->next;
            }
            temp2->next = NULL;
            return head;
        }
        else{
            x--;
            while(x--){
                temp2 = temp2->next;
                
                
            }
            temp2->val = temp2->next->val;
            temp2->next = temp2->next->next;
            return head;
            
        }
        
    }
};