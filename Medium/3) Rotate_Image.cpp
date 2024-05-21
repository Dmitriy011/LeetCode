# include "vector"

void transpose(std::vector<std::vector<int>>& matrix)
{
    for (int i = 0; i < matrix.size(); ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void my_rotate(std::vector<std::vector<int>>& matrix)
{
    transpose(matrix);

    for (int i = 0; i < matrix.size(); ++i)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    std::vector<std::vector<int>> matrix =
    {
        { 5, 1, 9, 11 },
        { 2, 4, 8, 10 },
        { 13, 3, 6, 7 },
        { 15, 14, 12, 16 }
    };

    my_rotate(matrix);
}