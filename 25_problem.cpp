// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:

//     int getLength(ListNode* head){
//         ListNode* temp = head;
//         int len = 0;
//         while(temp!=NULL){
//             len++;
//             temp = temp->next;
//         }
//         return len;
//     }

//     ListNode* reverseKGroup(ListNode* head, int k) {

//         int len = getLength(head);

//         // if LL is empty // or remaing LL is empty
//         if(head == NULL){
//             return head;
//         }

//         // if invalid case or according to question 
//         if(k>len){
//             return head;
//         }

//         // reverse first k nodes

//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* temp = curr->next;
//         int pos = 1;

//         while(pos<=k){
//             temp = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = temp;
//             pos++;
//         }

//         // now here we have prev as the head of reverse list and head as tail
//         // and curr and temp as the head of remaining list...
//         // now we have to merge remaining LL after followed the same rule with tail
//         // of this (done till now) so ..

//         // use recursion now ...
//         head->next = reverseKGroup(temp, k);

//         // as prev is the head of updated LL
//         return prev;
//     }
// };