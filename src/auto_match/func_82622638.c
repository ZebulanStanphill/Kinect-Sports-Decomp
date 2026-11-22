typedef struct Tile_82622638 {
    unsigned int nearest;     /* 0x00 */
    unsigned int farthest;    /* 0x04 */
    unsigned int cells[8][8]; /* 0x08 */
} Tile_82622638;

typedef struct Grid_82622638 {
    char pad[0xd0];
    Tile_82622638 *tiles; /* 0xd0 */
} Grid_82622638;

static __forceinline int Clamp(int value, int low, int high)
{
    value = value < low ? low : value;
    return value < high ? value : high;
}

int fn_82622638(Grid_82622638 *grid, float *lo, float *hi)
{
    union {
        float f;
        unsigned int u;
    } depth;

    int x0;
    int y0;
    int x1;
    int y1;
    int tileX0;
    int tileY0;
    int tileX1;
    int tileY1;
    int tileX;
    int tileY;
    int cellX0;
    int cellY0;
    int cellX1;
    int cellY1;
    int cellX;
    int cellY;
    Tile_82622638 *tile;
    unsigned int *cell;

    depth.f = lo[2] >= 0.0f ? lo[2] : 0.0f;
    x0 = Clamp((int)lo[0], 0, 192);
    y0 = Clamp((int)lo[1], 0, 96);
    x1 = Clamp((int)(hi[0] + 0.5f), 0, 192);
    y1 = Clamp((int)(hi[1] + 0.5f), 0, 96);
    tileX0 = x0 / 8;
    tileY0 = y0 / 8;
    tileX1 = Clamp(x1 / 8, 0, 23);
    tileY1 = Clamp(y1 / 8, 0, 11);
    for (tileY = tileY0; tileY <= tileY1; tileY++) {
        for (tileX = tileX0; tileX <= tileX1; tileX++) {
            tile = &grid->tiles[tileY * 24 + tileX];
            if (tile->nearest >= depth.u) {
                return 1;
            }
            if (tile->farthest >= depth.u) {
                cellX0 = Clamp(x0 - tileX * 8, 0, 8);
                cellX1 = Clamp(x1 - tileX * 8, 0, 8);
                cellY0 = Clamp(y0 - tileY * 8, 0, 8);
                cellY1 = Clamp(y1 - tileY * 8, 0, 8);
                for (cellY = cellY0; cellY < cellY1; cellY++) {
                    cell = tile->cells[cellY];
                    for (cellX = cellX0; cellX < cellX1; cellX++) {
                        /* walks from the start of the row, not from cellX0 */
                        if (*cell >= depth.u) {
                            return 1;
                        }
                        cell++;
                    }
                }
            }
        }
    }
    return 0;
}
