
#include "Questions.h"

int Q1_for(int num){
	int sum;
	
	// calculate your sum below..this has to use for loop



	// here, we return the calculated sum:
	return sum;
}

int Q1_while(int num){
	int sum;

	// calculate your sum below..this has to use while loop



	
	// here, we return the calculated sum:
	return sum;
}

int Q1_dowhile(int num){
	int sum;
	
	// calculate your sum below..this has to use do-while loop


	  
	
	// here, we return the calculated sum:
	return sum;
}

//===============================================================================================
int Q2_FPN(float Q2_input, float Q2_threshold){
	
	int result;
	// Determine which range does Q2_input fall into.  Keep in mind the floating point number range.
	// Assign the correct output to the result.

	            
	


	// Finally, return the result.
	return result;
}
//===============================================================================================
int Q3(int Q3_input, int perfect[]){
	
	
	
		//counts is the variable that should hold the total number of perfect numbers found in the respective range
		//you should update it within your code and return it at the end
	    int counts=0;


		/*
		*perfect is an array that you need to add into if you find any perfect number
		*which means at the end of this function, the perfect[] array should hold all the found perfect numbers in the range
		*you do not need to return perfect because as stated in lectures arrays are already passed by reference. so, modifying them will 
		*autmoatically reflect in the main calling function.
		*/
	    
		
		
		
		

	   return counts;

}
//===============================================================================================
int Q4_Bubble(int array[], int size){
	
	// This variable tracks the number of passes done on the array to sort the array.
	int passes = 0;

	// Pseudocode
	// 	1. Given an array and its size, visit every single element in the array up to size-2 (i.e. up to the second last element, omit the last element)
	//  2. For every visited element (current element), check its subsequent element (next element).  
	//     If the next element is smaller, swap the current element and the next element. 
	//  3. Continue until reaching size-2 element.  This is considered One Pass, increment pass count by one.
	//  4. Repeat 1-3 until encountering a pass in which no swapping was done.
	//  5. Sorting Completed. Return pass count.






	// Finally, return the number of passes used to complete the Bubble Sort
	return passes;	
}