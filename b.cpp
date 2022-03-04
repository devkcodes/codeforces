#include <bits/stdc++.h>
// using namespace std;

struct person {
	std::string name;
	int age;
};

int main() {
	std::cout << person{"John", 32} << endl;
}

std::ostream const& operator<<(std::ostream& os, person const&p) {
	os << p.name << "of age" << p.age;
	return os;
}