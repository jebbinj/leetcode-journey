class Solution
{
public:
    bool isValidSudoku(std::vector<std::vector<char>> &board)
    {
        std::bitset<9> row_flags[9], col_flags[9], section_flags[9];

        for (int i = 0; i < 9; ++i)
        {
            for (int j = 0; j < 9; ++j)
            {
                if (board[i][j] != '.')
                {
                    int curr = board[i][j] - '1';

                    if (row_flags[i][curr] || col_flags[j][curr] ||
                        section_flags[(i / 3) * 3 + (j / 3)][curr])
                    {
                        return false;
                    }

                    row_flags[i][curr] = 1;
                    col_flags[j][curr] = 1;
                    section_flags[(i / 3) * 3 + (j / 3)][curr] = 1;
                }
            }
        }

        return true;
    }
};