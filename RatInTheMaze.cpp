#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define N 4  // Define maze size

// Directions: D, L, R, U
int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};
char dir[] = {'D', 'L', 'R', 'U'};

bool isSafe(int x, int y, vector<vector<int>>& maze, vector<vector<bool>>& visited) {
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1 && !visited[x][y]);
}

void solveMaze(vector<vector<int>>& maze, vector<string>& paths,
               vector<vector<bool>>& visited, int x, int y, string path) {
    if (x == N - 1 && y == N - 1) {
        paths.push_back(path);
        return;
    }

    visited[x][y] = true;

    for (int i = 0; i < 4; ++i) {
        int nextX = x + dx[i];
        int nextY = y + dy[i];

        if (isSafe(nextX, nextY, maze, visited)) {
            solveMaze(maze, paths, visited, nextX, nextY, path + dir[i]);
        }
    }

    visited[x][y] = false; // Backtrack
}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> paths;
    vector<vector<bool>> visited(N, vector<bool>(N, false));

    if (maze[0][0] == 1)
        solveMaze(maze, paths, visited, 0, 0, "");

    if (paths.empty())
        cout << "No paths found." << endl;
    else {
        cout << "Possible paths from (0,0) to (" << N-1 << "," << N-1 << "):\n";
        for (const string& path : paths)
            cout << path << endl;
    }

    return 0;
}
