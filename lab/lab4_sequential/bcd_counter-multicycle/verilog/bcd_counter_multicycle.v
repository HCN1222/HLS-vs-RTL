`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 08/21/2023 11:47:04 AM
// Design Name:
// Module Name: bcd_counter_multicycle
// Project Name:
// Target Devices:
// Tool Versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////


module bcd_counter_multicycle(clk,
                              rst_n,
                              pulse,
                              seven_segment_data,
                              seven_segment_enable);
    input clk;
    input rst_n;
    input pulse;
    output reg [7:0] seven_segment_data;
    output reg [3:0] seven_segment_enable;
    
    reg counter_enabler;
    reg [3:0] bcd_counter;
    reg [3:0] bcd_counter_next;
    
    
    //combinational logic
    always@(*)
    begin
        //counter enabler
        counter_enabler = clk & pulse;
        //sevensegment enabler
        seven_segment_enable = 4'b1110;
        //bcd to sevensegment decoder
        case(bcd_counter)
            4'd0: seven_segment_data = 8'b11000000;
            4'd1: seven_segment_data = 8'b11111001;
            4'd2: seven_segment_data = 8'b10100100;
            4'd3: seven_segment_data = 8'b10110000;
            4'd4: seven_segment_data = 8'b10011001;
            4'd5: seven_segment_data = 8'b10010010;
            4'd6: seven_segment_data = 8'b10000010;
            4'd7: seven_segment_data = 8'b11111000;
            4'd8: seven_segment_data = 8'b10000000;
            4'd9: seven_segment_data = 8'b10010000;
            //This shold not happen
            default: seven_segment_data = 8'b11111111;
        endcase

        //counter
        if(bcd_counter == 4'd9)
            bcd_counter_next = 4'd0;
        else
            bcd_counter_next = bcd_counter + 4'd1;
    end

    //sequential logic
    always@(posedge counter_enabler or negedge rst_n)
    begin
        if(!rst_n)
            bcd_counter <= 4'd0;
        else
            bcd_counter <= bcd_counter_next;
    end
    
endmodule
