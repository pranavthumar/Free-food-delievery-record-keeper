#ifndef NODE_H
#define NODE_H


#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        Node();
        int input();
        int show();
        int edit();
        int deletee();
        int search();

    protected:

    private:
        long long sno;
        string name;
        int mobile[10];
        string address;
        string food;
        Node *next;
        Node *first;
};
#endif // NODE_H
