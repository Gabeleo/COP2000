//Your name here
//COP2000.0xx (xx = your section number)
//Short description of what your project will do

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	using std::cout;
	using std::endl;
    using std::string;

    ifstream inputFile;
    string inputWord;
    string outputPhrase;
    
    cout << "Encryption Level 1" << endl << endl;

    inputFile.open("October20.txt");
    cout << "Opening input file... " << endl;

    while( inputFile >> inputWord) {

    for(int i = 0; i <= inputWord.length(); i++)
    {
        if((inputWord[i] >= 'a' && inputWord[i] <= 'z') || (inputWord[i] >= 'A' && inputWord[i] <= 'Z')){

            for( int j = 0; j < 3; j++){

                if( inputWord[i] == 'z'){
                    inputWord[i] = 'a';
                }
                else if( inputWord[i] == 'Z'){
                    inputWord[i] = 'A';
                }
                inputWord[i]++;
            }
        }
        
    }
        outputPhrase += inputWord + " ";
    }

    cout << "Encrypting... " << endl << endl;

    ofstream outputFile("EncryptedOct20.txt");
    outputFile << outputPhrase;

    inputFile.close();
    outputFile.close();

    cout << "Encryption Complete. " << endl;

    cout << "end of program.";

	//system("pause");
	return 0;
}