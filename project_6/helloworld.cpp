//Gabriel Leo
//COP2000.0xx (xx = your section number)
//updatng password
#include<iostream>
using namespace std;

void setPassword();
void validateRequirements();
void setPassword2();
void validateMatch();
void display();
void driver();

class Password
{
private:
    string password;
    string password2;

    int uppercase,
        lowercase,
        totalDigits,
        validSpecial;

    void setPassword1();
    void validateRequirements();
    void setPassword2();
    void validateMatch();
    void display();

public:
    Password(){
        password;
        password2;
        uppercase;
        lowercase;
        totalDigits;
        validSpecial;
    }
    
    void driver();

};

int main()
{
	using std::cout;
	using std::endl;
    using std::cout;

    cout << "test";

	system("pause");
	return 0;
}