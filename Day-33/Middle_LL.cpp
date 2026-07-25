#include <bits/stdc++.h>
#include <iostream>
#include <utility>

struct Node{
    int data;
    struct Node* next;

};
struct Node* head = NULL;

struct Node* createNode(int  value){
    struct Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    return newNode;

}




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
    Node* middleNode(Node* head) {
        Node* slow = h
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};
