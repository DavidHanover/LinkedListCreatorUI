/* 
 * File:   main.cpp
 * Author: supercheeselord
 *
 * Created on July 12, 2017, 4:50 PM
 */

#include <cstdlib>
#include<iostream>
#include<iomanip>

#include"LinkedList.h"

using namespace std;

int main(int argc, char** argv) {
    
    LinkedList* arr [4];
    LinkedList A;
//    A.pushBack(6.54);
//    A.pushBack(5.54);
//    A.pushFront(4.44);
//    A.pushBack(5.67);
//    A.pushFront(9.85);
//    cout<<A<<endl;
//    LinkedList B;
//    B.pushBack(0.56);
//    B = A;
//    cout<<B;
    arr [0] = &A;
    arr[1]=NULL;
    arr[2]=NULL;
    arr[3]=NULL;
    
    const char separator = ' ';
    const int listWidth = 25;
    const int linkWidth = 10;
    
    cout<<"An empty, default LinkedList object has been created. "
            " It is LinkedList A."<<endl<<"You can create up to three others, "
            "Which will be LinkedList B, LinkedList C, and LinkedList D."<<endl;
    
    bool loop = true;
    while(loop == true){
    int choice=0;
    cout<<"Please choose an option:"<<endl;
    
    cout << left << setw(listWidth) << setfill(separator) << "1. pushFront()";
    cout << left << setw(listWidth) << setfill(separator) << "5. pushBack()";
    cout << left << setw(listWidth) << setfill(separator) << "9. insert()";
    cout<<endl;
    cout << left << setw(listWidth) << setfill(separator) << "2. deleteDuplicates()";
    cout << left << setw(listWidth) << setfill(separator) << "6. MthLastElement()";
    cout << left << setw(listWidth) << setfill(separator) << "10. returnSize()";
    cout<<endl;
    cout << left << setw(listWidth) << setfill(separator) << "3. reverseList()";
    cout << left << setw(listWidth) << setfill(separator) << "7. Copy Constructor";
    cout << left << setw(listWidth) << setfill(separator) << "11. Put Operator(=)";
    cout<<endl;
    cout << left << setw(listWidth) << setfill(separator) << "4. Default Constructor";
    cout << left << setw(listWidth) << setfill(separator) << "8. Destructor";
    cout << left << setw(listWidth) << setfill(separator) << "12. Print List";
    cout<<endl;
    cout<<"0. End program (All lists will be lost)."<<endl;
    cin>>choice;
    char listChoice = 0;
    double val = 0.0;
    int M=0;
    int index=0;
    char copyChoice = 0;
    LinkedList* temp = NULL;
    LinkedList* rhs = NULL;
    int ListSize=0;
    
    switch(choice){
        case 0:
            loop = false;
            delete arr[0];
            delete arr[1];
            delete arr[2];
            delete arr[3];
            break;
        case 1:
            cout<<"Choose a list:"<<endl;
    if(arr[0]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "A";}
    if(arr[1]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "B";}
    if(arr[2]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "C";}
    if(arr[3]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "D";}
            cout<<endl;
            cin>>listChoice;
            cout<<"Enter a value with a decimal point:"<<endl;
            cin>>val;
    if(listChoice=='A'||listChoice=='a')arr[0]->pushFront(val);
    if(listChoice=='B'||listChoice=='b')arr[1]->pushFront(val);       
    if(listChoice=='C'||listChoice=='c')arr[2]->pushFront(val);
    if(listChoice=='D'||listChoice=='d')arr[3]->pushFront(val);  
            break;
        case 2:
            cout<<"Choose a list:"<<endl;
    if(arr[0]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "A";}
    if(arr[1]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "B";}
    if(arr[2]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "C";}
    if(arr[3]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "D";}
            cout<<endl;
            cin>>listChoice;
            cout<<"Enter a value with a decimal point:"<<endl;
            cin>>val;
    if(listChoice=='A'||listChoice=='a')arr[0]->deleteDuplicates(val);
    if(listChoice=='B'||listChoice=='b')arr[1]->deleteDuplicates(val);       
    if(listChoice=='C'||listChoice=='c')arr[2]->deleteDuplicates(val);
    if(listChoice=='D'||listChoice=='d')arr[3]->deleteDuplicates(val); 
            cout<<endl;
            break;
        case 3:
            cout<<"Choose a list:"<<endl;
    if(arr[0]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "A";}
    if(arr[1]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "B";}
    if(arr[2]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "C";}
    if(arr[3]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "D";}
            cout<<endl;
            cin>>listChoice;
    if(listChoice=='A'||listChoice=='a')arr[0]->reverseList();
    if(listChoice=='B'||listChoice=='b')arr[1]->reverseList();       
    if(listChoice=='C'||listChoice=='c')arr[2]->reverseList();
    if(listChoice=='D'||listChoice=='d')arr[3]->reverseList();        
            cout<<endl;
            break;
        case 4:
                        cout<<"Choose a list to create:"<<endl;
    if(arr[0]==NULL){cout << left << setw(linkWidth) << setfill(separator) << "A";}
    if(arr[1]==NULL){cout << left << setw(linkWidth) << setfill(separator) << "B";}
    if(arr[2]==NULL){cout << left << setw(linkWidth) << setfill(separator) << "C";}
    if(arr[3]==NULL){cout << left << setw(linkWidth) << setfill(separator) << "D";}
            cout<<endl;
            cin>>copyChoice;  
    if(copyChoice=='A'||copyChoice=='a')arr[0]=new LinkedList;
    if(copyChoice=='B'||copyChoice=='b')arr[1]=new LinkedList;       
    if(copyChoice=='C'||copyChoice=='c')arr[2]=new LinkedList;
    if(copyChoice=='D'||copyChoice=='d')arr[3]=new LinkedList;
         cout<<endl;
            break;
        case 5:
            cout<<"Choose a list:"<<endl;
    if(arr[0]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "A";}
    if(arr[1]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "B";}
    if(arr[2]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "C";}
    if(arr[3]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "D";}
            cout<<endl;
            cin>>listChoice;
            cout<<"Enter a value with a decimal point:"<<endl;
            cin>>val;
    if(listChoice=='A'||listChoice=='a')arr[0]->pushBack(val);
    if(listChoice=='B'||listChoice=='b')arr[1]->pushBack(val);       
    if(listChoice=='C'||listChoice=='c')arr[2]->pushBack(val);
    if(listChoice=='D'||listChoice=='d')arr[3]->pushBack(val); 
            cout<<endl;
            break;
        case 6:
            cout<<"Choose a list:"<<endl;
    if(arr[0]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "A";}
    if(arr[1]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "B";}
    if(arr[2]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "C";}
    if(arr[3]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "D";}
            cout<<endl;
            cin>>listChoice;
            cout<<"Enter an integer value for 'M':"<<endl;
            cin>>M;
    if(listChoice=='A'||listChoice=='a')cout<<"Mth last element is: "<<arr[0]->MthLastElement(M);
    if(listChoice=='B'||listChoice=='b')cout<<"Mth last element is: "<<arr[1]->MthLastElement(M);       
    if(listChoice=='C'||listChoice=='c')cout<<"Mth last element is: "<<arr[2]->MthLastElement(M);
    if(listChoice=='D'||listChoice=='d')cout<<"Mth last element is: "<<arr[3]->MthLastElement(M);        
            cout<<endl;
            break;
        case 7:
            cout<<"Choose a list to copy:"<<endl;
    if(arr[0]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "A";}
    if(arr[1]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "B";}
    if(arr[2]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "C";}
    if(arr[3]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "D";}
            cout<<endl;
            cin>>listChoice;
    if(listChoice=='A'||listChoice=='a')temp=arr[0];
    if(listChoice=='B'||listChoice=='b')temp=arr[1];       
    if(listChoice=='C'||listChoice=='c')temp=arr[2];
    if(listChoice=='D'||listChoice=='d')temp=arr[3];
            cout<<"Choose a list to create:"<<endl;
    if(arr[0]==NULL){cout << left << setw(linkWidth) << setfill(separator) << "A";}
    if(arr[1]==NULL){cout << left << setw(linkWidth) << setfill(separator) << "B";}
    if(arr[2]==NULL){cout << left << setw(linkWidth) << setfill(separator) << "C";}
    if(arr[3]==NULL){cout << left << setw(linkWidth) << setfill(separator) << "D";}
            cout<<endl;
            cin>>copyChoice;  
    if(copyChoice=='A'||copyChoice=='a')arr[0]=new LinkedList(*temp);
    if(copyChoice=='B'||copyChoice=='b')arr[1]=new LinkedList(*temp);       
    if(copyChoice=='C'||copyChoice=='c')arr[2]=new LinkedList(*temp);
    if(copyChoice=='D'||copyChoice=='d')arr[3]=new LinkedList(*temp);        
            cout<<endl;
            break;
        case 8:
                cout<<"Choose a list to delete:"<<endl;
    if(arr[0]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "A";}
    if(arr[1]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "B";}
    if(arr[2]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "C";}
    if(arr[3]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "D";}
            cout<<endl;
            cin>>listChoice;
    if(listChoice=='A'||listChoice=='a')delete arr[0]; arr[0] = NULL;
    if(listChoice=='B'||listChoice=='b')delete arr[1]; arr[1] = NULL;       
    if(listChoice=='C'||listChoice=='c')delete arr[2]; arr[2] = NULL;
    if(listChoice=='D'||listChoice=='d')delete arr[3]; arr[3] = NULL;        
            cout<<endl;
            break;
        case 9:
            cout<<"Choose a list:"<<endl;
    if(arr[0]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "A";}
    if(arr[1]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "B";}
    if(arr[2]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "C";}
    if(arr[3]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "D";}
            cout<<endl;
            cin>>listChoice;
            cout<<"Enter a value with a decimal point:"<<endl;
            cin>>val;
            cout<<"Enter an integer value for the index:"<<endl;
            cin>>index;
    if(listChoice=='A'||listChoice=='a')arr[0]->insert(index, val);
    if(listChoice=='B'||listChoice=='b')arr[1]->insert(index, val);      
    if(listChoice=='C'||listChoice=='c')arr[2]->insert(index, val);
    if(listChoice=='D'||listChoice=='d')arr[3]->insert(index, val);
            cout<<endl;
            break;
        case 10:
          cout<<"Choose a list:"<<endl;
    if(arr[0]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "A";}
    if(arr[1]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "B";}
    if(arr[2]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "C";}
    if(arr[3]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "D";}
            cout<<endl;
            cin>>listChoice;
    if(listChoice=='A'||listChoice=='a') ListSize = arr[0]->returnSize();
    if(listChoice=='B'||listChoice=='b') ListSize = arr[1]->returnSize();      
    if(listChoice=='C'||listChoice=='c') ListSize = arr[2]->returnSize();
    if(listChoice=='D'||listChoice=='d') ListSize = arr[3]->returnSize();
            cout<<"Size of List "<<listChoice<<" is "<<ListSize<<".";
            cout<<endl;
            break;
            
        case 11:
           cout<<"Choose a list for left side of equation:"<<endl;
    cout << left << setw(linkWidth) << setfill(separator) << "A";
    cout << left << setw(linkWidth) << setfill(separator) << "B";
    cout << left << setw(linkWidth) << setfill(separator) << "C";
    cout << left << setw(linkWidth) << setfill(separator) << "D";
            cout<<endl;
            cin>>listChoice; 
    if(listChoice=='A'||listChoice=='a')temp=arr[0];
    if(listChoice=='B'||listChoice=='b')temp=arr[1];       
    if(listChoice=='C'||listChoice=='c')temp=arr[2];
    if(listChoice=='D'||listChoice=='d')temp=arr[3];
            cout<<"Choose a right-hand list:"<<endl;
    if(arr[0]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "A";}
    if(arr[1]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "B";}
    if(arr[2]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "C";}
    if(arr[3]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "D";}
            cout<<endl;
            cin>>copyChoice; 
if(temp==NULL)temp=new LinkedList;

            
if(copyChoice=='A'||copyChoice=='a'){rhs=arr[0];*temp=*rhs;arr[0]=temp;}
if(copyChoice=='B'||copyChoice=='b'){rhs=arr[1];*temp=*rhs;arr[1]=temp;}
if(copyChoice=='C'||copyChoice=='c'){rhs=arr[2];*temp=*rhs;arr[2]=temp;}
if(copyChoice=='D'||copyChoice=='d'){rhs=arr[3];*temp=*rhs;arr[3]=temp;}
  
            break;
            
        case 12:
              cout<<"Choose a list to print:"<<endl;
    if(arr[0]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "A";}
    if(arr[1]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "B";}
    if(arr[2]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "C";}
    if(arr[3]!=NULL){cout << left << setw(linkWidth) << setfill(separator) << "D";}
              cout<<endl;
              cin>>listChoice;
    if(listChoice=='A'||listChoice=='a')cout<<*(arr[0]);
    if(listChoice=='B'||listChoice=='b')cout<<*(arr[1]);      
    if(listChoice=='C'||listChoice=='c')cout<<*(arr[2]);
    if(listChoice=='D'||listChoice=='d')cout<<*(arr[3]);
            
            cout<<endl;
            
            break;
            
       }
  
    }
    return 0;

    
}

