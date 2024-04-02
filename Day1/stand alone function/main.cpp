#include <iostream>
#include <string.h>

using namespace std;


class emp {

 private:
    int id;
    char name[20];
    int age;

public:
    void setId (int _id) {
        if (_id >= 1 && _id <= 100)
            id = _id;
    }

    void setName(char* _name) {
        if (strlen(_name) >= 4 && strlen(_name) <= 20) {
            strcpy(name, _name);
        } else {
            cout << "Invalid name" << endl;
        }
    }

    void setAge(int _age) {
        if (_age >= 20 && _age < 60) {
            age = _age;
        } else {
            cout << "Invalid age" << endl;
        }
    }

    int getId() {
        return id;
    }

     char* getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void print() {
        cout <<"id : " << id << endl << "name :" << name << endl << "age: " << age << endl;
    }


}e1;

void printData (emp e1);

int main()
{
   int id;
   cout<<"enter id"<<endl;
   cin>>id;
   char name [20];
   cout<<"enter name"<<endl;
   cin>>name;
   int age;
   cout<<"enter age"<<endl;
   cin>>age;

   e1.setId(id);
   e1.setName(name);
   e1.setAge(age);
   printData(e1);


    return 0;
}

void printData (emp e1){

 cout<<"id :"<<e1.getId()<< endl << "name :" << e1.getName()<< endl << "age :" <<  e1.getAge() << endl;

}