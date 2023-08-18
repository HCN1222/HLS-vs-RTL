`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: NTHU
// Engineer: HUANG, CHENG-NING
//
// Create Date: 08/18/2023 05:57:12 AM
// Design Name:
// Module Name: single_cycle_regular_pulses
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


module single_cycle_regular_pulses(clk,
                                   rst_n,
                                   cnt,
                                   periodic_pulses);
    input clk;
    input rst_n;
    output reg[4:0] cnt;
    output reg periodic_pulses;
    
    reg [4:0] cnt_next;
    
    //combinational logic
    always@(*)
    begin
        if (cnt == 5'd19)
        begin
            cnt_next        = 5'd0;
            periodic_pulses = 1;
        end
        else
        begin
            cnt_next        = cnt + 1;
            periodic_pulses = 0;
        end
    end
    
    //sequential logic
    always@(posedge clk or negedge rst_n)
    begin
        if (!rst_n)
        begin
            cnt <= 0;
        end
        else
            cnt <= cnt_next;
    end
endmodule
