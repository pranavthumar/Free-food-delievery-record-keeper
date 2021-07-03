#include "Node.h"


#include <bits/stdc++.h>
#include <string>
using namespace std;
Node :: Node(){
   first=NULL;
}
int Node::input()
{
    if(first==NULL)
    {
        first= new Node;
        cout<<"\nEnter the serial no: ";
        cin>>first->sno;
        cin.ignore();
        cout<<"\nEnter the name:  ";
        getline(cin, first->name);
        cout<<"\nEnter the mobile no:  ";
        for(int i=0;i<10;i++)
        cin>>first->mobile[i];
        cin.ignore();
        cout<<"\nEnter the address:  ";
        getline(cin, first->address);
        cout<<"\nEnter the food item:  ";
        getline(cin, first->food);
        first->next=NULL;
    }

    else
    {
        Node *t,*p;
        t=first;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        p=new Node;

        cout<<"\nEnter the serial no: ";
        cin>>p->sno;
        cin.ignore();
        cout<<"\nEnter the name:  ";
        getline(cin, p->name);
        cout<<"\nEnter the mobile no:  ";
        for(int i=0;i<10;i++)
        cin>>p->mobile[i];
        cin.ignore();
        cout<<"\nEnter the address:  ";
        getline(cin, p->address);
        cout<<"\nEnter the food item:  ";
        getline(cin, p->food);
        t->next=p;
        p->next=NULL;

    }

    return 0;
}


int Node:: show()
{
    Node *p;
    p=first;
    if(p==NULL){
        cout<<"\nThere is no data in record\n.";
    }
    else{
    while(p!=NULL)
    {
        cout<<"\nThe serial no is: ";
        cout<<p->sno;
        cout<<"\nThe name is:  ";
        cout<<p->name;
        cout<<"\nThe mobile no is:  ";
        for(int i=0;i<10;i++)
        cout<<p->mobile[i]<<" ";
        cout<<"\nThe address is:  ";
        cout<<p->address;
        cout<<"\nThe food item is:  ";
        cout<<p->food;
        p = p->next;
        cout<<"\n";
    }
    }

    return 0;
}

int Node:: edit()
{
    int pos=1;
    cout<<"\nEnter the position you want to edit: ";
    cin>>pos;

    Node *p;
    p=first;
    for(int i=1;i<pos;i++)
    {
        p=p->next;
    }
    if(p==NULL){
        cout<<"\nThere is no data at that position.\n";
        return 0;
    }
        cout<<"\nEnter the serial no: ";
        cin>>p->sno;
        cin.ignore();
        cout<<"\nEnter the name:  ";
        getline(cin, p->name);
        cout<<"\nEnter the mobile no:  ";
        for(int i=0;i<10;i++)
        cin>>p->mobile[i];
        cin.ignore();
        cout<<"\nEnter the address:  ";
        getline(cin, p->address);
        cout<<"\nEnter the food item:  ";
        getline(cin, p->food);
        return 0;

}
int Node :: search(){
     long long sn;
     cout<<"\nEnter the Serial number: ";
     cin>>sn;
     Node*q = first;
     if(q==NULL){
        cout<<"\nThere is no data in record."<<endl;
        return 0;
     }
     else{
     while(q!=NULL){
        if(q->sno == sn){
            break;
        }
        q = q->next;
     }
        if(q == NULL){
            cout<<"\nThere is no data of that serial number in record."<<endl;
            return 0;
        }
        cout<<"\nThe serial no is: ";
        cout<<q->sno;
        cout<<"\nThe name is:  ";
        cout<<q->name;
        cout<<"\nThe mobile no is:  ";
        for(int i=0;i<10;i++)
        cout<<q->mobile[i]<<" ";
        cout<<"\nThe address is:  ";
        cout<<q->address;
        cout<<"\n";
        cout<<"\nThe food item:  ";
        cout<<q->food;
     }
     return 0;

}

int Node:: deletee()
{
    int key=1;
    cout<<"\nEnter the position you want to delete:  ";
    cin>>key;

    Node*q = first;
    if(key==1){
        first=q->next;
        free(q);
        return 0;
    }
    Node*r;
    for(int i=1;i<key;i++){
        r=q;
        q=q->next;
    }
    r->next=q->next;
    free(q);
    return 0;

}
