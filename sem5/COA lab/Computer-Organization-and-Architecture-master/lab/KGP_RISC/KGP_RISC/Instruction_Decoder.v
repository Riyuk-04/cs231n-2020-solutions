`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:15:05 11/07/2021 
// Design Name: 
// Module Name:    Instruction_Decoder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Instruction_Decoder(instr, opCode, functCode, reg_1, reg_2, imm, label);
input [31:0]instr;
output reg [2:0]opCode;
output reg [3:0]functCode;
output reg [4:0]reg_1;
output reg [4:0]reg_2;
output reg [14:0]imm;
output reg [14:0]label;

	always @(instr)
	begin
	opCode <= instr[31:29];
	functCode <= instr[3:0];
	case(opCode)
	3'b000:begin
			reg_1 = instr[28:24];
			reg_2 = instr[23:19];
			end
	3'b001:begin
			reg_1 = instr[28:24];
			imm = instr[23:9];
			end
	3'b010:begin
			reg_1 = instr[28:24];
			reg_2 = instr[23:19];
			imm = instr[18:4];
			end
	3'b011:begin
			imm = instr[28:14];
	end
	3'b100:begin
			reg_1 = instr[28:24];
			end
	default:begin
				reg_1 = 5'd0;
				reg_2 = 5'd0;
				imm = 15'd0;
				label = 15'd0;
				end
	endcase
	end
endmodule
