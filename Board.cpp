#include "Board.h"
#include <string>

using namespace std;

void Board::createBoard(std::istream& in)
{
	string line;
	while (getline(in, line))
	{
		std::vector<std::shared_ptr<Cell>> row;
		for (auto c : line)
		{
			shared_ptr<Cell> cell;
			if (c == WATER)
			{
				cell = make_shared<Water>(WATER);
			}
			else if (c == SHIP)
			{
				cell = make_shared<Ship>(SHIP);
			}
			row.push_back(cell);
		}
		cells.push_back(row);
	}
}

bool Board::isBoardCorrect() const
{
	return true;
}

void Board::createShips()
{
}
