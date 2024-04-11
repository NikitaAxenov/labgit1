#include <iostream>

using namespace std;

void NumberOfVowels(string str1, int& res) {
	char all_vowels[10] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };

	for (int i = 0; i < str1.length(); i++)
	{
		for (int j = 0; j < 10; j++) {
			if (str1[i] == all_vowels[j])
				res++;
		}
	}
}

void ChangeCaseOfLetters(string& str2) {
	for (int i = 0; i < str2.length(); i++) {
		if (str2[i] >= 65 && str2[i] <= 92)
			str2[i] += 32;
		else if (str2[i] >= 97 && str2[i] <= 122)
			str2[i] -= 32;
	}
}

int main() {
	int task;

	while (1) {
		cout << "Select a task:" << endl;
		cout << "1) Number of vowel letters in a string;" << endl;
		cout << "2) Change the case of string letters;" << endl;
		cout << "3) Removing punctuation marks;" << endl;
		cout << "4) Palindrome test." << endl;
		cout << "Enter the task number: ";

		cin >> task;

		switch (task)
		{
		case 1:
		{
			int result = 0;
			string string1;

			cout << "Enter your string: ";

			cin.get();
			getline(cin, string1);

			NumberOfVowels(string1, result);

			cout << "Vowels: " << result << endl;

			break;
		}
		case 2:
		{
			string string2;

			cout << "Enter your string: ";

			cin.get();
			getline(cin, string2);

			ChangeCaseOfLetters(string2);

			cout << string2 << endl;

			break;
		}
		case 3:
		{
			

			break;
		}
		case 4:
		{
			

			break;
		}
		default:
		{
			cout << "Error! Please enter the correct value!" << endl;

			break;
		}
		}
		cout << "---------------------------------------" << endl;
	}
	return 0;
}