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
//     ListNode* deleteMiddle(ListNode* head) {

//         // use two pointer approach..
//         ListNode* slow = head;
//         ListNode* fast = head;
//         ListNode*temp = head; // to track previous node of slow

//         // only one Node 
//         if(head->next == NULL){
//             return NULL;
//         }

//         // empty linked list
//         if(head == NULL){
//             return NULL;
//         }

//         // find middle node and previous of middle node
//         while(fast != NULL){
//             fast = fast->next;
//             if(fast!=NULL){
//                 fast = fast->next;
//                 temp = slow; // to track previous node of middle node.
//                 slow = slow->next;
//             }
//         }

//         // here now slow is middle node
//         // temp is previous node middle node
        
//         temp->next = slow->next;
//         slow->next = NULL;
//         delete slow;
//         return head;
//     }
// };