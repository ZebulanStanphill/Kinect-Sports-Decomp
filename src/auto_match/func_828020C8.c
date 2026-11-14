/* Entry of a function table at lbl_83156C40 (all entries share the signature; f1 is unused here). */
typedef struct Grid_828020C8 {
    int pad0;
    unsigned int x;     /* 0x04 */
    unsigned int y;     /* 0x08 */
} Grid_828020C8;

void fn_828020C8(const Grid_828020C8 *grid, float unused, float scale, float offset, float *outX, float *outY)
{
    float y = (float)grid->y;
    float x = (float)grid->x;
    *outX = (x + offset) * scale;
    *outY = (y + offset) * scale;
}
