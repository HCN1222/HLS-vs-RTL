/************************************************
Copyright (c) 2020, Mohammad Hosseinabady
All rights reserved.
Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.
3. Neither the name of the copyright holder nor the names of its contributors
may be used to endorse or promote products derived from this software
without specific prior written permission.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS
OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. // Copyright (c) 2020, Mohammad Hosseinabady.
************************************************/
#include "binary2gray.h"



ap_uint<4> binary2gray(ap_uint<4> a) {
#pragma HLS INTERFACE ap_none port=a
#pragma HLS INTERFACE ap_ctrl_none port=return

	ap_uint<4> g;



	switch (a) {
	case 0:
		g = gray_code[0];
		break;
	case 1:
		g = gray_code[1];
		break;
	case 2:
		g = gray_code[2];
		break;
	case 3:
		g = gray_code[3];
		break;
	case 4:
		g = gray_code[4];
		break;
	case 5:
		g = gray_code[5];
		break;
	case 6:
		g = gray_code[6];
		break;
	case 7:
		g = gray_code[7];
		break;
	case 8:
		g = gray_code[8];
		break;
	case 9:
		g = gray_code[9];
		break;
	case 10:
		g = gray_code[10];
		break;
	case 11:
		g = gray_code[11];
		break;
	case 12:
		g = gray_code[12];
		break;
	case 13:
		g = gray_code[13];
		break;
	case 14:
		g = gray_code[14];
		break;
	case 15:
		g = gray_code[15];
		break;
	}


	return g;
}

//ap_uint<4> binary2gray(ap_uint<4> a) {
//#pragma HLS INTERFACE ap_none port=a
//#pragma HLS INTERFACE ap_ctrl_none port=return
//
//	ap_uint<4> g;
//
//	g = gray_code[a];
//
//
//	return g;
//}
