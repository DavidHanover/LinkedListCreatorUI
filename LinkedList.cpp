/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.cpp
 * Author: supercheeselord
 * 
 * Created on July 12, 2017, 4:51 PM
 */


using namespace std;

#include<stdio.h>
#include "LinkedList.h"




LinkedList::LinkedList(){
    size = 0;
    head = NULL;
    //head->nxt=NULL;
    
}
LinkedList::LinkedList(double val){
    node* temp = new node;
    temp->data=val;
    head=temp;
    size=1;
}

LinkedList::LinkedList(const LinkedList& A){
//    if (A.head==NULL){head = NULL; size=0;}
//    else{
//        size = A.size;
//        node* posA = A.head;
//        node* pos = head;
//        head = new node;
//        head->data = A.head->data;
//        while(posA->nxt!=NULL)
//        {
//            pos->nxt=new node;
//            pos = pos->nxt;
//            posA=posA->nxt;
//            pos->data=posA->data;
//            
//        }   
//    }
    size = A.size;
    node * p1 = 0;//current
node * p2 = 0;//next

if( A.head == 0 )
    head = 0;

else
{
    head = new node;
    head -> data = A.head -> data;


    p1 = head;
    p2 = A.head -> nxt;
}

while( p2 )
{
    p1 -> nxt = new node;
    p1 = p1 -> nxt;
    p1 -> data = p2 -> data;


    p2 = p2 -> nxt;
}
p1 -> nxt = 0;
}

LinkedList& LinkedList::operator=(const LinkedList& rhs){
//    if (rhs.size>0){
//        node* pos = head;
//        node* del = pos;
//        
//        while(pos->nxt!=NULL){
//            pos=pos->nxt;
//            delete del;
//            del = pos;
//                }
//        delete del;
//        size = 0;
//        return *this;
//            }
//    
//    if(rhs.head==NULL){
//        size = 0;
//        head=NULL;
//        return *this;
//    }else{
//        node* posR = rhs.head;
//        node* pos = head;
//        head=new node;
//        head->data=posR->data;
//        size=1;
//        
//        while(posR->nxt!=NULL){
//            
//        pos->nxt = new node;    
//        posR=posR->nxt;
//        pos=pos->nxt;
//        pos->data=posR->data;
//        size++;
//        }
//        
    
    
		if(rhs.head == NULL)
                {        node* del;
	while(head != NULL){
	del = head;
	head = head->nxt;
	delete del;
	del = NULL;
	}
	head = NULL;
	size = 0;}
		else{
                    {        node* del;
	while(head != NULL){
	del = head;
	head = head->nxt;
	delete del;
	del = NULL;
	}
	head = NULL;
	size = 0;}
			node* rhshead = rhs.head;
			node* temp = new node;
			//temp->data = rhshead->data;
			head = temp;
			head->data = rhshead->data;
			head->nxt = NULL;
			rhshead = rhshead->nxt;
			//node* link = head;
			size = 1;

			while(rhshead != NULL){
				node* second = new node;
				second->data = rhshead->data;
				second->nxt = NULL;
				temp->nxt = second;
				temp = temp->nxt;
				rhshead = rhshead->nxt;
				size++;
			}


		}

		return *this;

	

    }


LinkedList::~LinkedList(){
	if(head == NULL)
	return;
        node* del;
	while(head != NULL){
	del = head;
	head = head->nxt;
	delete del;
	del = NULL;
	}
	head = NULL;
	size = 0;
	}
                
    


void LinkedList::pushFront(double data){
    node* nH = new node;
    nH->data=data;
    if(head==NULL){
        head=nH;
        head->nxt=NULL;
        size=1;}
    else{
    nH->nxt=head;
    head=nH;
    size++;
    }
}

void LinkedList::pushBack(double data){
    node* nn = new node;
    nn->data=data;
    nn->nxt=NULL;
    if(head==NULL){head = nn; size = 1;}
    else{
        node* pos = head;
        while(pos->nxt!=NULL){
            pos=pos->nxt;
        }
        pos->nxt=nn;
        size++;
    }
}

void LinkedList::insert(int index, double val){
    if (size==0||size==NULL||size==1){cout<<"Please use pushFront() "
            "or pushBack() first. List is either empty or only has 1 item."
            <<endl; 
            return;}
    
    else
    if(index>size||index<=0){cout<<"Invalid index! Index must be"
            "between 1 and "<<size<<"."<<endl; 
            return;}
    
    else
    if(index==size){cout<<"Index is same as full size of list.  Use pushBack()"
            " instead!"<<endl; 
            return;}    
    
    else
    {node* pos = head;
     node* prv = head;
     pos=pos->nxt;
     for(int i=2; i<index;i++){
         pos=pos->nxt;
         prv=prv->nxt;
     }
     node* h = new node;
     h->data = val;
     prv->nxt=h;
     h->nxt=pos;
     size++;     
    }
}

void LinkedList::deleteDuplicates(double val){
    bool isn = false;
    node* pos = head;
    if(pos->data==val){isn = true;}
    else{
    while(pos->nxt!=NULL){
        if(pos->data==val){
        isn = true; break;}
        }
    }
    if(isn==false){cout<<"Value is not present in list!  No doubles."<<endl;
    return;}
    else{
    int cnt=0;    
    bool isd = false;
    node* prv = pos;
    while(pos->nxt!=NULL){
        pos=pos->nxt;
        if (pos->data==val){
            isd = true;
            prv->nxt=pos->nxt;
            delete pos;
            pos=prv;
            size--;
            cnt++;
            }
        }
    if(isd==false){cout<<"No duplicates were found!"<<endl;}
    if(isd==true) {cout<<"Doubles found! "<<cnt<<" duplicates were deleted. "
            <<endl<<
            "New list size is "<<size<<"."<<endl;}
    }
}

int LinkedList :: returnSize(){
    return size;
}

double LinkedList::MthLastElement(int M){
    if (head==NULL||size==0){
    cout<<"List is empty! Nothing to return."<<endl; return 0.0;}
    else{
    int num = size - M -1;
    if(M<0||M>(size-1)){
    cout<<"Error! M value is invalid.  M value must be between 0 and "
    <<(size-1)<<"."<<endl; return 0.0;}
    else{
    node* tmp = head;
    for(int i = 1; i<num; i++){
    tmp=tmp->nxt;}
    return tmp->data;
        }
    }    
}

void LinkedList::reverseList(){
    if(size==0||size==1){cout<<"Not enough items to reverse!";}else
        if(size==2){node* tmp = head; head=tmp->nxt;head->nxt=tmp;tmp->nxt=NULL;}
        else if(size==3){node*tmp = head; head=tmp->nxt->nxt;head->nxt=tmp->nxt;
        tmp->nxt->nxt=tmp;tmp->nxt=NULL;}
        else if(size>3){
    node* pa [size];
    node* tmp = head;
    for(int i = 0;i<size;i++){
        pa[i]=tmp;
        if(tmp->nxt!=NULL){tmp=tmp->nxt;}
    }
    head = pa[size-1];
    tmp = head;
    pa[0]->nxt=NULL;
    for(int i = (size-2); i>=0; i--){
        tmp->nxt=pa[i];
        tmp=tmp->nxt;
        }
    }    
}


ostream & operator<<(ostream& os, const LinkedList& rhs){
    if (rhs.head == NULL){os<<"List is empty!";return os;}else{
    node* tmp = rhs.head;
    os << "{ ";
    while(tmp->nxt!=NULL){
        os << tmp->data << " : ";
        tmp=tmp->nxt;
    }
    os<<tmp->data<<" }";
    return os;}
}
    
