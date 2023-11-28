//#include <iostream>
//using namespace std;
//int main()
 //{  

                        // TASK 1
/*	int num,i;
	cout<<"enter number";
	cin>>num;
	for(int i=1;i<=num;i++)

	{
		if(num%i==0){
			cout<<i<<" ";
			
		}
	}
	cout<<"factors of "<<num<<" are ";
	*/
	
	
	
	              //TASK 2
	
/*	int x = 5;
 int y = 10;
 if (x == 5)
 if (y == 10)
 std::cout << "x is 5 and y is 10" << std::endl;
 else
 std::cout << "x is not 5" << std::endl;
 */
 
 
 
                      // TASK 3
                      
  /* int Num = 0;
bool result = 0;

cout << "Please Enter Number";

cin >> Num;

	if (Num > 10 )
{
	(result = true);
	cout << result;
}
	if (Num <= 20)
{
	 (result = false);
	  cout << result;	
}*/




                  // TASK 4
  /*               
{


int prime_number=23;
for(int k=2;k<50;k++)
{
	for(int i=k;i<prime_number%i == 0;i++){
		cout<<"i="<<i<<endl;
			cout<<"not a prime number"<<endl;
			*/
			
			
			
			       // TASK 5 
			       
/*			
	int i = 0;
	int j = 0;
	int k = 0;
	
	char String1[10];
	char String2[10]; 
	
	cout << "Please Enter String 1: ";
	cin.getline (String1,20);
	
	cout << "Please Enter String 2: ";
	cin.getline (String2,20);
	
	while (String1[i] == String2[j])
	{
		cout << "Both Strings are Equal" << endl;
		cout << "inverse of String is:" << endl;
		for (k=11; k >= 0;k--)
		{
		  cout << String1[k];		
	    }  
	    
	    return 0;
	}
	
	while (String1[i] != String2[j])
	{
		cout << "Both Strings are not Equal" << endl;
		
	    return 0;
	}
	*/
	
	
	                             // TASK 6
	  /*
	        int dividend = 36;
    int divisor = 6;
    int quotient = 0;

    for (; dividend >= divisor; dividend -= divisor) {
        quotient++;
    }

    std::cout << "Quotient: " << quotient << std::endl;
    */
    
    
    
    
                       // TASK 7
    
  /*  #include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Creating a frequency array to keep track of characters
    int frequency[256] = {0};

    // Removing duplicates and updating frequency array
    string result = "";
    for (char ch : input) {
        if (frequency[ch] == 0) {
            result += ch;
            frequency[ch] = 1;
        }
    }

    cout << "Resultant string after removing duplicates: " << result << endl;
*/


                                                 // TASK 8



/*
    const int originalSize = 5;
    int a[originalSize] = {1, 2, 3, 4, 5};
    
    // Printing Original Array
    cout << "Original Array:"<< endl;
    for (int i = 0; i < originalSize; i++)
    {
    	cout << a[i];
	}

    // Adding more elements to the array
    const int newSize = 8;
    int additionalElements[newSize - originalSize] = {6, 7, 8};
    
    // Copying the original array elements to a new array
    int newArray[newSize];
    for (int i = 0; i < originalSize; ++i) {
        newArray[i] = a[i];
    }
    
    cout << endl;

    // Adding additional elements to the new array
    cout << "Additional Elements are: " << endl;
    for (int i = originalSize; i < newSize; ++i) {
        newArray[i] = additionalElements[i - originalSize];
        cout << newArray[i];
        
        
        */
        
        
        
        
        
    // TASK 9
    
    /*
    
     {
    int arr[10] = {1, 4, 45, 6, 10, 8,3,23,65,2};
    int x,size=10;
    cout<<"write the integer you want to find."<<endl;
    cin >>x;

    bool tripletFound = false;

    for (int i = 0; i < size - 2; ++i) {
        for (int j = i + 1; j < size - 1; ++j) {
            for (int k = j + 1; k < size; ++k) {
                if (arr[i] + arr[j] + arr[k] == x) {
                    // Triplet found
                    cout << "Triplet found: " << arr[i] << ", " << arr[j] << ", " << arr[k] << std::endl;
                    tripletFound = true;
                    break; // Break out of the innermost loop once a triplet is found
                }
            }
            if (tripletFound) break; // Break out of the middle loop if a triplet is found
        }
        if (tripletFound) break; // Break out of the outer loop if a triplet is found
    }

    if (!tripletFound) {
        cout << "No triplet found." << std::endl;
    }
*/



//                                                 TASK 10
/*
#include<iostream>
using namespace std;
void bubblesort(int array[], int);
int main() {
	int array1[10];
	cout << "Write array of ten elements" << endl;
	//loop to input element of array from user
	for (int i = 0; i < 10; i++) {
		cout << "Write the " << i + 1 << " element of the array" << endl;
		cin >> array1[i];
	}
	//calling the sorting function
	bubblesort(array1,10);
	cout << "sorted array is :";
	for (int i = 0; i < 10; i++) {
		cout << array1[i]<<", ";
	}
	return 0;
}
void bubblesort(int array_1[], int size) {
	int i, j,temp;
	//loop to check all conditions of array
	for (j = 1; j < size;j++) {
		//loop to go through all elements of array
		for (i = 0; i < size-1; i++) {
			//condition to swap the elements of array
			if (array_1[i] > array_1[i + 1]) {
				temp = array_1[i];
				array_1[i] = array_1[i + 1];
				array_1[i + 1] = temp;
			}
		}
	} }
	*/
	
	

    return 0;
}
	
	
	
	
	

	
		
	
	
	
	
