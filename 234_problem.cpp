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

//     ListNode* middleNode(ListNode* head) {
//         // slow-fast algo / tortoise algo
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast->next != NULL){
//             fast = fast->next;
//             if(fast->next != NULL){
//                 fast = fast->next;
//                 slow = slow->next;
//             }
//         }
//         return slow; // middle of LL
//     }

//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         while(curr != NULL){
//             ListNode* temp = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = temp;
//         }
//         return prev;
//     }    


//     bool compare(ListNode* &head, ListNode* &head2){
//         ListNode* temp1 = head;
//         ListNode* temp2 = head2;

//         while(temp2!=NULL){
//             if(temp1->val != temp2->val){
//                 return false;
//             }else{
//                 temp1 = temp1->next;
//                 temp2 = temp2->next;
//             }
//         }
//         return true;
//     }

//     bool isPalindrome(ListNode* head) {
//         // doing it in O(1) space for this I have to compromise original Linked list which is not good practice......

//         // find middle 
//         // break LL in two halves 
//         // then reverse second half
//         // compare both

//         // Step1
//         ListNode* mNode = middleNode(head);

//         //Step2
//         ListNode* temp = mNode->next;
//         mNode->next = NULL;

//         //Step3
//         ListNode* head2  = reverseList(temp);

//         //Step4
//         bool ans = compare(head, head2);
//         return ans;
//     }
// };