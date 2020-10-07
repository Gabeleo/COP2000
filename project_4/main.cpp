//Gabriel Leo
//COP2000.0xx (xx = your section number)
//Ceaser Cipher

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

    // Parses each word within the text file and passes it to inputWord
    while( inputFile >> inputWord) {

    for(int i = 0; i <= inputWord.length(); i++)
    {
        //Checks if each char is a valid letter
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

    //creates and writes encrypted output to specified file
    ofstream outputFile("EncryptedOct20.txt");
    outputFile << outputPhrase;

    inputFile.close();
    outputFile.close();

    cout << "Encryption Complete. " << endl;

    cout << "end of program.";

	system("pause");
	return 0;
}