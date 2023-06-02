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
	PhoneBook* phone = new PhoneBook;
	Human* human1 = new Human;
	human1->SetData();
	human1->ShowData();
	PhoneBook

	return{};
}