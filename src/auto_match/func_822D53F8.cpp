struct Obj {
    void **vtbl;
    char str[0x1c];
    int val;
};
struct Blk {
    void **vtbl;
    int uses;
    int weaks;
    Obj obj;
};
struct Out { Obj *ptr; Blk *blk; };

extern "C" {
extern void *lbl_821AD588[];
extern void *lbl_821AFA00[];
extern void *lbl_821AFA08[];
void fn_82230110(void *s, const char *c);
void fn_82230300(void *s, int a, int b);
void fn_8223B688(void *dst, void *src);
void *fn_8265C9E0(unsigned int n);
}

extern "C" Out *fn_822D53F8(Out *out, int v)
{
    Blk *mem = (Blk *)fn_8265C9E0(0x30);
    Blk *p;
    if (mem != 0) {
        mem->uses = 1;
        mem->vtbl = lbl_821AD588;
        mem->weaks = 1;
        Obj *o = &mem->obj;
        if (o != 0) {
            char tmp[0x20];
            fn_82230110(tmp, "AnimAtEnd");
            o->vtbl = lbl_821AFA08;
            fn_8223B688(o->str, tmp);
            fn_82230300(tmp, 1, 0);
            o->val = v;
            o->vtbl = lbl_821AFA00;
        }
        p = mem;
    } else
        p = 0;
    out->blk = p;
    out->ptr = &p->obj;
    return out;
}
