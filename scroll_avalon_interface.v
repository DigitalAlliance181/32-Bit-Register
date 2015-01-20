// scroll_avalon_interface.v

//Chris Bird, Lillie Deas, Kaila Balancio
//EEC 181 Lab 2

module scroll_avalon_interface(clock, resetn, write, writedata, read, readdata, speed, speedup, speeddown, chipselect, Q);
	
	//Standard clock and reset signals
	input clock, resetn;

	//Avalon MMI signals - These will automatically be detected and organized by Qsys
	input read, write, chipselect;
	input [31:0] writedata;
	output [31:0] readdata;

	//Signal for exporting register contents to the outside of the embedded system
	output [31:0] Q;

	//Internal signals used in this module only
	wire [31:0] to_reg, from_reg;
	wire speed, speedup, speeddown;

	assign to_reg = writedata;
	assign readdata = from_reg;
	assign //how to assign the speed, speedup and speeddown??
	assign Q = from_reg;

	scroll U1 (.clock(clock), .resetn(resetn), .speed(to_reg), .speedup(to_reg),.speeddown(to_reg), .Q(from_reg));

endmodule
