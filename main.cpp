#include <iostream>
#include <string>
#include "MarkovChain.h"
using namespace std;

int main()
{
    string ans;
    MarkovChain *mc = new MarkovChain();
    std::string userInput;
    bool program = true;
    bool fileGenerated = false;
    bool textGenerated = false;

    while(program)
    {
        if(!fileGenerated)
        {
            cout<< "Which sample file do you want to generate from?"<<endl;
            cout<< "1. testFile1" <<endl;
            cout<< "2. testFile2" <<endl;
            cout<< "3. " <<endl;
            cout<< "4. " <<endl;
            cout<< "5. " <<endl;

            getline(cin, userInput);
            if(userInput == "1")
            {
                mc->generateFromFile("testFile1.txt");
                fileGenerated = true;
            }
            else if(userInput == "2")
            {
                mc->generateFromFile("testFile2.txt");
                fileGenerated = true;
            }
            else if(userInput == "3")
            {
                mc->generateFromFile("testFile4.txt");
                fileGenerated = true;
            }
            else if(userInput == "4")
            {
                mc->generateFromFile("testFile4.txt");
                fileGenerated = true;
            }
            else if(userInput == "5")
            {
                mc->generateFromFile("testFile4.txt");
                fileGenerated = true;
            }
        }
        else
        {
            do
            {
                cout << "What word do you want to start the generation?"<<endl;
                getline(cin, userInput);
                if(mc->generateText(userInput))
                {
                    cout << "File generated under: " << userInput << ".txt" << endl;
                    program = false;
                }
                else
                {
                    cout << "Sorry that word does not appear in the sample file! ";
                    cout << "Please choose a different word" << endl;
                }

                cout << "Y or y allows another generation. "
                     << "any other quits" << endl;
                getline(cin, ans);
            }
            while ( "y" == ans || "Y" == ans );
            cout << "All done." << endl;


        }
    }

    return 0;
}
