#include "Sort.h"
#include <ctime>
using namespace std;
int main() {
	Sort s;
	clock_t start1 = clock();
	s.bubbleSoring();
	double end1 = double(clock() - start1);
	cout << "time of sort >> " << end1 / 1000 << "s\n" << endl;
	s.PRINT();
	cout << endl << endl << endl << endl;
	s.printcsv("bubble");
	Sort s_;
	clock_t start2 = clock();
	s_.InsertionSoring();
	double end2 = double(clock() - start2);
	cout << "time of sort >> " << end2 / 1000 << "s\n" << endl;
	s_.PRINT();
	s_.printcsv("insert");

	return 0;
}