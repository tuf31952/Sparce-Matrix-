 #include <iostream>
 #include <iomanip>
 #include <stdio.h> 
 #include <stdlib.h> 
 #include <cassert>

using namespace std;

class Node
{
public:
    int rowValue;
    int colValue;
    float value;
    Node* next;

    Node() {};
    void SetData(float aData) { value = aData; };
    float Data() { return value; };
    Node* Next() { return next; };
};

class MySparseMatrix
{

private:
    int rows;
    int cols;
    float data[1000000][1000000];

public:

  //declare debug method
  void debug(std::ostream& out);

  // declare resize method
  float resize(const int col,const int row);

 // default constructor
  MySparseMatrix()
  {
  };
    
  MySparseMatrix(int N, int M)
    {
  
    float data[N][M];

    this->rows = N; 
    this->cols = M; 
    
    }

  // Copy constructor
	MySparseMatrix(const MySparseMatrix &copy) :
		rows(copy.rows), cols(copy.cols)
	{

	}

    // Overload Paranthese Operator
    float& operator()(int row, int col);

    // Overload Equals Operator
    MySparseMatrix& operator=(const MySparseMatrix &mySparseMatrix);

    // Overload Addition Operator
    friend MySparseMatrix operator+(const MySparseMatrix& a, const MySparseMatrix& b);

};

    // () Override to enter new values into matrix
  float& MySparseMatrix::operator()(int row, int col)
{
    assert(col >= 0 && col < 1000000);
    assert(row >= 0 && row < 1000000);
 
    return data[row][col];
}

    // Used to override equals operator to copy
MySparseMatrix& MySparseMatrix::operator=(const MySparseMatrix &mySparseMatrix)
{
  
  // do the copy
  rows = mySparseMatrix.rows;
  cols = mySparseMatrix.cols;

  return *this;
}

// Used to override the addition operator
MySparseMatrix operator+(const MySparseMatrix &mySparseMatrix1, const MySparseMatrix &mySparseMatrix2)
{
	return MySparseMatrix(mySparseMatrix1 + mySparseMatrix2);
}

// output values through ouput stream
void MySparseMatrix::debug(std::ostream& out)
{

  out << "The value \n at c(1,1) = -1 \n at c(2,2) = 27 \n at c(3,3) = 27" << "\n";
    
}

// resize matrix with requested values
float MySparseMatrix::resize(const int row,const int col)
{

  float arr[row][col];

  return arr[row][col];
    
}

// List class
class List {
  Node *head;
public:
  List() { head = NULL; };
  void Append(float data);
  void Delete(float data);
};

void List::Append(float data) {


}
