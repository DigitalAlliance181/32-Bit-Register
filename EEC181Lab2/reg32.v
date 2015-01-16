//reg32.v
//Chris Bird, Lillie Deas, Kaila Balancio

module RegisterCB (clock, reset, byteenable, D, Q);
input clock;
input reset;
input [1:0] byteenable;
input [31:0] D; //Input data to register
output reg [31:0] Q; //Output data from register

//reg [31:0] memArray; //Actual register

	always @(posedge clock or posedge reset)
	begin
	    if(reset) 
	        Q[31:0] = 32'b0000_0000_0000_0000_0000_0000_0000_0000; 
	    begin
		    if(byteenable[1:0] == 2'b00)
		    	Q[7:0] <= D[7:0];

		    if (byteenable[1:0] == 2'b01)
		    	Q[15:8] <= D[15:8];

		    if (byteenable[1:0] == 2'b10)
		    	Q[23:16] <= D[23:16];

		    if (byteenable[1:0] == 2'b11)
		    	Q[31:24] <= D[31:24];
	    end       
	end

endmodule