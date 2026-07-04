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
    Node* rotateRight(Node* head, int k) {
        if(!head || !head->next || k == 0) return head;

        // Find length
        Node* temp = head;
        int length = 1;
        while(temp->next){
            temp = temp->next;
            length++;
        }

        // Make circular
        temp->next = head;

        // Reduce k
        k = k % length;

        int steps = length - k;

        // Find new tail
        Node* newTail = head;
        for(int i = 1; i < steps; i++){
            newTail = newTail->next;
        }

        // New head
        Node* newHead = newTail->next;
        newTail->next = NULL;

        return newHead;
    }
};