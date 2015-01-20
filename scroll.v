// scroll.v
//Lab 2 Part 4.1: Creating a Qsys component to scroll

//Chris Bird, Lillie Deas, Kaila Balancio

module scroll (clock, resetn, speed, speedup, speeddown, Q)
input clock;
input resetn;
input speed;
input speedup;
input speeddown;
output Q;


always @ (posedge clock or posedge resetn)
begin
	if(resetn)
		Q[31:0] = 32'b0000_0000_0000_0000_0000_0000_0000_0000; 

	else 
		begin
			if(speedup)
				speed = speed + 10;
				
			if(speeddown)
				speed = speed - 10;

		end
end
endmodule
