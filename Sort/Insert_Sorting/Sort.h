#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#define MAX 100000
using namespace std;
vector<string> split(string input, char delimiter) {
	vector<string> answer;
	stringstream ss(input);
	string temp;

	while (getline(ss, temp, delimiter)) {
		answer.push_back(temp);
	}

	return answer;
}

vector<string> readcsv() {
	string str_buf;
	fstream fs;

	fs.open("before_.csv", ios::in);

	while (!fs.eof()) {
		getline(fs, str_buf, ',');
	}
	fs.close();
	vector<string> result = split(str_buf, '\n');
	return result;
}

class Sort {
private:
	int array[MAX] = { 0 };
	int num = 0; //array에 들어간 숫자 개수
public:
	void insert(int number) { //num-1에 마지막 수가 들어간다
		if (number != NULL) {
			array[num] = number;
			num++;
		}
	}
	void make_array() {
		vector<string> result = readcsv();
		for (int i = 0; i < result.size(); i++) {
			insert(stoi(result[i]));
		}
	}
	void bubbleSoring() {
		make_array();
		int cur = 0;
		for (int i = 0; i != num; i++) { //n-1번 반복
			for (cur = num - 1; cur != 0; cur--) {
				if (array[cur] < array[cur - 1]) {
					int temp = array[cur];
					array[cur] = array[cur - 1];
					array[cur - 1] = temp;
				}
				else
					continue;
			}
		}
		cout << "Bubble Sorting completed" << endl;
	}
	void InsertionSoring() {
		vector<string> result = readcsv();
		for (int i = 0; i < result.size(); i++) {
			insert(stoi(result[i]));
			if (num > 1) {
				for (int j = num-1; j != 0; j--) {
					if (array[j] < array[j - 1]) {
						int temp = array[j];
						array[j] = array[j - 1];
						array[j - 1] = temp;
					}
					else break;
				}
			}
		}
		cout << "Insertion Sorting completed" << endl;
	}
	void PRINT() {
		for (int i = 0; i <= 100; i++) {
			cout << array[i] << " ";
		}
		cout << endl << "... " << endl << endl;
		for (int i = num-100; i < num; i++) {
			cout << array[i] << " ";
		}
	}
	void printcsv(string type) {
		string out_line;
		if (type == "bubble") {
			ofstream out("after_C++_bubble.csv");
			for (int i = 0; i < num; i++) {
				out << array[i] << '\n';
			}
		}
		else if (type == "insert") {
			ofstream out("after_C++_insert.csv");
			for (int i = 0; i < num; i++) {
				out << array[i] << '\n';
			}
		}
	}
};


