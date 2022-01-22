//#pragma once
//#include <vector>
//
//
//int Additional(int a, int b) {return a + b;}
//
//int ConvertMinToSec(int minutes) {return minutes * 60;}
//
//int FindPerimeter(int height, int width) { return (height * 2) + (width * 2); }//היקף}
//
//int Plus1(int& num) {return ++num;}
//
//int Minus1(int& num) { return --num; }
//
//int TriangleArea(int base, int height) {return base * height / 2;}
//
//int NextEdge(int side1, int side2) { return side1 + side2 - 1;} //Finds the maximum range of a triangle's third edge
//
//int HowManySeconds(int hours) {
//	hours *= 60;
//	return hours * 60;
//}
//
//bool IsEqual(int num1, int num2) {return num1 == num2;}
//
//int Remainder(int x, int y) {return x % y;}
//
//int Squared(int a) {return a * a;}
//
//bool LessThanOrEqualToZero(int num) {return num <= 0;}
//
//bool ReverseBool(bool boolean) {
//	if (boolean == true) return boolean = false;
//	else return boolean = true;
//}
//
//int AnimalsLegs(int chickens, int cows, int pigs) {return (chickens * 2) + (cows * 4) + (pigs * 4);}
//
//bool LessThan100(int a, int b) {
//	if (a + b < 100) return true;
//	else return false;
//}
//
//int ConvertMinAndHourToSec(int hours, int minutes) {
//	hours *= 60;
//	return hours * 60 + minutes * 60;
//}
//
//bool DivisibleByHundred(int num) {
//	if (num % 100 == 0)	return true;
//	else return false;
//}
//
//bool DivisibleByFive(int num) {
//	if (num % 5 == 0) return true;
//	else return false;
//}
//
//int FlipIntBool(int baseIntBoolean) {
//	if (baseIntBoolean == 1) return baseIntBoolean = 0;
//	else return baseIntBoolean = 1;
//}
//
//bool ProfitableGamble(float prob, int prize, float pay) {
//	if (prob * prize > pay)	return true;
//	else return false;
//}
//
//int FPS(int minutes, int fps) {return minutes * 60 * fps;}
//
//bool DividesEvenly(int a, int b) {
//	if (a % b == 0)	return true;
//	else return false;
//}
//
//int GetFirstValue(std::vector <int> arr) { return arr[0]; }
//
//bool TimeForMilkAndCookies(int year, int month, int day) { //check if the date of Xmas
//	if (month == 11 && day == 24) return true;
//	else return false;
//}
//
//std::string HelloName(std::string name) { return  "Hello " + name  + "!"; }
//
//bool isStringEmpty(std::string str) {return str == "";}
//
//std::string ConcatName(std::string firstName, std::string lastName) {return lastName + ", " + firstName;}
//
//int GetLastArrayItem(int arr[], int length) {
//	int i = length-1;
//	return arr[i];
//}
//
//std::string IsEvenOrOdd(int num) {
//	if (num % 2 == 0) return "even";
//	else return "odd";
//}
//
//unsigned short Ctoa(char c) {return toascii(c);} //Char to ASCII
//
//int StackBoxes(int n) {return n * n;}
//
//bool CompareStrLen(std::string str1, std::string str2) {return str1.length() == str2.length();}
//
//int TotalCups(int n) {
//	return n + n / 6;
//}
//
//std::string Dashesv1(int num) {
//	std::string dash("");
//	for (int i = 0; i < num; i++) dash += "-";
//	return dash;
//}
//
//std::string Dashesv2(int num) {return std::string(num, '-');}
//
//std::string Get24(int num1, int num2) {
//	if (num1 + num2 == 24) return "added";
//	else if (num1 - num2 == 24) return "subtracted";
//	else if (num1 * num2 == 24)	return "multiplied";
//	else if (num1 / num2 == 24)	return "divided";
//	else return "Invalid";
//}
//
//bool EqualSlices(int total, int people, int each) {
//	if (total >= people * each)	return true;
//	else return false;
//}
//
//bool IsLeap(int year) {
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return true;
//	else return false;
//}
//
//std::string RepeatTheA(int num) {
//	return "Ed" + std::string(num, 'a') + "bit";
//}
//
//std::string HelloWorld(int num) {
//	if (num % 3 == 0) return "Hello";
//	else if (num % 5 == 0) return "World";
//	else if (num % 15 == 0) return "Hello World";
//	else return "";
//}
//
//std::string MonthNamev1(int num) {
//
//	switch (num)
//	{
//	case 1: return "January";
//		break;
//	case 2: return "February";
//		break;
//	case 3: return "March";
//		break;
//	case 4: return "April";
//		break;
//	case 5: return "May";
//		break;
//	case 6: return "June";
//		break;
//	case 7: return "July";
//		break;
//	case 8: return "August";
//		break;
//	case 9: return "September";
//		break;
//	case 10: return "October";
//		break;
//	case 11: return "November";
//		break;
//	case 12: return "December";
//		break;
//	default: return "Invalid";
//		break;
//	}
//}
//
//std::string MonthNamev2(int num) {
//	std::string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October","November","December" };
//	return months[num - 1];
//}
//
//std::string MissingAngle(int angle1, int angle2) {
//	if (180 - angle1 - angle2 < 90) return "acute";
//	else if (180 - angle1 - angle2 == 90) return "right";
//	else return "obtuse";
//}
//
//int StringLength(std::string str) {
//	return str.length();
//}
//
//std::string YeahNope(bool b) {
//	if (b == true) return "yeah";
//	else return "nope";
//}
//
//std::string YeahNope2(bool b) {
//	return b ? "yeah" : "nope";
//}
//
//int AddUpTo(int n) {
//	int num = 0;
//	for (int i = 0; i <= n; i++)
//		num += i;
//	return num;
//}
//
//bool IsPlural(std::string word) {
//	int i = word.length()-1;
//	if (word.at(i) == 's') return true;
//	else return false;
//}
//
//int FindIndex(std::vector<int> arr, int item) {
//	for (int i = 0; i < arr.size(); i++)
//		if (item == arr[i]) return i;
//}
//
//int oddProduct(std::vector<int> arr) {
//	int num = 1;
//	for (int i : arr)
//		if (i % 2 != 0)
//			num *= i;
//	return num;
//			
//}
//
//std::vector<int> OddUpEvenDown(std::vector<int> arr) {
//	for (int i = 0; i < arr.size(); i++)
//		if (arr[i] % 2 == 0) --arr[i];
//		else ++arr[i];	
//	return arr;
//}
//
//
//int Difference(std::vector <int> arr) {
//	int smallest;
//	int biggest;
//	smallest = arr[0];
//	biggest = arr[0];
//	for (int i = 0 ; i < arr.size(); i++)
//		if (smallest > arr[i])
//			smallest = arr[i];
//	for (int i = 0; i < arr.size(); i++)
//		if (biggest < arr[i])
//			biggest = arr[i];
//
//	return biggest - smallest;
//	
//}
//
//std::vector<int> calculateScores(std::string str){
//	int A = 0, B = 0, C = 0;
//	std::vector<int> scores {A, B, C };
//	for (int i = 0; i < str.size(); i++) {
//		if (str[i] == 'A') ++scores[0];//std::cout << "A++";
//		else if (str[i] == 'B') ++scores[1];//std::cout << "B++" ;
//		else ++scores[2];
//	}
//	return scores;
//}
//
//bool existsHigher(std::vector<int> arr, int n) {
//	int max = arr[0];
//	for (int i = 0; i < arr.size(); i++)
//		if (max < arr[i]) max = arr[i];
//		if (max >= n) return true;
//		else return false;
//}
//
//int CharCount(char MyChar, std::string str) {
//	int num = 0;
//	for (char c : str)
//		if (c == MyChar) ++num;
//	return num;
//}
//
//bool checkFactors(std::vector<int> factors, int num) {
//	for (int n : factors)
//		if (num % n != 0)  return false;
//
//	return true;
//
//}
//
