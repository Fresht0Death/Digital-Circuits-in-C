/*
 * 4_to_1_MUX.c
 *
 *  Created on: Sep 19, 2025
 *      Author: Freshmai
 */



#include <stdio.h>
#include <stdbool.h>


bool mux2to1(bool d0, bool d1, bool s1){

	bool s1Inverted = false;
	bool output = false;

	if(s1 != true)
		s1Inverted = true;

	return output = (d0 & s1) | (d1 & s1Inverted);
}

bool mux4to1(bool d0, bool d1, bool d2, bool d3, bool s0, bool s1){


	bool s0Inverted = false;
	bool s1Inverted = false;
	bool output = false;


	if(s0 != true)
		s0Inverted = true;
	if(s1 != true)
		s1Inverted = true;


	output = (s0Inverted & s1Inverted & d0) | (s0 & s1Inverted & d1) | (s0Inverted & s1 & d2) | (s0 & s1 & d3);

	return output;

}

int main(void){



	bool d0 = false, d1 = true, d2 = true, d3 = true;

	bool s0 = false, s1 = false;

	bool output = mux2to1(d0, d1, s0);

	printf("output of 2 to 1 mux: %d", output);


	output = mux4to1(d0, d1, d2, d3, s0, s1);


	printf("\noutput of 4:1 mux: %d", output);






	return 0;
}
