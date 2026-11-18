typedef struct Remap_827B5C58 {
    char pad0[0x40];
    short *xTable; /* 0x40 */
    int xCount;    /* 0x44 */
    char pad48[4];
    short *yTable; /* 0x4c */
    int yCount;    /* 0x50 */
    char pad54[4];
    short xBase; /* 0x58 */
    short yBase; /* 0x5a */
} Remap_827B5C58;

typedef struct Point_827B5C58 {
    short x;
    short y;
} Point_827B5C58;

void fn_827B5C58(Remap_827B5C58 *remap, Point_827B5C58 *point)
{
    int index;

    index = point->y - remap->yBase;
    if (index >= 0 && index < remap->yCount) {
        point->y = remap->yTable[index] + remap->yBase;
    }
    index = point->x - remap->xBase;
    if (index >= 0 && index < remap->xCount) {
        point->x = remap->xTable[index] + remap->xBase;
    }
}
