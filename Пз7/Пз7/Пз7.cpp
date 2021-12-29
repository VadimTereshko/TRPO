#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

struct student
{
	string name;
	string surname;
	string weight;
	struct
	{
		int day;
		int month;
		int year;
	}age;
};

student* enterStudentsInf(student* students_inf, int num_of_students);
void outStudentsInf(student* students_inf, int num_of_students);
void mostCommonName(student* students_inf, int num_of_students);
bool comporatorByName(student one, student two);
void nameSort(student* students_inf, int num_of_students);
void averageAge(student* students_inf, int num_of_students);

int main() {

	int num_of_students; cout << "Number of students: "; cin >> num_of_students;
	student* students_inf = new student[num_of_students];
	enterStudentsInf(students_inf, num_of_students);
	outStudentsInf(students_inf, num_of_students);
	mostCommonName(students_inf, num_of_students);
	nameSort(students_inf, num_of_students);
	outStudentsInf(students_inf, num_of_students);
	averageAge(students_inf, num_of_students);
	delete[] students_inf;

}

student* enterStudentsInf(student* students_inf, int num_of_students) {

	for (int i = 0; i < num_of_students; i++) {

		cout << "Name of " << i + 1 << " student: ";             cin >> students_inf[i].name;
		cout << "Surname of " << i + 1 << " student: ";          cin >> students_inf[i].surname;
		cout << "Weight of " << i + 1 << " student: ";           cin >> students_inf[i].weight;
		cout << "Day of birth of " << i + 1 << " student: ";     cin >> students_inf[i].age.day;
		cout << "Month of birth of " << i + 1 << " student: ";   cin >> students_inf[i].age.month;
		cout << "Year of birth of " << i + 1 << " student: ";    cin >> students_inf[i].age.year;
	}
	return 0;
}

void outStudentsInf(student* students_inf, int num_of_students) {

	cout << "Name:\t\tSurname:\t\tDate Of Birth:\t\tWeight:" << endl;
	for (int i = 0; i < num_of_students; i++) {
		cout << students_inf[i].name << setw(20) << students_inf[i].surname
			<< setw(20) << students_inf[i].age.day << "."
			<< students_inf[i].age.month << "."
			<< students_inf[i].age.year << setw(20)
			<< students_inf[i].weight << endl;
	}
}

void mostCommonName(student* students_inf, int num_of_students) {

	int temp_quantity = 0;
	int num_of_most_popular_name = 0;
	int max_quantity = 0;

	for (int i = 0; i < num_of_students; i++) {
		temp_quantity = 0;

		for (int j = i + 1; j < num_of_students; j++) {

			if (students_inf[i].name == students_inf[j].name) {
				temp_quantity++;
			}
		}

		if (temp_quantity > max_quantity) {

			max_quantity = temp_quantity;
			num_of_most_popular_name = i;
		}
	}

	if (num_of_students != 1) {

		if (max_quantity == 0) {
			cout << "\nAll names are different" << endl;
		}
		else {
			cout << "\nThe most popular name of students is " << students_inf[num_of_most_popular_name].name;
		}
	}
	else { cout << "\nThere is only one student" << endl; }
}

void nameSort(student* students_inf, int num_of_students) {

	cout << "\nAfter sort by name: " << endl;
	sort(students_inf, students_inf + num_of_students, comporatorByName);

}

bool comporatorByName(student first, student second) {

	return first.name < second.name;

}

void averageAge(student* students_inf, int num_of_students) {

	int* year = new int[num_of_students];
	int* month = new int[num_of_students];

	time_t t = time(NULL);
	struct tm* time = new tm;
	localtime_s(time, &t);
	for (int i = 0; i < num_of_students; i++) {

		year[i] = (time->tm_year + 1900) - students_inf[i].age.year;
		if ((time->tm_mon + 1) < students_inf[i].age.month) {

			year[i]--;
			month[i] = (12 - students_inf[i].age.month) + time->tm_mon + 1;
		}
		else {

			month[i] = time->tm_mon + 1 - students_inf[i].age.month;
			if (time->tm_mday < students_inf[i].age.day && month[i] == 0) {

				year[i]--;
			}
		}
	}

	int sum_of_years = 0, sum_of_month = 0;
	for (int i = 0; i < num_of_students; i++) {
		sum_of_years += year[i];
		sum_of_month += month[i];
	}
	cout << "\nAverage age: " << sum_of_years / num_of_students << " years, " << sum_of_month / num_of_students << " months\n";
}