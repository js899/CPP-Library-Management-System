#ifndef iostream
#include<iostream>
#endif
#include"books.h"
using namespace std;
void studentscreen(){
    cout<<endl<<"============================="<<endl<<"STUDENT"<<endl<<"============================="<<endl<<endl;
    cout<<"PRESS:"<<endl<<endl<<"1 TO SEARCH A BOOK"<<endl<<"2 TO ISSUE A BOOK"<<endl<<"3 TO RETURN A BOOK"<<endl<<"4 TO REISSUE A BOOK"<<endl<<"5 TO DELETE A BOOK"<<endl<<"6 TO ADD A BOOK"<<endl<<"7 TO SEE RECENT RECORDS"<<endl<<"______________________________"<<endl;
    int n;
    cin>>n;
    switch(n){
    case 1:
        string s;
        cout<<"ENTER THE BOOK NAME/AUTHOR/PUBLISHER"<<endl;
        cin>>s;
        books b;
        b.searchbook(b,s);
        break;
    /*case 2:
        b.returnbook();
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;*/
        //default
    }
}
