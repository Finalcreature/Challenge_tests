//#include<iostream>
//#include <vector>
//using namespace std;
//
//
////bool Loop(string Word) {
////    for (int i = 0; i < Word.length(); i++) {
////        for (int j = i + 1; j < Word.length(); j++) {
////            cout << Word[i] << " " << Word[j] << endl;
////             if (Word[i] == Word[j]) { return true; }
////
////              else return false;
////          }
////              return false;
////          }
////      }
////        }
////    }
////}
//bool Isogram(string words) {
//	for (int Index = 0; Index < words.length(); Index++)
//		for (int Comparison = Index + 1; Comparison < words.length(); Comparison++)
//			if (words[Index] == words[Comparison])  return false;
//
//	return true;
//}
//
//
//vector <string> Getwords(vector<string>& getwords) {
//	for (int Index = 0; Index < getwords.size(); Index++)
//		if (!Isogram(getwords[Index]) || getwords[Index].length() < 3) {
//			getwords.erase(getwords.begin() + Index);
//		}
//	cout << "Words: ";
//	for (string w : getwords)
//		cout << w << ", ";
//	cout << endl;
//	return getwords;
//}
//
//
//void GetBullCows(const string& HiddenWord, const string& Guess, int& BullCount, int& CowCount) {
//	BullCount = 0;
//	CowCount = 0;
//
//	//for every index Guess is same as Index HiddenWord BullCount++
//  // If not a Bull was it a cow? if yes CowCont++
//
//
//	
//		
//
//	
//	cout << "Bulls: " << BullCount << " and Cows: " << CowCount << endl;
//}
//
//int main() {
//	//
//	//    string word;
//	//    cout << "Enter word: ";
//	//    cin >> word;
//	//    if (Loop(word) == true) cout << "Not isogram";
//	//    else cout << "isogram";
//	//
//	//    int i = 0;
//	//
//	//
//	//     do {
//	//         cout << i << endl;
//	//         i++;
//	//     } while (i <= 10);
//	//
//	//}
//
//	vector <string> words{ "Hi","Hello","Bye","You can", "Back", "Sport", "Loops"};
//
//	for (int i = 0; i < words.size(); i++)
//		if (words[i].length() >= 3 && words[i].length() <= 5)
//			cout << words[i] << ", ";
//	cout << endl;
//	if (Isogram("Hello"))	cout << "Isogram" << endl;
//	else cout << "Not" << endl;
//
//	//Getwords(words);
//	//
//	//cout << "Words: ";
//	//for (string w : words)
//	//	cout << w << ", ";
//
//
//	int a = 0;
//	int b = 5;
//
//	const int& refa = a;
//	cout << "\na = " << a << " b = " << b << " refa = " << refa << endl;
//	
//	
//	string HiddenWord = "Cake";
//	string Guess;
//	int Bulls;
//	int Cows;
//	cin >> Guess;
//	GetBullCows(HiddenWord, Guess, Bulls, Cows);
//	cout << endl;
//	return 0;
//	
//}
