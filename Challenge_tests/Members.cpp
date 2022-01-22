//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Member {
////Attributes
//private:
//	std::string name;
//	int age;
//public:
//	//Overloaded constructors
//	Member();
//	Member(string name, int age);
//
//	
//	void set_name(std::string name) { this->name = name;	}
//	string get_name() const { return name; }
//	
//	void set_age(int age) { this->age = age; }
//	int get_age() { return age; }
//};
//
//Member::Member(string name, int age)
//	: name{ name }, age{ age }{
//
//}
//
//Member::Member()
//	: name{ "None" }, age{ 0 }{
//
//}
//
//	/*	
//	}
//	
//	Member(string name) {
//
//	}
//
//	Member(string name, int age) {
//
//	}
//
//	~Member();
//
//
//Member::Member(string name_val, int age_val)
//	: name{ name_val }, age{ age_Val }{
//}
//
//
//*/
//void display(Member& source) {
//	cout << "Name: "<< source.get_name()
//		<< " Age: " << source.get_age() << endl;
//}
//
//void display_family(vector <Member> vec) {
//	for (Member m : vec)
//		cout << m.get_name() << " and " << m.get_age() << endl;
//	
//}
//
//
//int main() {
//
//	Member nadav;
//	nadav.set_name("Nadav");
//	nadav.set_age(27);
//	display(nadav);
//	Member kate{ "Kate", 27 };
//	display(kate);
//
//	vector <Member> family{};
//	family.push_back(nadav);
//	display_family(family);
//
//	cout << endl;
//	family.push_back(kate);
//	display_family(family);
//
//
//	return 0;
//}
//
