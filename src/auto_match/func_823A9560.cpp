struct Obj { void **vtbl; int f4; };
struct Blk {
    void **vtbl;
    int uses;
    int weaks;
    Obj obj;
    char pad[0x2c - 0x14];
};
struct Out { Obj *ptr; Blk *blk; };

extern "C" {
extern void *lbl_821AD588[];
extern void *lbl_821B47C8[];
void *fn_8265C9E0(unsigned int n);
void fn_828ABF58(void *p, int a, int b, int c);
}

extern "C" Out *fn_823A9560(Out *out, int *pa, int *pb)
{
    Blk *mem = (Blk *)fn_8265C9E0(0x2c);
    Blk *p;
    if (mem != 0) {
        mem->uses = 1;
        mem->vtbl = lbl_821AD588;
        mem->weaks = 1;
        Obj *o = &mem->obj;
        if (o != 0) {
            int vb = *pb;
            int va = *pa;
            o->f4 = 0;
            o->vtbl = lbl_821B47C8;
            fn_828ABF58(o + 1, 0, va, vb);
        }
        p = mem;
    } else
        p = 0;
    out->blk = p;
    out->ptr = &p->obj;
    return out;
}
