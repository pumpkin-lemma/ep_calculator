#include<iostream>
#include<string>
#include<regex>
#include<cmath>
#include <climits>
using namespace std;

int main() {
	string line;
	bool reading = true;
	int temperament;
	double intMin = 0;
	double intMax = 0;
	double extMin = 0;
	double extMax = 0;
	regex whitespace("\\s+");
	
	cout << endl << "Please copy the horse's personality and conformation text below and press enter." << endl;
	while (reading) {
		getline(cin, line);
		if (line.find("temperament") != -1) {
			reading = false;
		}
	}
	
	line = regex_replace(line, whitespace, "");
	
	if (line == "lowtemperament") {
		intMin += 3;
		intMax += 5;
	} else if (line == "moderatelylowtemperament") {
		intMin += 6;
		intMax += 8;
	} else if (line == "goodtemperament") {
		intMin += 9;
		intMax += 10;
	} else if (line == "moderatelyhightemperament") {
		intMin += 6;
		intMax += 8;
	} else if (line == "hightemperament") {
		intMin += 3;
		intMax += 5;
	}
	
	getline(cin, line);
	line = std::regex_replace(line, whitespace, "");

	if (line == "poorcharism") {
		intMin += 1.5;
		intMax += 2.5;
	} else if (line == "somewhatpoorcharism") {
		intMin += 3;
		intMax += 4;
	} else if (line == "averagecharism") {
		intMin += 4.5;
		intMax += 5.5;
	} else if (line == "satisfyingcharism") {
		intMin += 6;
		intMax += 7;
	} else if (line == "muchcharism") {
		intMin += 7.5;
		intMax += 8.5;
	}
	
	getline(cin, line);
	line = std::regex_replace(line, whitespace, "");

	if (line == "poorattentionspan") {
		intMin += 1.5;
		intMax += 2.5;
	} else if (line == "somewhatpoorattentionspan") {
		intMin += 3;
		intMax += 4;
	} else if (line == "averageattentionspan") {
		intMin += 4.5;
		intMax += 5.5;
	} else if (line == "satisfyingattentionspan") {
		intMin += 6;
		intMax += 7;
	} else if (line == "goodattentionspan") {
		intMin += 7.5;
		intMax += 8.5;
	}
	
	getline(cin, line);
	line = std::regex_replace(line, whitespace, "");

	if (line == "poormind") {
		intMin += 1.5;
		intMax += 2.5;
	} else if (line == "somewhatpoormind") {
		intMin += 3;
		intMax += 4;
	} else if (line == "averagemind") {
		intMin += 4.5;
		intMax += 5.5;
	} else if (line == "satisfyingmind") {
		intMin += 6;
		intMax += 7;
	} else if (line == "goodmind") {
		intMin += 7.5;
		intMax += 8.5;
	}
	
	getline(cin, line);
	line = std::regex_replace(line, whitespace, "");

	if (line == "poortohandle") {
		intMin += 1.5;
		intMax += 2.5;
	} else if (line == "somewhatpoortohandle") {
		intMin += 3;
		intMax += 4;
	} else if (line == "averagetohandle") {
		intMin += 4.5;
		intMax += 5.5;
	} else if (line == "satisfyingtohandle") {
		intMin += 6;
		intMax += 7;
	} else if (line == "goodtohandle") {
		intMin += 7.5;
		intMax += 8.5;
	}
	
	getline(cin, line);
	line = std::regex_replace(line, whitespace, "");

	if (line == "poornerves") {
		intMin += 1.5;
		intMax += 2.5;
	} else if (line == "somewhatpoornerves") {
		intMin += 3;
		intMax += 4;
	} else if (line == "averagenerves") {
		intMin += 4.5;
		intMax += 5.5;
	} else if (line == "satisfyingnerves") {
		intMin += 6;
		intMax += 7;
	} else if (line == "goodnerves") {
			intMin += 7.5;
			intMax += 8.5;
	}
	
	getline(cin, line);
	line = std::regex_replace(line, whitespace, "");

	if (line == "poorintelligence") {
		intMin += 1.5;
		intMax += 2.5;
	} else if (line == "etwaswenigintelligence") {
		intMin += 3;
		intMax += 4;
	} else if (line == "averageintelligence") {
			intMin += 4.5;
			intMax += 5.5;
	} else if (line == "satisfyingintelligence") {
		intMin += 6;
		intMax += 7;
	} else if (line == "goodintelligence") {
		intMin += 7.5;
		intMax += 8.5;
	}
	
	reading = true;
	while (reading) {
		getline(cin, line);
		if (line.find("head") != -1) {
			reading = false;
		}
	}
	line = std::regex_replace(line, whitespace, "");

	if (line == "Theheadistoosmall." || line == "Theheadistoolarge.") {
		extMin += 3;
		extMax += 5;
	} else if (line == "Theheadisslightlytosmall." || line == "Theheadistslightlytolarge.") {
		extMin += 6;
		extMax += 8;
	} else if (line == "Theheadisgood.") {
		extMin += 9;
		extMax += 10;
	}
	
	getline(cin, line);
	line = std::regex_replace(line, whitespace, "");

	if (line == "Thebaseoftheneckistoolow." || line == "Thebaseoftheneckistoohigh.") {
		extMin += 3;
		extMax += 5;
	} else if (line == "Thebaseoftheneckisslightlytoolow." || line == "Thebaseoftheneckisslightlytoohigh.") {
		extMin += 6;
		extMax += 8;
	} else if (line == "Thebaseoftheneckisgood.") {
		extMin += 9;
		extMax += 10;
	}
	
	getline(cin, line);
	line = std::regex_replace(line, whitespace, "");

	if (line == "Theneckistooshort." || line == "Theneckistoolong.") {
		extMin += 3;
		extMax += 5;
	} else if (line == "Theneckisslightlytooshort." || line == "Theneckisslightlytoolong.") {
		extMin += 6;
		extMax += 8;
	} else if (line == "Theneckisgood.") {
		extMin += 9;
		extMax += 10;
	}
	
	getline(cin, line);
	line = std::regex_replace(line, whitespace, "");

	if (line == "Thebackistooshort." || line == "Thebackistoolong.") {
		extMin += 3;
		extMax += 5;
	} else if (line == "Thebackisslightlytooshort." || line == "Thebackisslightlytoolong.") {
		extMin += 6;
		extMax += 8;
	} else if (line == "Thebackisgood.") {
		extMin += 9;
		extMax += 10;
	}
	
	getline(cin, line);
	line = std::regex_replace(line, whitespace, "");
	
	if (line.find("Thefrontlegsarecamped-out") != -1 || line.find("Thefrontlegsarecamped-in") != -1) {
		extMin += 3;
		extMax += 5;
	} else if (line.find("Thefrontlegsareslightlycamped-out") != -1 || line.find("Thefrontlegsareslightlycamped-in") != -1) {
		extMin += 6;
		extMax += 8;
	} else {
		extMin += 9;
		extMax += 10;
	}
	
	if (line.find("slightlybase-narrow") != -1 || line.find("slightlybase-wide") != -1) {
		extMin += 6;
		extMax += 8;
	} else if (line.find("base-narrow") != -1 || line.find("base-wide") != -1) {
		extMin += 3;
		extMax += 5;
	} else {
		extMin += 9;
		extMax += 10;
	}
	
	if (line.find("slightlytoed-in") != -1 || line.find("slightlytoed-out") != -1) {
		extMin += 6;
		extMax += 8;
	} else if (line.find("toed-in") != -1 || line.find("toed-out") != -1) {
		extMin += 3;
		extMax += 5;
	} else {
		extMin += 9;
		extMax += 10;
	}
	
	getline(cin, line);
	line = std::regex_replace(line, whitespace, "");
	
	if (line.find("Therearlegsarecamped-out") != -1 || line.find("Therearlegsarecamped-in") != -1) {
		extMin += 3;
		extMax += 5;
	} else if (line.find("Therearlegsareslightlycamped-out") != -1 || line.find("Therearlegsareslightlycamped-in") != -1) {
		extMin += 6;
		extMax += 8;
	} else {
		extMin += 9;
		extMax += 10;
	}
	
	if (line.find("slightlybase-narrow") != -1 || line.find("slightlybase-wide") != -1) {
		extMin += 6;
		extMax += 8;
	} else if (line.find("base-narrow") != -1 || line.find("base-wide") != -1) {
		extMin += 3;
		extMax += 5;
	} else {
		extMin += 9;
		extMax += 10;
	}
	
	if (line.find("slightlytoed-in") != -1 || line.find("slightlytoed-out") != -1) {
		extMin += 6;
		extMax += 8;
	} else if (line.find("toed-in") != -1 || line.find("toed-out") != -1) {
		extMin += 3;
		extMax += 5;
	} else {
		extMin += 9;
		extMax += 10;
	}
	
	cout << endl << "Conformation: " << extMin/10 << " - " << extMax/10 << endl;
	cout << "Personality: " << (round((intMin/7)*10))/10 << " - " << (round((intMax/7)*10))/10 << endl;
	cin.ignore(INT_MAX);
	
	return 0;
}