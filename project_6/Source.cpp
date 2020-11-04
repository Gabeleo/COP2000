// Gabriel Leo
//COP2000.0xx (xx = your section number)
//updatng password
#include<iostream>
#include <string.h>

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

    int uppercase = 0,
        lowercase = 0,
        totalDigits = 0,
        validSpecial = 0;

    bool isValid,
        isValid2;

    void setPassword1();
    void validateRequirements();
    void setPassword2();
    void validateMatch();
    void display();

public:
    void driver();
    Password();

};

//contructor sets all boolean checks as well as iterators to baseline setting
Password::Password() {
    isValid = false;
    isValid2 = false;
    uppercase = lowercase = totalDigits = validSpecial = 0;
}

//prompts user for password. using specified requirements
void Password::setPassword1() {
    cout << "Update Your Password" << endl << endl
        << "Password Requirements:" << endl
        << "- minimum of 8 characters" << endl
        << "- minimum of 2 uppercase characters (A-Z)" << endl
        << "- minimum of 2 lowercase characters (a-z)" << endl
        << "- minimum of 2 digits (0-9)" << endl
        << "- minimum of 2 special characters: !, @, $, %, &, _" << endl << endl
        << "Enter a new password: ";

    cin >> password;

}

//iterates over string to check if each character meets given password requirements
void Password::validateRequirements() {

    while (true) {

        int strLength = password.size();

        for (int i = 0; i < strLength; i++) {

            char q = password[i];

            if (q >= 'a' && q <= 'z') {
                lowercase++;
            }
            else if (q >= 'A' && q <= 'Z') {
                uppercase++;
            }
            else if (q >= '0' && q <= '9') {
                totalDigits++;
            }
            else if (q == '!' || q == '@' || q == '$' || q == '%' || q == '&' || q == '_') {
                validSpecial++;
            }

        }

        if (strLength >= 8 && lowercase >= 2 && uppercase >= 2 && totalDigits >= 2 && validSpecial >= 2) {

            isValid = true;
        }
        else
            isValid = false;

        if (!isValid) {
            cout << "Error: password does not meet minimum requirements, please try again: " << endl << endl << "Enter a new password: ";
            cin >> password;

            uppercase = lowercase = totalDigits = validSpecial = 0;
        }
        else {
            break;
        }
    }
}

void Password::setPassword2() {
    if (isValid) {
        cout << "Reenter the new password: ";
        cin >> password2;
    }
}

//uses the compare method to check if both passwords are identical
void Password::validateMatch() {
    while (true) {
        if (password.compare(password2) != 0) {
            cout << "Error:  update unsuccessful.  Entries do not match, try again: " << endl << endl << "Reenter the new password: ";
            cin >> password2;
            isValid2 = false;
        }
        else {
            isValid2 = true;
            break;
        }
    }
}

//displays a successful update if both passwords meet requirements
void Password::display() {
    
    if (isValid2 && isValid) {
        cout << "Password Update is Successful." << endl << endl << "Please remember to change your password every 90 days" << endl;
    }

}


void Password::driver() {
    setPassword1();
    validateRequirements();
    setPassword2();
    validateMatch();
    display();
}

//instantiates a new password object and sets it to run using the driver method
int main()
{
    using std::cout;
    using std::endl;
    using std::cout;
    using std::cin;

    Password primary;
    primary.driver();

    system("pause");
    return 0;
}



