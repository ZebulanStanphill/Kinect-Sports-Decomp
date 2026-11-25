typedef struct Cell_829F9E30 {
    char pad[12];
    unsigned short value;
    unsigned short reserved;
} Cell_829F9E30;

typedef struct Grid_829F9E30 {
    char pad[0x1c3f0];
    Cell_829F9E30 cells[60][80];
} Grid_829F9E30;

int abs(int value);

int fn_829F9E30(const Grid_829F9E30 *grid, int x0, int y0, unsigned int start, int x1, int y1,
                unsigned int end)
{
    int count = 0;
    unsigned int startValue;
    unsigned int endValue;
    int absX;
    int absY;
    int steep;
    int dx;
    int dy;
    int error;
    int step;
    int found;
    int x;
    int y;

    if (x0 < 0 || x0 >= 80 || y0 < 0 || y0 >= 60 || x1 < 0 || x1 >= 80 || y1 < 0 || y1 >= 60) {
        return -1;
    }
    absX = abs(x1 - x0);
    absY = abs(y1 - y0);
    startValue = start;
    endValue = end;
    steep = absY > absX;
    if (steep) {
        int x = x0;
        int otherX = x1;
        x0 = y0;
        x1 = y1;
        y0 = x;
        y1 = otherX;
    }
    if (x0 > x1) {
        int x = x0;
        int y = y0;
        x0 = x1;
        y0 = y1;
        x1 = x;
        y1 = y;
        startValue = end;
        endValue = start;
    }
    dy = abs(y1 - y0);
    dx = x1 - x0;
    error = dx / 2;
    y = y0;
    step = y0 < y1 ? 1 : -1;
    found = 0;
    for (x = x0; x <= x1; ++x) {
        const Cell_829F9E30 *cell = steep ? &grid->cells[x][y] : &grid->cells[y][x];
        error -= dy;
        if (error < 0) {
            y += step;
            error += dx;
        }
        if (cell->value == endValue) {
            if (found) {
                return count;
            }
            break;
        }
        if (cell->value == startValue) {
            found = 1;
            count = 0;
        } else {
            ++count;
        }
    }
    return -1;
}
