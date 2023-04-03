#include <iostream>
#include <fstream>
#include <list>
#include <iomanip>

#define FileName "data.txt" 

constexpr auto ClassFormat = "Surname Name Math Physics PcScience AVG"; //формат вивода

using namespace std;

class Student {
private:
	string surname;
	string name;
	int marks[3]; //оцінки
	float AVG; //середній бал (авто) 28 строка
public:

	Student(string surname, string name, int* marks) { //конструктор з параметрами
		this->surname = surname;
		this->name = name;
		this->marks[0] = marks[0];
		this->marks[1] = marks[1];
		this->marks[2] = marks[2];
		this->AVG = (this->marks[0] + this->marks[1] + this->marks[2]) / 3;
	}

	friend ostream& operator<<(ostream& stream, const Student& obj); //переписує оператор вивода
	bool operator<(const Student& a) { //переписує оператор менше
		return (this->AVG > a.AVG); //перевірка на більше
	}
	float getAVG() { return AVG; }

};

ostream& operator <<(ostream& stream, const Student& obj) { //оператор вивода (срокове представлення об)
	return stream << obj.surname << " " << obj.name << " " << obj.marks[0] << " " << obj.marks[1] << " " << obj.marks[2] << " " << obj.AVG << endl;
}

int main() {
	list<Student> students;
	ifstream file;
	file.open(FileName);



	while (!file.eof()) { //перевірка на кінець файлу
		string surname, name; int marks[3] = { 0,0,0 };
		file >> surname >> name >> marks[0] >> marks[1] >> marks[2];
		Student tmpStudentData(surname, name, marks); //створюємо об'єкт і засовуємо в нього дані
		students.push_back(tmpStudentData); //додаємо в кінець ліста - об'єкт
	}

	students.sort();

	cout << ClassFormat << endl;

	for (Student i : students) {
		cout << i; //виводимо кожен елемент ліста
	}
}