#include <iostream>
#include <conio.h>
using namespace std;

//������� ��������� ʲ-21012�

/*������ 13. �������� ���� ����������� �����, �����, ��:
a) ���� ��������� ������ ����� � ����� ������� - ����� � ���������
������.
b) ���� ����������� ��� ��������� ������� ��������� � ��������� 0.0
+ i0.0, � ����������� � ����������� ������� ��������� �
��������� ������ �� ������ ��������.
c) ���� ������ ���������� ���������� � ����������� �������� �����
�� ����� �������.
d) ������� print() �������� �� ����� �������� ���������� � ������
(0.00 � i0.00) */

class kom_chyslo{
private:
	float a, b; 
public:
	kom_chyslo(float a, float b) { //����������� � ����������
		this->a = a;
		this->b = b;
	}

	kom_chyslo() { //����������� ��� ���������
		this->a = 0;
		this->b = 0;
	}

	float get_main_a() {
		return this->a;
	}

	float get_main_b() {
		return this->b;
	}

	void set_main_a(float a) {
		this->a = a;
	}
	
	void set_main_b(float b) {
		this->b = b;
	}

	void print() {
		cout << this->a << " +- " << this->b;

	}
};

void main() {
	float A, B;
	cout << "Enter the float number for value A and B (with space):" << endl;
	cin >> A >> B;
	kom_chyslo _a = kom_chyslo(A, B);
	_a.print(); cout << endl;
	_getch();
}

