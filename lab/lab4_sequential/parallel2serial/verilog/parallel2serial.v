`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 08/22/2023 11:27:41 PM
// Design Name:
// Module Name: parallel2serial
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


module parallel2serial(clk, rst_n, parallel_in,serial_start, serial_out, serial_end );

    input clk;
    input rst_n;
    input [7:0] parallel_in;
    output reg serial_start;
    output reg serial_out;
    output reg serial_end;

    reg [2:0] cnt;
    reg [2:0] cnt_next;

    //combinational logic
    always @(*)
    begin
        case(cnt)
            3'd0:
            begin
                serial_start = 1'b1;
                serial_out   = parallel_in[0];
                serial_end   = 1'b0;
            end
            3'd1:
            begin
                serial_start = 1'b0;
                serial_out   = parallel_in[1];
                serial_end   = 1'b0;
            end
            3'd2:
            begin
                serial_start = 1'b0;
                serial_out   = parallel_in[2];
                serial_end   = 1'b0;
            end
            3'd3:
            begin
                serial_start = 1'b0;
                serial_out   = parallel_in[3];
                serial_end   = 1'b0;
            end
            3'd4:
            begin
                serial_start = 1'b0;
                serial_out   = parallel_in[4];
                serial_end   = 1'b0;
            end
            3'd5:
            begin
                serial_start = 1'b0;
                serial_out   = parallel_in[5];
                serial_end   = 1'b0;
            end
            3'd6:
            begin
                serial_start = 1'b0;
                serial_out   = parallel_in[6];
                serial_end   = 1'b0;
            end
            3'd7:
            begin
                serial_start = 1'b0;
                serial_out   = parallel_in[7];
                serial_end   = 1'b1;
            end
            //this should not happen
            default:
            begin
                serial_start = 1'b1;
                serial_out   = 1'b1;
                serial_end   = 1'b1;
            end
        endcase
        cnt_next = cnt + 1'b1;
    end

    //sequential logic
    always @(posedge clk or negedge rst_n)
    begin
        if (!rst_n)
            cnt <= 3'd0;
        else
            cnt <= cnt_next;
    end
endmodule
