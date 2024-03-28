/************************************************
Copyright (c) 2021, Mohammad Hosseinabady
	mohammad@highlevel-synthesis.com.
	https://highlevel-synthesis.com/

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
#include "uart_receiver-tb.h"



int main() {
	int status = 0;


	bool uart_rx;
	bool baud_rate_signal;
	ap_uint<8> data;
	bool valid_data;



	uart_rx = 1;
	baud_rate_signal = 1;
	uart_receiver(uart_rx, baud_rate_signal, data, valid_data);
	std::cout << " data = " << data << " valid_data = " << valid_data << std::endl;

	uart_rx = 1;
	baud_rate_signal = 1;
	uart_receiver(uart_rx, baud_rate_signal, data, valid_data);
	std::cout << " data = " << data << " valid_data = " << valid_data << std::endl;


	uart_rx = 0;
	baud_rate_signal = 1;
	uart_receiver(uart_rx, baud_rate_signal, data, valid_data);
	std::cout << " data = " << data << " valid_data = " << valid_data << std::endl;

	uart_rx = 1;
	baud_rate_signal = 1;
	uart_receiver(uart_rx, baud_rate_signal, data, valid_data);
	std::cout << " data = " << data << " valid_data = " << valid_data << std::endl;

	uart_rx = 0;
	baud_rate_signal = 1;
	uart_receiver(uart_rx, baud_rate_signal, data, valid_data);
	std::cout << " data = " << data << " valid_data = " << valid_data << std::endl;

	uart_rx = 0;
	baud_rate_signal = 1;
	uart_receiver(uart_rx, baud_rate_signal, data, valid_data);
	std::cout << " data = " << data << " valid_data = " << valid_data << std::endl;

	uart_rx = 0;
	baud_rate_signal = 1;
	uart_receiver(uart_rx, baud_rate_signal, data, valid_data);
	std::cout << " data = " << data << " valid_data = " << valid_data << std::endl;

	uart_rx = 0;
	baud_rate_signal = 1;
	uart_receiver(uart_rx, baud_rate_signal, data, valid_data);
	std::cout << " data = " << data << " valid_data = " << valid_data << std::endl;

	uart_rx = 0;
	baud_rate_signal = 1;
	uart_receiver(uart_rx, baud_rate_signal, data, valid_data);
	std::cout << " data = " << data << " valid_data = " << valid_data << std::endl;

	uart_rx = 1;
	baud_rate_signal = 1;
	uart_receiver(uart_rx, baud_rate_signal, data, valid_data);
	std::cout << " data = " << data << " valid_data = " << valid_data << std::endl;

	uart_rx = 0;
	baud_rate_signal = 1;
	uart_receiver(uart_rx, baud_rate_signal, data, valid_data);
	std::cout << " data = " << data << " valid_data = " << valid_data << std::endl;

	uart_rx = 1;
	baud_rate_signal = 1;
	uart_receiver(uart_rx, baud_rate_signal, data, valid_data);
	std::cout << " data = " << data << " valid_data = " << valid_data << std::endl;


	uart_rx = 1;
	baud_rate_signal = 1;
	uart_receiver(uart_rx, baud_rate_signal, data, valid_data);
	std::cout << " data = " << data << " valid_data = " << valid_data << std::endl;


	uart_rx = 1;
	baud_rate_signal = 1;
	uart_receiver(uart_rx, baud_rate_signal, data, valid_data);
	std::cout << " data = " << data << " valid_data = " << valid_data << std::endl;



	return status;
}