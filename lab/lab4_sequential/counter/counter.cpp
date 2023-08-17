#include "counter.h"

ap_uint<8> get_seven_segment_code(ap_uint<5> number) {
#pragma HLS INLINE

	ap_uint<8> code = seven_segment_code[0];
	switch(number) {

	case 0:
		code = seven_segment_code[0];
		break;
	case 1:
		code = seven_segment_code[1];
		break;
	case 2:
		code = seven_segment_code[2];
		break;
	case 3:
		code = seven_segment_code[3];
		break;
	case 4:
		code = seven_segment_code[4];
		break;
	case 5:
		code = seven_segment_code[5];
		break;
	case 6:
		code = seven_segment_code[6];
		break;
	case 7:
		code = seven_segment_code[7];
		break;
	case 8:
		code = seven_segment_code[8];
		break;
	case 9:
		code = seven_segment_code[9];
		break;
	default:
		break;
	}

	return code;
}

typedef enum{wait_for_one, wait_for_zero} counter_state_type;
void counter(
		bool        count_button,
		ap_uint<8> &seven_segments_data,
		ap_uint<4> &seven_segments_enable) {
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE ap_none port=count_button
#pragma HLS INTERFACE ap_none port=seven_segments_data
#pragma HLS INTERFACE ap_none port=seven_segments_enable


	static ap_uint<5>         number = 0;
	static counter_state_type state  = wait_for_one;



	ap_uint<5>         next_number;
	counter_state_type next_state;

	bool out_local;

	switch(state) {

	case wait_for_one:
		if (count_button == 1) {
			if (number+1 == 10) {
				next_number = 0;
			} else {
				next_number = number+1;
			}
			next_state  = wait_for_zero;
		} else {
			next_number = number;
			next_state  = wait_for_one;
		}
		break;
	case wait_for_zero:
		if (count_button == 1) {
			next_number = number;
			next_state  = wait_for_zero;
		} else {
			next_number = number;
			next_state  = wait_for_one;
		}
		break;

	default:
		break;
	}


	number = next_number;
	state  = next_state;

	seven_segments_data = get_seven_segment_code(number);
	seven_segments_enable = 0b1110;

}
