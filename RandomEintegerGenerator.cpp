#include "RandomEintegerGenerator.h"

// This function returns a random EInteger-value;
EInteger RandomEintegerGenerator::operator()(){
	
	// We use rand-function to first give us a random number. Using it we can return a correct EInteger-value.
	int random_value = rand() % 5;
	
	switch(random_value) {
		case 0;
		  return Zero;
		case 1;
		  return One;
		case 2;
		  return Two;
		case 3;
		  return Three;
		case 4;
		  return Four;
	
	return Zero;
}