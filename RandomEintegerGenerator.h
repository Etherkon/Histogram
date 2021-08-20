// ----------------- RandomEintegerGenerator.h ---------------
#ifndef RANDOMEINTEGERGENERATOR_H
#define RANDOMEINTEGERGENERATOR_H

#include <stdlib.h>
#include "HistogramBase.h"

namespace Hist
{
  // This is a subclass for the RandomEintegerGeneratorBase-class. 
  class RandomEintegerGenerator: public RandomEintegerGeneratorBase {
	
  	public: 	
	  // This function is derived from the RandomEintegerGeneratorBase-class and it gives a random EInteger-value.
	  EInteger operator()() = 0;
  };
}
#endif