#include "parity_generator.h"



bool parity_generator(ap_uint<W> a) {
#pragma HLS INTERFACE mode=s_axilite port=a
#pragma HLS INTERFACE mode=s_axilite port=return



	bool parity = 0;


	for (int i = 0; i < W; i++) {
#pragma HLS UNROLL
		parity = parity ^ a[i];
	}



	return parity;
}
