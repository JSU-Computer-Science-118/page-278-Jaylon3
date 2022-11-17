// write your code here
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;
const string SENTINEL = "-1";

int main()
{
   
	string name;
	int numOfVolunteers;
	int numofboxessold;
	int totalnumofboxessold;
	double costofonebox;

	cout << fixed << showpoint << setprecision(2);

	cout << "Line 14: Enter each volunteer's name and "
		<< "the number of boxes " << endl;
	 cout << "		sold by each volunteer, ending "
		<< "with -1" << endl;

	 totalnumofboxessold = 0;
	 numOfVolunteers = 0;

	 cin >> name;


	 while (name != SENTINEL) {
		 cin >> numofboxessold;
		 totalnumofboxessold = totalnumofboxessold + numofboxessold;

		 numOfVolunteers++;
		 cin >> name;
	 }

	 cout << endl;

	 cout << "Line 26: the total number of boxes sold: "
		 << totalnumofboxessold << endl;

	 cout << "Line 27: Enter the cost of one box: ";
	 cin >> costofonebox;
	 cout << endl;

	 cout << "Line 30: the total monet made by selling " << "cookes: $"
		 << totalnumofboxessold * costofonebox << endl;
	 if (numOfVolunteers != 0) {
		 cout << "Line 32: The average number of "
			 << "boxes sold by each volunteer: "
			 << totalnumofboxessold / numOfVolunteers << endl;
	 }
	 else cout << "Line 34: no input. " << endl;

	 return 0;



}
