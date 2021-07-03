#include <bits/stdc++.h>
#include <string>
#include "Node.h"

int main()
{
     int choice=0;
     Node N;

    while(choice!=6)
    {
        cout<<"------------------------------------------------------------------------------------------------------";
        cout<<"\t\t\t\t\t\t\t\tANNA NGO FOUNDTION\n";
        cout<<"-------------------------------------------------------------------------------------------------------";
        cout<<"\n\n\n";
        cout<<"1.Enter details";
        cout<<"\n2.Edit details";
        cout<<"\n3.Show details";
        cout<<"\n4.Delete details";
        cout<<"\n5.Search details";
        cout<<"\n6.Exit";
        cout<<"\n\nEnter your choice: ";
        cin>>choice;

        //switch cases;
        switch(choice)
        {
            case 1:
                     N.input();
                     break;
            case 2:
                     N.edit();
                     break;
            case 3:
                     N.show();
                     break;
            case 4:
                     N.deletee();
                     break;
            case 5:
                     N.search();
                     break;
            case 6:
                     break;
            default:
                   cout<<"\nWrong input";
        }


    }

    return 0;
}
