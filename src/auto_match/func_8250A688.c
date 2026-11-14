typedef struct Point_8250A688 {
    float pad;
    float x;    /* 0x4 */
    float y;    /* 0x8 */
} Point_8250A688;

extern const float lbl_821954B0[0xa28 / 4];
extern const float lbl_8218EC10;

unsigned char fn_8250A688(Point_8250A688 *a, Point_8250A688 *b)
{
    if (a->y < lbl_821954B0[0x46] || a->y > lbl_8218EC10 || b->y < lbl_821954B0[0x46] || b->y > lbl_8218EC10)
        return a->y < b->y;
    return a->x < b->x;
}
