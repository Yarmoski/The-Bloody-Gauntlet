#include "History.h"
#include "globals.h"
#include <iostream>
using namespace std;


History::History(int nRows, int nCols)
{
	m_Rows = nRows;
	m_Cols = nCols;
	for (int r = 1; r <= nRows; r++)
		for (int c = 1; c <= nCols; c++)
			m_grid[r - 1][c - 1] = 0;
}

bool History::record(int r, int c)
{
	if (r > m_Rows || r < 1 || c > m_Cols || c < 1)
	{
		return false;
	}

	m_grid[r - 1][c - 1] += 1;

	return true;

}

void History::display() const
{
	clearScreen();
	char displayGrid[MAXROWS][MAXCOLS];
	int r, c;


	for (r = 1; r <= m_Rows; r++)
		for (c = 1; c <= m_Cols; c++)
		{
			if (m_grid[r - 1][c - 1] >= 26)
			{
				displayGrid[r - 1][c - 1] = 'Z';
			}
			else
			{
				displayGrid[r - 1][c - 1] = (m_grid[r - 1][c - 1] == 0 ? '.' : "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[m_grid[r - 1][c - 1] - 1]);
			}
			
		}
			

	for (r = 1; r <= m_Rows; r++)
	{
		for (c = 1; c <= m_Cols; c++)
			cout << displayGrid[r - 1][c - 1];
		cout << endl;
	}
	cout << endl;

	
}