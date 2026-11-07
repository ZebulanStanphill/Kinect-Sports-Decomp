typedef struct Sub_83002750 {
    char pad[0x24];
    float x;
    float y;
} Sub_83002750;

typedef struct Obj_83002750 {
    char pad[0x68];
    Sub_83002750 *sub;
} Obj_83002750;

extern unsigned char fn_83001FE8(Obj_83002750 *p);
extern void fn_83006600(Obj_83002750 *p, float a, float b, float c);

void fn_83002750(Obj_83002750 *p, float a, float x, float y)
{
    fn_83006600(p, a, 0.0f, 0.0f);
    if (x != 0.0f || y != 0.0f || p->sub != 0) {
        if (fn_83001FE8(p) != 0) {
            p->sub->x = x;
            p->sub->y = y;
        }
    }
}
