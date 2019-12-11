#include"books.h"
#ifndef studentscreen
#include"studentscreen.h"
#endif
#include<fstream>
#ifndef iostream
#include<iostream>
#endif
#include<sstream>
using namespace std;

void books::searchbook(books &b, string str){
        ifstream fin;
        fin.open("data.txt", ios::in);
        int c = 0;
        while (fin) {
            string s;
            getline(fin, s);
            int found = s.find(str);
            if(found!=string::npos){
                cout<<"BOOK FOUND ->"<<" "<<s<<endl;
                c++;
            }
            // Print line in Console
        //cout << s << endl;
        }
        if(c == 0){
            cout<<"SORRY, NOT AVAILABLE";
            studentscreen();
        }
        else{
            cout<<"WANT TO ISSUE ? Y/N"<<endl;
            string sass;
            cin>>sass;
            if(sass == "Y" || sass == "y"){
                cout<<"ENTER ONE MORE INFO";
                string sassy;
                cin>>sassy;
                int found;
                while(fin){
                    string s;
                    getline(fin, s);
                    found = s.find(sassy);
                    if(found!=string::npos)
                        break;
                }
                cout<<"ISSUED";
                fin.close();
                fin.open("data.txt", ios::in);
                string stri;
                while (fin) {
                    string s;
                    getline(fin, s);
                    int found = s.find(str);
                    if(found!=string::npos){
                        int founded = s. find(sassy);
                        if(founded!=string::npos){
                            stri = s;
                            break;
                        }
                    }
                }
                int f; string temp;
                stringstream ss;
                ss<<stri;
                while(!ss.eof()){
                    ss>>temp;
                    if(stringstream(temp)>>f){
                        --f;
                        nofcopies = f;
                    }
                }

                ofstream fout;
                fout.open("data.txt", ios::out);
                fout<<stri;
                fout.close();
            }
            if(sass == "n" || sass == "N"){
                studentscreen();
            }
        fin.close();
        }
}
