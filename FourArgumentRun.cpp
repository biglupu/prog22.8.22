#include <iostream>
#include <fstream>
#include "FourArgumentRun.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;



void olo(int argCee, string yksi, string kaksi, string kolme)
{
    ifstream inputFile;
    string filename;
    string search_w;
    string found_w;
    bool found = 0;
    string line;
    int count = 1;
    bool printed = 0;


    if (argCee > 1)
    {

        search_w = kaksi;
        filename = kolme;

        inputFile.open(filename);
        if (inputFile)
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


