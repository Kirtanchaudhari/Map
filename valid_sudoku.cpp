

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        return validate(board);
    }

private:
    bool validate(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    char c = board[i][j];
                    board[i][j] = '.';
                    if (!isValid(board, i, j, c))
                        return false;
                    board[i][j] = c;
                }
            }
        }
        return true;
    }

    bool isValid(vector<vector<char>> &board, int row, int col, char c)
    {
        for (int i = 0; i < 9; i++)
        {
            if (board[i][col] == c)
                return false;
            if (board[row][i] == c)
                return false;
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
                return false;
        }
        return true;
    }
};