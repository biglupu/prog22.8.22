#include <iostream>
#include <fstream>
#include <string>
#include "FourArgumentRun.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;



void IVargumentRun(int argCee, string yksi, string kaksi, string kolme)
{
    ifstream inputFile;
    string filename;
    string search_w;
    string found_w;
    bool found = 0;
    string line;
    int count = 1;
    bool printed = 0;

    //Split to another cpp?
    int occurance = -2;
    int lineNumb = -2;
    int reverseSearch = -2;
    int ignoreCase = -2;

    cout << reverseSearch;

    lineNumb = (yksi.find("l"));
    if (lineNumb == -1)
        cout << "\nNo Line numbers";
    else
        cout << "\nFound in position " << lineNumb;

    occurance = (yksi.find("o"));
    if (occurance == -1)
        cout << "\nNo occurances";
    else
        cout << "\nFound in position " << occurance;

    reverseSearch = (yksi.find("r"));
    if (reverseSearch == -1)
        cout << "\nNo reverse search";
    else
        cout << "\nFound in position " << reverseSearch;

    ignoreCase = (yksi.find("i"));
    if (ignoreCase == -1)
        cout << "\nNot ignoring cases";
    else
        cout << "\nFound in position " << ignoreCase;
    //end 

    if (argCee > 1)
    {

        search_w = kaksi;
        filename = kolme;
        
        inputFile.open(filename);
        if (inputFile)
            //T‰h‰n sis‰‰n "Ignore case", "reverse search", "line number" ja "occurances" if -lauseina. 




        {
            while (getline(inputFile, line))
            {

                if (line.find(search_w) != -1)
                {
                    if (printed == 0)
                    {
                        cout << "\nString \"" << search_w << "\" found on the lines:\n\n";
                        printed = 1;
                    }
                    cout << count << ": " << line << endl << endl;
                    count++;
                    found = 1;

                }
                else
                    count++;
            }

            if (found == 0)
            {
                cout << "Word \"" << search_w << "\" not found in file: " << filename;
            }

            inputFile.close();
        }
        else
            cout << "Error, couldn't read file: " << filename;
    }
}


