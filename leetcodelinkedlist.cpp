
// 1. Reverse Linked List

// #include <iostream>
// using namespace std;

// // Definition of ListNode
// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;

//         while (curr != NULL) {
//             ListNode* nextNode = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = nextNode;
//         }

//         return prev;
//     }
// };


// 2. Merge Two Sorted Lists

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//         ListNode dummy(0);
//         ListNode* temp = &dummy;

//         while (l1 != NULL && l2 != NULL) {
//             if (l1->val < l2->val) {
//                 temp->next = l1;
//                 l1 = l1->next;
//             } else {
//                 temp->next = l2;
//                 l2 = l2->next;
//             }
//             temp = temp->next;
//         }

//         if (l1 != NULL) temp->next = l1;
//         if (l2 != NULL) temp->next = l2;

//         return dummy.next;
//     }
// };

// 3. Delete Node in a Linked List


// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         node->val = node->next->val;
//         node->next = node->next->next;
//     }
// };


// 4. Middle of the Linked List


// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         return slow;
//     }
// };


// 5. Linked List Cycle

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast) return true;
//         }

//         return false;
//     }
// };