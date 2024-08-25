#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char text;
	string strText;
	string encryption;
	string arr[] = { "Q", "q"," W", "w", "E", "e", "R", "r", "T", "t", "Y", "y", "U", "u", "I", "i", "O", "o", "P", "p", "A", "a", "S", "s", "D", "d", "F", "f", "G", "g", "H", "h", "J", "j", "K", "k", "L", "l", "Z", "z", "X", "x", "C", "c", "V", "v", "B", "b", "N", "n", "M", "m", ",", ".", "!"," ", "?", "Q", "q","W" };
	ifstream original("original.txt");
	ofstream encryptionFile("encryption.txt");

	while (original.get(text)) {
		strText = text;

		for (int i = 0; i < 64; i++) {
			if (strText == arr[i]) {
				encryption += arr[i + 3];
			}
		}
	}

	encryptionFile << encryption << endl;
	encryptionFile.close();
	original.close();
}