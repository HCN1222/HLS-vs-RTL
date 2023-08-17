#include <iostream>

void debouncer(bool sw, bool &out);



int main() {

	int status = 0;

	bool sw;
	bool out;

	for (int i = 0; i < 5000; i++) {
		sw = 0;
		debouncer(sw, out);
	}

	for (int i = 0; i < 250; i++) {
		sw = 0;
		debouncer(sw, out);
		sw = 1;
		debouncer(sw, out);
	}

	for (int i = 0; i < 5000; i++) {
		sw = 1;
		debouncer(sw, out);
	}

	for (int i = 0; i < 250; i++) {
		sw = 1;
		debouncer(sw, out);
		sw = 0;
		debouncer(sw, out);
	}


	for (int i = 0; i < 5000; i++) {
		sw = 0;
		debouncer(sw, out);
	}



	return status;

}
