#include <iostream>
#include <fstream>

using namespace std;

void swap(int M[6][6], int f, int s)
{
	int temp;
	for (int i = 0; i < 6; i++)//for column
	{
		temp = M[i][f];
		M[i][f] = M[i][s];
		M[i][s] = temp;
	}

	int temp1;
	for (int i = 0; i < 6; i++)//for row
	{
		temp1 = M[f][i];
		M[f][i] = M[s][i];
		M[s][i] = temp1;
	}
}

void print(int A[][6]) 
{
	for (int i = 0; i < 6; i++)
	{
		cout << "\n";
		for (int j = 0; j < 6; j++)
		{
			cout << A[i][j] << "  ";
		}
	}
}

int check(int a[][6], int b[][6])
{
	int i, j;
	for (i = 0; i < 6; i++)
		for (j = 0; j < 6; j++)
			if (a[i][j] != b[i][j])
				return 0;	
	return 1;
}

void readfile(int B[6][6])
{
	ifstream f("MM.txt");

	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			f >> B[i][j];
}

int main()
{
	int A[6][6] = { 
		            { 0, 1, 0, 1, 0, 0 },
	                { 1, 0, 1, 0, 0, 1 },
	                { 0, 1, 0, 1, 0, 0 },
	                { 1, 0, 1, 0, 1, 0 },
	                { 0, 0, 0, 1, 0, 1 },
	                { 0, 1, 0, 0, 1, 0 }
	              };

	int B[6][6] = {};
	
	int flag = 0, count = 0;

	readfile(B);

	cout << "The static matrix:\n"; print(A); cout << "\n\n";

	cout << "\nThe other matrix:\n"; print(B); cout << "\n\n";

	     for (int i = 0; i < 6; i++)
	     {
		     readfile(B);
			 swap(B, 0, i);
			 if (check(A, B) == 1)
			 {
				flag = 1;
				return 0;
			 }
     	 }

         for (int i = 0; i < 5; i++)
	     {
			  readfile(B);
			  swap(B, 1, i);
			  if (check(A, B) == 1)
			  {
				  flag = 1;
				  return 0;
			  }
	     }
	  
		 for (int i = 0; i < 4; i++)
		 {
			  readfile(B);
			  swap(B, 2, i);
			  if (check(A, B) == 1)
			  {
				  flag = 1;
				  return 0;
			  }
		 }
	  
	     for (int i = 0; i < 3; i++)
		 {
			  readfile(B);
			  swap(B, 3, i);
			  if (check(A, B) == 1)
			  {
				  flag = 1;
				  return 0;
			  }
	     }

		 for (int i = 0; i < 2; i++)
	     {
			  readfile(B);
			  swap(B, 4, i);
			  if (check(A, B) == 1)
			  {
				  flag = 1;
				  return 0;
			  }
		 }
	  
		 for (int i = 0; i < 1; i++)
		 {
			  readfile(B);
			  swap(B, 5, i);
			  if (check(A, B) == 1)
			  {
				  flag = 1;
				  return 0;
			  }
		 }


	if (flag==1)
		 cout << "\nThese matrices is the sames.\n" << check(A, B) << endl;
	else
	{
		 cout << "\nThese matrices is  the same.\n" << endl;
	}
	cout << "---------------------------------------------------";

	cout << "\nThe final matrix:\n";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	print(B);	
}
























	