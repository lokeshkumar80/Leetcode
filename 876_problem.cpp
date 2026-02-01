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

//     int getlength(ListNode* head){
//         int len=1;
//         ListNode* temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//             len++;
//         }
//         return len;
//     }

//     ListNode* middleNode(ListNode* head) {
//         int len = getlength(head);
//         int pos = len/2 + 1;
//         ListNode* temp = head;
//         while(pos!=1){
//             temp = temp->next;
//             pos--;
//         }
//         return temp;


//         // slow-fast algo / tortoise algo
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast != NULL){
//             fast = fast->next;
//             if(fast != NULL){
//                 fast = fast->next;
//                 slow = slow->next;
//             }
//         }
//         return slow; // middle of LL
// //     }
// };