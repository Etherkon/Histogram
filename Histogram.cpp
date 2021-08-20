#include "Histogram.h"

// This function adds a new value to the data set.
void Histogram::add(EInteger value){
	
	// Map-element uses an insert-functin for the adding.
	dataset.insert({dataset.size(), value});
}

// This function finds the element that occurs the most in the data set.
EInteger Histogram::getMode() {
	
	// max = the frequency of the current most common element.
	// mostvalue = the current most common value;
	int max = 0, mostvalue dataset[0];
	
	// We go through the data set's every element and counting how many times it is found.
	for(std::size_t i = 0; i < dataset.size(); ++i){
		int co = (int) count(dataset.begin(), dataset.end(), dataset[i]);
		
		// We keep track of the most common element.
		if(co > max) {
			max = co;
			mostvalue = dataset[i];
		}
	}
	
	return mostvalue;
}

// This function finds the element with the smallest value.
EInteger Histogram::getMinValue() {
	
	// Uses the min_element-function to find the smallest element in the data set's range.
	std::map<std::size_t, EInteger>::iterator max = std::min_element(
	    dataset.begin(), dataset.end(),
		[] (const std::map<std::size_t, EInteger>& a, const std::map<std::size_t, EInteger>& b)
		->bool { return a.second > b.second; } 
		);
    return min->second;
}

// This function finds the element with the largest value.
EInteger Histogram::getMaxValue() {
	
	// Uses the max_element-function to find the larges element in the data set's range.
	std::map<std::size_t, EInteger>::iterator max = std::max_element(
	    dataset.begin(), dataset.end(),
		[] (const std::map<std::size_t, EInteger>& a, const std::map<std::size_t, EInteger>& b)
		->bool { return a.second < b.second; } 
		);
    return max->second;
}