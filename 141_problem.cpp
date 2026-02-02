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

//         // using map to store pointers ...
//         map<ListNode* , bool> table;


//         ListNode* temp = head;
//         while(temp!=NULL){
//             if(table[temp]==false){
//                 // hence temp is not present then store 
//                 table[temp] = true;
//             }else{
//                 // cycle present
//                 return true;
//             }
//             temp = temp->next;
//         }

//         // if function is not returned yet means cycle is not present 
//         return false;
//     }
// };
