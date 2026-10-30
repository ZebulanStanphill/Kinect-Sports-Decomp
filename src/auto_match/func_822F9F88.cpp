struct Rep;
struct SP {
    void *ptr;
    Rep *rep;
};
struct Obj { void **vtbl; };
struct Blk {
    void **vtbl;
    int uses;
    int weaks;
    Obj obj;
    int pad[5];
};
struct Out { Obj *ptr; Blk *blk; };

extern "C" {
extern void *lbl_821AD588[];
extern void *lbl_821AE780[];
SP *fn_82365BD8(SP *self, const SP *src);
void fn_822315A0(Rep *rep);
void fn_822F9168(Obj *o, int a, int b, int c, SP *sp);
void *fn_8265C9E0(unsigned int n);
}

extern "C" Out *fn_822F9F88(Out *out, int a, int b, int c, SP *sp)
{
    Blk *mem = (Blk *)fn_8265C9E0(0x24);
    Blk *p;
    if (mem != 0) {
        mem->uses = 1;
        mem->vtbl = lbl_821AD588;
        mem->weaks = 1;
        Obj *o = &mem->obj;
        if (o != 0) {
            SP t1;
            SP t2;
            SP *t = fn_82365BD8(&t1, sp);
            fn_822F9168(o, a, b, c, fn_82365BD8(&t2, t));
            o->vtbl = lbl_821AE780;
            if (t->rep != 0)
                fn_822315A0(t->rep);
        }
        p = mem;
    } else
        p = 0;
    out->blk = p;
    out->ptr = &p->obj;
    return out;
}
