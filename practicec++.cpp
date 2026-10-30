#include <iostream>
using namespace std;
class person {
    public :
        string name;
        int age;

};
class student : public person {
    public :
   int rollNo;
};
class teacher : public person {
    public :
    string subject ;
    int salary ;

};
 int main ()
 {
    teacher t1; t1.name = "ajay";
    teacher s1; s1.name = "ajay";
    return 0;
 }
