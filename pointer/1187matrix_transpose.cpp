#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9},
            {10, 11, 12}
    };

    int rows = matrix.size();
    int cols = matrix[0].size();

    // 创建一个新的矩阵来存储转置结果
    std::vector<std::vector<int>> transpose(cols, std::vector<int>(rows));

    // 转置矩阵
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // 打印转置矩阵
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            std::cout << transpose[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
