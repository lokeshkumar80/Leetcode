// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//     // // Method 1: using map to store pointers ...
//     //     map<ListNode* , bool> table;

//     //     ListNode* temp = head;
//     //     while(temp!=NULL){
//     //         if(table[temp]==false){
//     //             // hence temp is not present then store 
//     //             table[temp] = true;
//     //         }else{
//     //             // cycle present
//     //             return true;
//     //         }
//     //         temp = temp->next;
//     //     }

//     //     // if function is not returned yet means cycle is not present 
//     //     return false;

//     // // Method 2 Floyd Cycle Algorithm / Two Pointer approach

//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast != NULL){
//             fast = fast->next;
//             if(fast!=NULL){
//                 fast = fast->next;
//                 slow = slow->next;
//             }

//             if(fast == slow){
//                 return true;
//             }
//         }
        
//         // if function is not returned yet means cycle is not present
//         return false;
//     }
// };