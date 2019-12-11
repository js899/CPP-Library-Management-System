#include"studentscreen.h"
#ifndef homescreen_h
#include"homescreen.h"
#endif
#ifndef iostream
#include<iostream>
#endif // iostream
#ifndef string
#include<string>
#endif
using namespace std;
void home(){
    int n;
    cout<<endl<<"=============================="<<endl<<"LIBRARY"<<endl<<"=============================="<<endl<<endl;
    cout<<"1 STUDENT OR 2 ADMIN"<<endl<<"______________________________"<<endl;
    cin>>n;
    switch(n){
    case 1:
        string l;
        cout<<"EXISTING ? ENTER Y/N"<<endl;
        cin>>l;
        if(l =="Y" || l == "y"){
            //cout<<"ENTER ROLL NO";
            studentscreen();
            /*if(){

            }*/
        }
        break;
    /*case 2:
        adminscreen();
        break;*/
        //default
    }
}
