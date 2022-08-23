#include "commandCenter.h"
#include <iostream>
#include <string>



using std::cout;
using std::endl;
using std::string;


#if 0
void doingStuff(string yksi, string kaksi)

{
	//Should not be ran
	cout << yksi << " " << kaksi;


}

#endif


//muutetaan t�m� sillee ett� .exe -olo search_w tiedosto.txt 
//lis�t��n ominaisuuksia t�h�n

void doingStuff(int argCee, string yksi, string kaksi, string kolme)
{
	//should run koska 3 parametria
	cout << "\nArgument count: " << argCee << endl;
	cout << "Additional command line arguments: \n";
	cout << "\"" << yksi << "\"" << ", \"" << kaksi << "\"" << ", \"" << kolme << "\"" << endl << endl;

	if (yksi.front() == '-')
		IVargumentRun(argCee, yksi, kaksi, kolme);
	//Exception handling?
	else
		cout << "ERROR\nYou must specify the desired run option. \nFor example use \"-olo\" for Occurances and Line number. \nUse \"help\" or \"options\" commands to see the documentation"<< endl;

}


void doingStuff(int argCee, string yksi)
{
	//should run koska 3 parametria

	if (yksi == "help" || yksi == "HELP" || yksi == "h")
	{
		printHelp();
	}
	else if (yksi == "options" || yksi == "o")
		printOptions();
	else
		cout << "???\nInvalid command";

}

//t�m� sillee ett� .exe search_w tiedosto.txt 


void doingStuff(int argCee, string yksi, string kaksi)
{
	cout << "Argument count, " << argCee << endl;
	cout << "Command line arguments: \n";
	cout << "\"" << yksi << "\"" << ", \"" << kaksi << "\"" << endl;
	basicRun(argCee, yksi, kaksi);


}

