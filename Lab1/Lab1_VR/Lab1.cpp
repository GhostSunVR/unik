#include <iostream>
using namespace std;

class kom_chyslo {
private:
	float a, b; 

public:
	kom_chyslo(float a, float b) { //êîíñòðóêòîð ç ïàðàìåòðîì
		this->a = a;
		this->b = b;
	}

	kom_chyslo() { //êîíñòðóêòîð áåç ïàðàìåòðà
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
		cout << this->a << " ± " << this->b;

	}
};

int main() {
	kom_chyslo a = kom_chyslo(2.4, 5.3);
	a.print();
}

