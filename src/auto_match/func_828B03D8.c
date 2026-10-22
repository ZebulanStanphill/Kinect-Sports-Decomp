typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f0;
    void *f4;
    void *f8;
    void *(*getC)(Obj *);
} ObjVtbl;
struct Obj {
    ObjVtbl *vt;
    char pad[0x22];
    unsigned char flag26;
};
typedef struct Self {
    char pad[0x58];
    void *p58;
} Self;
extern Obj *fn_8289F2E0(void);
extern void fn_828D3250(void *a, void *b, int c);

void fn_828B03D8(Self *self, int unused, int c)
{
    Obj *o;
    if (self->p58 != 0) {
        o = fn_8289F2E0();
        if (o != 0 && o->flag26 == 0) {
            void *p = self->p58;
            fn_828D3250(p, o->vt->getC(o), c);
        }
    }
}
