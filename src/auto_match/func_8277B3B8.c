typedef struct Rect_8277B3B8 {
    short x;
    short y;
    int value;
    int extra;
} Rect_8277B3B8;

static __forceinline void SetPos_8277B3B8(Rect_8277B3B8 *r, short x, short y)
{
    r->x = x;
    r->y = y;
}

void fn_8277B3B8(int unused, Rect_8277B3B8 *out, float x, float y, int value)
{
    SetPos_8277B3B8(out, (short)x, (short)y);
    out->value = value;
    out->extra = 0;
}
