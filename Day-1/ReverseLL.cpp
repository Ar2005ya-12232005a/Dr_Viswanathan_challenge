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

void InsertAtTail(int value){
    struct Node* newNode = createNode(value);
    
    if(head == NULL){
        newNode->next = head;
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;

}

struct Node* ReverseLL(){
    struct Node* prev = NULL;
    struct Node* curr = head;
    struct Node* nextNode = NULL;

    while(curr != NULL){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

