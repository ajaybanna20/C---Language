#include <iostream>
using namespace std;
class teacher {
    public :
int salary ;
string subject ;
};

class student {
    public :
    string name ;
    int year ;
    int id ;

};
class TA : public student , public teacher {
    public :
    int taID;

};
int main ()
{
    TA t1;
    return 0;
}
