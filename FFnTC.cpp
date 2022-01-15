/*
Program Name: Football Formation & Tactic Creator
Author Name: Syed Salman Ali Wahidi
Version: 0.9
Date: 1/12/2022
*/

//Libraries
#include<iostream>
#include<string>
using namespace std;

//Identifiers
string userName = "";
string gkName = "";
string rbName = "", rcbName = "", lcbName = "", lbName = "";
string rmName = "", rcmName = "", cmName = "", lcmName = "", lmName = "";
string rwName = "", rsName = "", sName = "", lsName = "", lwName = "";
string formation = "";
string formationName = "";
string tactic = "";
string tacticName = "";
string rating = "";
int gkNum;
int rbNum, rcbNum, lcbNum, lbNum;
int rmNum, rcmNum, cmNum, lcmNum, lmNum;
int rwNum, rsNum, sNum, lsNum, lwNum;

//Main Program
int main()
{
	cout << "Welcome to Football Formation & Tactic Creator!\n\n";
	cout << "In this program, you will name your 11 players and select formation and tactic.\n\n";
	
	//User Name
	cout << "You are the manager of your team. What is your name (type first & last name): ";
	getline(cin, userName);
	cout << endl;
	
	//Formation Selector
	cout << "Great! Now, select your team's formation:\n\n";
	do
	{
		cout << "(1) 4-4-2\n(2) 4-3-3\n(3) 4-5-1\n\nType 1, 2 or 3: ";
		cin >> formation;
		cin.ignore(100, '\n');
		if (formation != "1" && formation != "2" && formation != "3")
		{
			cout << "\nERROR: Invalid choice. Please select your formation!\n\n";
		}

	} while (formation != "1" && formation != "2" && formation != "3");

	if (formation == "1")
	{
		formationName = "4-4-2";
	}
	else if (formation == "2")
	{
		formationName = "4-3-3";
	}
	else
	{
		formationName = "4-5-1";
	}

	// Tactic Selector
	cout << "\nAwesome! Now, let's select your tactic:\n\n";
	do
	{
		cout << "(1) Tiki-Taka\n(2) Defend & Counter\n(3) Gegenpress\n(4) Go Wide & Cross\n\nType 1, 2, 3 or 4: ";
		cin >> tactic;
		cin.ignore(100, '\n');
		if (tactic != "1" && tactic != "2" && tactic != "3" && tactic != "4")
		{
			cout << "\nERROR: Invalid choice. Please select your tactic!\n\n";
		}

	} while (tactic != "1" && tactic != "2" && tactic != "3" && tactic != "4");
	
	if (tactic == "1")
	{
		tacticName = "Tiki-Taka";
	}
	else if (tactic == "2")
	{
		tacticName = "Defend & Counter";
	}
	else if (tactic == "3")
	{
		tacticName = "Gegenpress";
	}
	else
	{
		tacticName = "Go Wide & Cross";
	}
	
	//Rate Tactic
	if ((formation == "1" && tactic == "1") || (formation == "2" && tactic == "4") || (formation == "3" && tactic == "4"))
	{
		rating = "Okay";
	}

	if ((formation == "1" && tactic == "2") || (formation == "2" && tactic == "2") || (formation == "3" && tactic == "2") || (formation == "3" && tactic == "1"))
	{
		rating = "Good";
	}

	if ((formation == "1" && tactic == "3") || (formation == "1" && tactic == "4") || (formation == "2" && tactic == "1") || (formation == "2" && tactic == "3") || (formation == "3" && tactic == "3"))
	{
		rating = "Very Good";
	}
	
	cout << "\nBrilliant! Now, let's name your 11 players. Type player name like this: S. Brown.\n\n";
	
	//Players' Names and Numbers
	cout << "Goalkeeper's name: ";
	getline(cin, gkName);
	cout << "Goalkeeper's number: ";
	cin >> gkNum;
	cin.ignore(100, '\n');
	cout << endl;

	cout << "Right-Back's name: ";
	getline(cin, rbName);
	cout << "Right-Back's number: ";
	cin >> rbNum;
	cin.ignore(100, '\n');
	cout << endl;

	cout << "Right Center-Back's name: ";
	getline(cin, rcbName);
	cout << "Right Center-Back's number: ";
	cin >> rcbNum;
	cin.ignore(100, '\n');
	cout << endl;

	cout << "Left Center-Back's name: ";
	getline(cin, lcbName);
	cout << "Left Center-Back's number: ";
	cin >> lcbNum;
	cin.ignore(100, '\n');
	cout << endl;

	cout << "Left-Back's name: ";
	getline(cin, lbName);
	cout << "Left-Back's number: ";
	cin >> lbNum;
	cin.ignore(100, '\n');
	cout << endl;

	if (formation == "1")
	{
		cout << "Right Midfielder's name: ";
		getline(cin, rmName);
		cout << "Right Midfielder's number: ";
		cin >> rmNum;
		cin.ignore(100, '\n');
		cout << endl;

		cout << "Right Center-Midfielder's name: ";
		getline(cin, rcmName);
		cout << "Right Center-Midfielder's number: ";
		cin >> rcmNum;
		cin.ignore(100, '\n');
		cout << endl;

		cout << "Left Center-Midfielder's name: ";
		getline(cin, lcmName);
		cout << "Left Center-Midfielder's number: ";
		cin >> lcmNum;
		cin.ignore(100, '\n');
		cout << endl;

		cout << "Left Midfielder's name: ";
		getline(cin, lmName);
		cout << "Left Midfielder's number: ";
		cin >> lmNum;
		cin.ignore(100, '\n');
		cout << endl;

		cout << "Right Striker's name: ";
		getline(cin, rsName);
		cout << "Right Striker's number: ";
		cin >> rsNum;
		cin.ignore(100, '\n');
		cout << endl;

		cout << "Left Striker's name: ";
		getline(cin, lsName);
		cout << "Left Striker's number: ";
		cin >> lsNum;
		cin.ignore(100, '\n');
		cout << endl;
	}
	else if (formation == "2")
	{
		cout << "Right Center-Midfielder's name: ";
		getline(cin, rcmName);
		cout << "Right Center-Midfielder's number: ";
		cin >> rcmNum;
		cin.ignore(100, '\n');
		cout << endl;

		cout << "Center-Midfielder's name: ";
		getline(cin, cmName);
		cout << "Center-Midfielder's number: ";
		cin >> cmNum;
		cin.ignore(100, '\n');
		cout << endl;

		cout << "Left Center-Midfielder's name: ";
		getline(cin, lcmName);
		cout << "Left Center-Midfielder's number: ";
		cin >> lcmNum;
		cin.ignore(100, '\n');
		cout << endl;

		cout << "Right Winger's name: ";
		getline(cin, rwName);
		cout << "Right Winger's number: ";
		cin >> rwNum;
		cin.ignore(100, '\n');
		cout << endl;

		cout << "Left Winger's name: ";
		getline(cin, lwName);
		cout << "Left Winger's number: ";
		cin >> lwNum;
		cin.ignore(100, '\n');
		cout << endl;

		cout << "Striker's name: ";
		getline(cin, sName);
		cout << "Striker's number: ";
		cin >> sNum;
		cin.ignore(100, '\n');
		cout << endl;
	}
	else
	{
		cout << "Right Midfielder's name: ";
		getline(cin, rmName);
		cout << "Right Midfielder's number: ";
		cin >> rmNum;
		cin.ignore(100, '\n');
		cout << endl;

		cout << "Right Center-Midfielder's name: ";
		getline(cin, rcmName);
		cout << "Right Center-Midfielder's number: ";
		cin >> rcmNum;
		cin.ignore(100, '\n');
		cout << endl;

		cout << "Center-Midfielder's name: ";
		getline(cin, cmName);
		cout << "Center-Midfielder's number: ";
		cin >> cmNum;
		cin.ignore(100, '\n');
		cout << endl;

		cout << "Left Center-Midfielder's name: ";
		getline(cin, lcmName);
		cout << "Left Center-Midfielder's number: ";
		cin >> lcmNum;
		cin.ignore(100, '\n');
		cout << endl;

		cout << "Left Midfielder's name: ";
		getline(cin, lmName);
		cout << "Left Midfielder's number: ";
		cin >> lmNum;
		cin.ignore(100, '\n');
		cout << endl;

		cout << "Striker's name: ";
		getline(cin, sName);
		cout << "Striker's number: ";
		cin >> sNum;
		cin.ignore(100, '\n');
		cout << endl;
	}

	system("cls");

	//Output
	cout << "########################################################################################\n";
	cout << "#                                CREATED FORMATION & TACTIC                            #\n";
	cout << "########################################################################################\n\n";

	printf("%45s%d %s\n\n", "(GK) ", gkNum, gkName.c_str());
	
	printf("%s%d %-15s", "(RB) ", rbNum, rbName.c_str());
	printf("%s%d %-15s", "(RCB) ", rcbNum, rcbName.c_str());
	printf("%s%d %-15s", "(LCB) ", lcbNum, lcbName.c_str());
	printf("%s%d %s\n\n", "(LB) ", lbNum, lbName.c_str());

	if (formation == "1")
	{
		printf("%s%d %-15s", "(RM) ", rmNum, rmName.c_str());
		printf("%s%d %-15s", "(RCM) ", rcmNum, rcmName.c_str());
		printf("%s%d %-15s", "(LCM) ", lcmNum, lcmName.c_str());
		printf("%s%d %s\n\n", "(LM) ", lmNum, lmName.c_str());

		printf("%20s%d %-40s", "(RS) ", rsNum, rsName.c_str());
		printf("%s%d %s", "(LS) ", lsNum, lsName.c_str());
	}
	else if (formation == "2")
	{
		printf("%15s%d %-15s", "(RCM) ", rcmNum, rcmName.c_str());
		printf("%s%d %-15s", "(CM) ", cmNum, cmName.c_str());
		printf("%s%d %s\n\n", "(LCM) ", lcmNum, lcmName.c_str());

		printf("%15s%d %-15s", "(RW) ", rwNum, rwName.c_str());
		printf("%s%d %-15s", "(ST) ", sNum, sName.c_str());
		printf("%s%d %s", "(LW) ", lwNum, lwName.c_str());
	}
	else
	{
		printf("%s%d %-15s", "(RM) ", rmNum, rmName.c_str());
		printf("%s%d %-15s", "(RCM) ", rcmNum, rcmName.c_str());
		printf("%s%d %-15s", "(CM) ", cmNum, cmName.c_str());
		printf("%s%d %-15s", "(LCM) ", lcmNum, lcmName.c_str());
		printf("%s%d %s\n\n", "(LM) ", lmNum, lmName.c_str());

		printf("%30s%d %s", "(ST) ", sNum, sName.c_str());
	}

	cout << "\n\n########################################################################################\n\n";
	printf("%s%-20s%s%s\n\n", "Manager: ", userName.c_str(), "Formation: ", formationName.c_str());
	printf("%s%-21s%s%s\n\n", "Tactic: ", tacticName.c_str(), "Rating: ", rating.c_str());
}