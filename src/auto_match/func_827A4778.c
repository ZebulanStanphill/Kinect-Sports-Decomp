typedef struct Point_827A4778 {
    float x; /* 0x0 */
    float y; /* 0x4 */
} Point_827A4778;

typedef struct Grid_827A4778 {
    char pad[0x1c];
    int layer; /* 0x1c */
} Grid_827A4778;

typedef struct Cursor_827A4778 {
    char pad[0x8];
    Grid_827A4778 *grid; /* 0x8 */
    char pad2[0x40];
    float x; /* 0x4c */
    float y; /* 0x50 */
    char pad3[0x14];
    unsigned short flagsHigh : 10; /* 0x68 */
    unsigned short active : 1;
    unsigned short bits4 : 3;
    unsigned short select : 1;
    unsigned short bit0 : 1;
} Cursor_827A4778;

extern Point_827A4778 *fn_827A0C20(Grid_827A4778 *grid);
extern double fn_82F68918(double x); /* floor */
extern int fn_827A0EB8(Grid_827A4778 *grid, float x, float y);
extern void fn_827A3A50(Cursor_827A4778 *cursor, int cell, unsigned int select);
extern void fn_8279C658(Grid_827A4778 *grid, int layer, int cell);

void fn_827A4778(Cursor_827A4778 *cursor, float x, float y)
{
    if ((unsigned char)cursor->active) {
        Point_827A4778 *origin = fn_827A0C20(cursor->grid);
        float cellX = (float)fn_82F68918(x - origin->x);
        float cellY = (float)fn_82F68918(y - origin->y);
        int cell;
        cursor->x = cellX;
        cursor->y = cellY;
        cell = fn_827A0EB8(cursor->grid, cellX, cellY);
        if (cell != -1) {
            fn_827A3A50(cursor, cell, cursor->select);
            if ((unsigned char)cursor->select) {
                fn_8279C658(cursor->grid, cursor->grid->layer, cell);
            }
        }
    }
}
