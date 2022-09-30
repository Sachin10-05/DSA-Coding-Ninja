/*
problem:
*********
You have been given two stacks that can store integers as the data. Out of the two given stacks, one is populated and the other one is empty.
You are required to write a function that reverses the populated stack using the one which is empty.

Sample Input 1:
6
1 2 3 4 5 10
Note: Here, 10 is at the top of the stack.

Sample Output 1:
1 2 3 4 5 10
Note: Here, 1 is at the top of the stack.
*/






***************************************************************************************************************************************************************************

//solution:
***********

#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<int> &s1, stack<int> &s2)
{
  while(!s1.empty())
	{
	  s2.push(s1.top());
		s1.pop();
	} 
  s1 = s2;
}


int main() 
{
   stack<int> input, extra;
   int size;
   cin >> size;

   for (int i = 0, val; i < size; i++) 
   {
      cin >> val;
      input.push(val);
   }

   reverseStack(input, extra);

   while (!input.empty()) 
   {
      cout << input.top() << " ";
      input.pop();
   }
}






***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************












