//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class class_name {
//private:
//	string string;
//	int integer;
//public:
//	//overloaded constructors
//	class_name();
//	class_name(std::string string, int integer);
//	std::string get_string() { return string; }
//	int get_integer() { return integer; }
//
//	void set_string(std::string string ) { this->string = string; }
//	
//
//	void set_string2() {
//		std::string name;
//		getline(cin, name);
//		this->string = name;
//
//	}
//
//	void set_int(int integer) { this->integer = integer; }
//};
//
//class_name::class_name()
//	: string{ "None" }, integer{ 0 }{
//
//}
//
//class_name::class_name(std::string string, int integer )
//	: string{ string }, integer{ integer }{
//
//}
//
//void display(class_name class_name) {
//	cout << class_name.get_string() << " " << class_name.get_integer() << endl;
//}
//
//void display(vector <class_name> classes) {
//	if (classes.size() != 0) 
//	for (class_name x : classes)
//		cout << x.get_string() << " " << x.get_integer() << endl;
//	else {
//		cout << "Classes is empty" << endl;
//	}
//}
//
//int main() {
//	
//	class_name class_1{ "1", 1};
//	display(class_1);
//	class_1.set_string("8");
//	display(class_1);
//	class_1.set_int(9);
//	display(class_1);
//	class_name class_2{};
//	display(class_2);
//	class_2 = class_1;
//	display(class_2);
//
//	vector < class_name> classes{};
//	display(classes);
//
//	classes.push_back(class_1);
//	cout << "class_1 added to classes vector" << endl;
//	display(classes);
//	class_2.set_string("Class 2");
//	
//	classes.push_back(class_2);
//		class_2.set_string2();
//		display(class_2);
//
//		display(classes);
//		display(class_2);
//		classes.erase(classes.begin()+1);
//		display(classes);
//		classes.push_back(class_2);
//		display(classes);
//	return 0;
//}