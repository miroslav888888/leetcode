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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* totail = head;
        int temp = 0;   //存進位的1
        while(l1!=nullptr || l2!=nullptr || temp!=0){
            int sum = 0;
            if(l1!=nullptr){
                sum = sum + l1->val;
                l1 = l1->next;
            }
            if(l2!=nullptr){
                sum = sum + l2->val;
                l2 = l2->next;
            }
            sum = sum + temp;
            temp = sum / 10;
            ListNode* temp2 = new ListNode(sum%10);
            totail->next = temp2;
            totail = totail->next;
        }
        return head->next;
    }
};