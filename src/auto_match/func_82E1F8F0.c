typedef struct Obj { unsigned int pos; int x4; unsigned int start; int xc; int x10; unsigned char done; } Obj;
extern unsigned int fn_82A1F2F8(void);

unsigned int fn_82E1F8F0(Obj *p)
{
    unsigned int r = p->pos;
    if (!p->done) {
        r = fn_82A1F2F8() + (r - p->start);
    }
    return r;
}
