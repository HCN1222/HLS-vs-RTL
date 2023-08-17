#include "counter-tb.h"
#include <iostream>

std::map<ap_uint<8>,int> first = {
		{0b11000000, 0},
		{0b11111001, 1},
		{0b10100100, 2},
		{0b10110000, 3},
		{0b10011001, 4},
		{0b10010010, 5},
		{0b10000010, 6},
		{0b11111000, 7},
		{0b10000000, 8},
		{0b10010000, 9}
};


int main() {

	int status  = 0;

	bool        count_up;
	ap_uint<8>  seven_segments_data;
	ap_uint<4>  seven_segments_enable;


	for (int i = 0; i < 10; i++) {
		count_up = 1;
		counter( count_up, seven_segments_data, seven_segments_enable);
		std::cout << "count_up = "  << count_up << " output = " << first[seven_segments_data] << std::endl;
		count_up = 0;
		counter( count_up, seven_segments_data, seven_segments_enable);
		std::cout << "count_up = "  << count_up << " output = " << first[seven_segments_data] << std::endl;
	}

	for (int i = 0; i < 10; i++) {
		count_up = 1;
		counter( count_up, seven_segments_data, seven_segments_enable);
		std::cout << "count_up = "  << count_up << " output = " << first[seven_segments_data] << std::endl;
		counter( count_up, seven_segments_data, seven_segments_enable);
		std::cout << "count_up = "  << count_up << " output = " << first[seven_segments_data] << std::endl;
		count_up = 0;
		counter( count_up, seven_segments_data, seven_segments_enable);
		std::cout << "count_up = "  << count_up << " output = " << first[seven_segments_data] << std::endl;
	}



	for (int i = 0; i < 10; i++) {
		count_up = 1;
		counter( count_up, seven_segments_data, seven_segments_enable);
		std::cout << "count_up = "  << count_up << " output = " << first[seven_segments_data] << std::endl;
		counter( count_up, seven_segments_data, seven_segments_enable);
		std::cout << "count_up = "  << count_up << " output = " << first[seven_segments_data] << std::endl;
		counter( count_up, seven_segments_data, seven_segments_enable);
		std::cout << "count_up = "  << count_up << " output = " << first[seven_segments_data] << std::endl;
		count_up = 0;
		counter( count_up, seven_segments_data, seven_segments_enable);
		std::cout << "count_up = "  << count_up << " output = " << first[seven_segments_data] << std::endl;
		counter( count_up, seven_segments_data, seven_segments_enable);
		std::cout << "count_up = "  << count_up << " output = " << first[seven_segments_data] << std::endl;
		counter( count_up, seven_segments_data, seven_segments_enable);
		std::cout << "count_up = "  << count_up << " output = " << first[seven_segments_data] << std::endl;
		counter( count_up, seven_segments_data, seven_segments_enable);
		std::cout << "count_up = "  << count_up << " output = " << first[seven_segments_data] << std::endl;
	}

	return status;
}
