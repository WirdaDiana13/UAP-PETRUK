//vidya
#include <iostream>
#include <conio.h>
#include <stack>
using namespace std; 

string album[]= {"EXO - The War", 
		"Red Velvet - Bloom",
		"NCT DREAM - Hot Sauce",
		"EXO - Don't Mess Up My Tempo",
		"D.O  - Empathy The 1st Mini Album",
		"NCT 127 - Sticker",
		"Aespa - SAVAGE The 1st Mini Album", 
		"NCT - Universe",
		"ONEW - DICE The 2nd Mini Album",
		"Baekhyun - BAMBI the 3rd Mini Album"};

int harga[]= {275000, 320000, 289000, 312000, 278000, 315000, 273000, 326000, 265000, 284000};

int main(){
	
}
//wirda
void print(stack<int> x){ //berfungsi untuk mencetak stack
    stack<int> xy = x;
	  while (!xy.empty()) {
        cout << ">> "<< album[xy.top() - 1]<<endl; cout << "   Harga:  Rp. " << harga[xy.top() - 1] << endl;
        xy.pop();
    }
}
