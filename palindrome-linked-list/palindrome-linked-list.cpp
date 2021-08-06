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
    bool isPalindrome(ListNode* head) {
       if(head==NULL) return false;
        ListNode* temp = head;
        stack<int> s;
        while(temp){
            s.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(temp){
            int i = s.top();
            s.pop();
                if(temp->val != i)return false;
            temp = temp->next;
        }
        return true;
    }
};