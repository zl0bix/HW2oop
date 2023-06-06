#include<iostream>
#include<string>
#include<vector>
#include<iterator>

class Human {
		std::string _name;
		std::string _soname;
		int _age;
		std::string _nomber;
	public:
		Human(): _name("Andrew"),_soname("Barilov"),_age(37),_nomber("89068071134"){}
		void SetData() {
			std::cout << "Enter name -> ";
			std::cin >> _name;
			std::cout << "Enter soname -> ";
			std::cin >> _soname;
			std::cout << "Enter age -> ";
			std::cin >> _age;
			std::cout << "Enter nomber -> ";
			std::cin >> _nomber;
		}
		void ShowData() {
			std::cout << "Name is " << _name << std::endl;
			std::cout << "Soname is " << _soname << std::endl;
			std::cout << "Age is " << _age << std::endl;
			std::cout << "Nomber is " << _nomber << std::endl;
		}
};

class PhoneBook {
	std::vector<Human*>_human;
	public:
	void Enter(Human* human) {
		_human.push_back(human);
	}
	void ShowHumans() {
		std::vector<Human*>::iterator it;
		for (it = _human.begin(); it != _human.end(); it++) //(const auto &it : _clients)
			(**it).ShowData();
	}

	void ShowHuman(int index) {
		if (index > _human.size())
			return;
		(*_human.at(index - 1)).ShowData();
	}
};


int main() {
	int n;
	PhoneBook* phone1 = new PhoneBook;
	Human* human1 = new Human;
	//human1->SetData();
	//human1->ShowData();
	Human* human2 = new Human;
	//human2->SetData();
	//human2->ShowData();
	do{
	std::cout<<"Enter number \n1. Add contact:\n2. Show contact:\n3. Show all contacts\
		\n4. Delete contact:\n";
	std::cout << "Enter number -> ";
	std::cin >> n;
	system("cls");
	}
	while (n < 1 || n > 4 );
	switch (n) {
	case 1: {
		human1->SetData();
		phone1->Enter(human1);
	}break;

	case 2:
		human1->ShowData();
		break;
	}

	return{};
}