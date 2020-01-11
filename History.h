#ifndef HISTORY
#define HISTORY
#include "globals.h"

class History
{
public:
	History(int nRows, int nCols);
	bool record(int r, int c);
	void display() const;
private:
	int m_Rows;
	int m_Cols;
	int m_grid[MAXROWS][MAXCOLS];
};




#endif
