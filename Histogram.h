// ----------------- Histogram.h ---------------
#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include "Log.h"
#include <memory>
#include <map>
#include <cstdlib>
#include "HistogramBase.h"

namespace Hist
{
  // This is a subclass for the HistogramBase-class. 
  class Histogram: public HistogramBase {
	
  	public: 
	
	  // This function is derived from the HistogramBase-class and it adds EInterger-value to the data set.
	  void add(EInteger) = 0;

      // This function is derived from he HistogramBase-class and it returns the value that occurs most often in the data set.
	  // It returns the first value that is the most frequent. For example if there are 2x1 and 2x2, it returns 1.
      EInteger getMode() const = 0;

      // This function is derived from he HistogramBase-class and it returns the smallest value from the data set.
      EInteger getMinValue() const = 0;

      // This function is derived from he HistogramBase-class and it returns the largest value from the data set.
      EInteger getMaxValue() const = 0;
	  
	private:
	  // I used map to create the data set as it is very fast when searching for elements.
      std::map<std::size_t, EInteger> dataset;
    };
}
#endif
