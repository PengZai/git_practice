#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class ListNode{

  public:
    int val;
    ListNode *next;

    ListNode():val(0), next(nullptr){};
    ListNode(int val):val(val), next(nullptr){};
    ListNode(int val, ListNode* head):val(val), next(head){};  

};


#endif