typedef struct { int a, b, c, d; } Rect_8275EB28;
typedef struct {
    char pad0[0x24];
    unsigned char flags;
    char pad25[0x34 - 0x25];
    Rect_8275EB28 rect;
} Src_8275EB28;
typedef struct {
    Src_8275EB28 *src;
    int first;
    Rect_8275EB28 rect;
    int count;
    int second;
    float step;
} Obj_8275EB28;

extern float lbl_82002AE0;

void fn_8275EB28(Obj_8275EB28 *o, Src_8275EB28 *src)
{
    Rect_8275EB28 *r = &src->rect;
    o->src = src;
    o->first = r->a;
    o->rect = *r;
    o->count = 0;
    o->second = r->b;
    o->step = (src->flags & 2) ? 0.05f : lbl_82002AE0;
}
