#include<string>
using namespace std;
class books{
protected:
    string title;
    string publisher;
    string author;
    int nofcopies;
public:
    void searchbook(books &b, string str);
    void issue(books &b,string str);
    void returnbook();
    void reissue();
    void getbook();
    void addbook();
    void deletebook();
};
