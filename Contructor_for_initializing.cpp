
#include<iostream>
using namespace std;

class Faculty{
    string name,designation,gender,addre;
    int age;

    public:

    Faculty(string n, string d, string g, string a, int age){
        name = n;
        designation = d;
        gender = g;
        addre = a;
        this->age = age;
    }

    void display(){
        cout<<"Name is : "<<name<<endl;
        cout<<"Designation is : "<<designation<<endl;
        cout<<"Gender is : "<<gender<<endl;
        cout<<"Address is : "<<addre<<endl;
        cout<<"Age is : "<<age<<endl;
    }
};

int main(){

Faculty obj1("Faraz", "Permanent Faculty","Male","Old Sardar Shikarpur",19);
Faculty obj2("Ali Ahmed", "Visiting Faculty","Male","Master Juice Karachi",21);
obj1.display();
cout<<"----------------------------------------------------------"<<endl;
obj2.display();
return 0;
}