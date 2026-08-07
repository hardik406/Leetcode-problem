class Solution {
public:

    void dfs(int row, int col, vector<vector<int>>& image, int initialColor, int newColor) {

        image[row][col] = newColor;

        int n = image.size();
        int m = image[0].size();

        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};

        for (int i = 0; i < 4; i++) {

            int nr = row + dr[i];
            int nc = col + dc[i];

            if (nr >= 0 && nr < n &&
                nc >= 0 && nc < m &&
                image[nr][nc] == initialColor) {

                dfs(nr, nc, image, initialColor, newColor);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int initialColor = image[sr][sc];

        if (initialColor == color)
            return image;

        dfs(sr, sc, image, initialColor, color);

        return image;
    }
};