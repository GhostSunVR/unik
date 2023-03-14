#include <iostream>
using namespace std;

/*¬ар≥ант 13. —творити клас Ђкомплексне числої, такий, що:
a) його екземпл€р м≥стить д≥йсну ≥ у€вну частину - зм≥нн≥ з плаваючою
точкою.
b) його конструктор без параметра створюЇ екземпл€р з≥ значенн€м 0.0
+ i0.0, а конструктор з параметрами створюЇ екземпл€р з
в≥дпов≥дною д≥йсною та у€вною частиною.
c) його методи дозвол€ють отримувати ≥ присвоювати значенн€ д≥йсноњ
та у€вноњ частини.
d) функц≥€ print() виводить на екран значенн€ екземпл€ра у вигл€д≥
(0.00 ± i0.00) */

class kom_chyslo {
private:
	float a, b; 

public:
	kom_chyslo(float a, float b) { //конструктор з параметром
		this->a = a;
		this->b = b;
	}

	kom_chyslo() { //конструктор без параметра
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

