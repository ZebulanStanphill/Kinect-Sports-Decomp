typedef struct Obj_8282DCC8 {
    char pad0[0x51];
    unsigned char rows;
    char pad52[2];
    int step;
    int pos;
    char pad5c[0x2d8 - 0x5c];
    int cur;
    char pad2dc[8];
    int base;
    int end;
} Obj_8282DCC8;

void fn_8282DCC8(Obj_8282DCC8 *o)
{
    int n = o->rows * 0x21;
    int c = o->cur;
    int *q;
    o->end = o->base + c;
    o->cur = c + n;
    q = &o->pos;
    *q += n;
    o->cur += o->step;
    *q += o->step;
}
