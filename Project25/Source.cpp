




#include <iostream>

using namespace std;

class Phone {
public:
	string name;
	string vendor;
	int ram;
	int memory;

	Phone(string name, string vendor, int ram, int memory) {
		this->name = name;
		this->vendor = vendor;
		this->ram = ram;
		this->memory = memory;
	}
	virtual ~Phone() = 0 {}

};

class Samsung :public Phone {
public:
	Samsung(string name, string vendor, int ram, int memory) :Phone(name, vendor, ram, memory) {

	}
};

class Xiomi :public Phone {
public:
	Xiomi(string name, string vendor, int ram, int memory) :Phone(name, vendor, ram, memory) {

	}
};

class Iphone :public Phone {
public:
	Iphone(string name, string vendor, int ram, int memory) :Phone(name, vendor, ram, memory) {

	}
};

class Person {
public:
	void UsePhone(const Phone& obj) {
		cout << "Menim telefonum " << obj.vendor << " " << obj.name << " dir" << endl;
	}
};

int main() {

	Samsung samsung("J5", "Samsung", 2, 32);
	Xiomi xiomi("redmi 9s", "Xiomi", 6, 128);
	Iphone iphone("X", "Iphone", 6, 128);

	Person* person = new Person();
	person->UsePhone(samsung);
	person->UsePhone(xiomi);
	person->UsePhone(iphone);


	delete person;
}