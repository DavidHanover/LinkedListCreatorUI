/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.h
 * Author: supercheeselord
 *
 * Created on July 12, 2017, 4:51 PM
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;

    struct node {
        double data;
        node* nxt;
    };

class LinkedList{
public:

    
    node* head;
    int size;    
    

    LinkedList();
    LinkedList(double val);
    LinkedList(const LinkedList& A);
    LinkedList& operator=(const LinkedList& rhs);
    ~LinkedList();
    void pushFront(double data);
    void pushBack (double data);
    void insert (int index, double val);
    void deleteDuplicates (double val);
    double MthLastElement (int M);
    int returnSize();
    void reverseList();
    friend ostream & operator<<(ostream& os, const LinkedList& rhs);
    





};

#endif /* LINKEDLIST_H */