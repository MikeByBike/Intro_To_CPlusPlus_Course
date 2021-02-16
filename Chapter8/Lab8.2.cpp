/*
File: Lab8.2.cpp
Author: Michalis Iona
Description: Manipulating matrices.
*/

#include <iostream>
#include <fstream>
using namespace std;

void print_matrix(int matrix[5][5]);
int calculate_sum(int matrix[5][5]);

int main(void)
{
  int matrix[5][5];
  int sum;
  ifstream file("matrix.txt");
  if (!file){
        cout << "File cannot be opened!";
  }
  else {
    for (int y=0; y<5;y++) {
          for (int x=0;x<5;x++){
            file >> matrix[y][x];
          }
    }
    file.close();
    cout << "Matrix:" << endl;
    print_matrix(matrix);
    sum = count_sum(matrix);
    cout << "Sum of elements: " << sum << endl;
  }
} 

void print_matrix(int matrix[5][5]) {
	
	for(int x=0;x<5;x++) {
        for(int y=0;y<5;y++) {
            cout << matrix[x][y] << " ";  
        }
    cout<<endl; 
    }
	return;
}

int count_sum(int matrix[5][5]) {
	int y;
	int x;
	int sum_elements = 0;
	
	for(y = 0; y < 5; y++) {
		for(x = 0; x < 5; x++) {
			sum_elements += matrix[y][x];	
		}
	}
	return sum_elements;
	cout << "Sum of elements: " << sum_elements;
	
}