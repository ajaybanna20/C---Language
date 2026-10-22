#include <iostream>
using namespace std;
class person {
    public :
    void show() {
        cout << "Person class ..." << endl;
    }
};
class student : public person {
    public :
    void name() {
        cout << "Student class ..." << endl;
    }
};
int main ()
{
    student s1;
    s1.name();
}