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

class Solution {
public:
    Node* deleteMiddle(Node* head) {

        // If list has 0 or 1 node
        if (head == NULL || head->next == NULL)
            return NULL;

        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;

        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Delete the middle node
        prev->next = slow->next;

        delete slow;   // Optional on LeetCode, but good practice in C++

        return head;
    }
};