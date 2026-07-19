#include <bits/stdc++.h>
#include <iostream>
#include <utility>


struct Node{
    int data;
    struct Node* next;

};
struct Node* head = NULL;

struct Node* createNode(int  val){
    struct Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    return newNode;

}






class Solution {
public:
    Node* swapNodes(Node* head, int k) {
        Node* first = head;
        
        // Move first to kth node from beginning
        for (int i = 1; i < k; i++) {
            first = first->next;
        }

        Node* kthFromStart = first;
        Node* second = head;

        // Move together
        while (first->next != nullptr) {
            first = first->next;
            second = second->next;
        }

        // Swap values
        swap(kthFromStart->val, second->val);

        return head;
    }
};