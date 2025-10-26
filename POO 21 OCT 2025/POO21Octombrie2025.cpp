#include<iostream>

using namespace std;


class Fruct {
private:
	const int idFruct;
	//numarFructe
	char* nume;
	string culoare;
	float greutate;
	int lunaMaturitate;

public:
	void setGreutate(float greutate) {
		if (greutate > 0) {
			(*this).greutate = greutate;
		}
	}
	float getGreutate() {
		return this->greutate;
	}
	
	char* getNume() {
		return this->nume;
	}
	void 
};

void main() {
	Fruct fruct;
	Fruct f;
	Fruct para;

	fruct.setGreutate(2.5);
	fruct.setGreutate(-56);
	cout << fruct.getGreutate();

	char var1;
	char* var2;

	cout << sizeof(char);
}