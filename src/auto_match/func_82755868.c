typedef struct Rect { char pad[0x10]; float x0, y0, x1, y1; } Rect;

unsigned char fn_82755868(Rect *r, float *pt)
{
    return !(pt[0] > r->x1 || pt[0] < r->x0 || pt[1] > r->y1 || pt[1] < r->y0);
}
