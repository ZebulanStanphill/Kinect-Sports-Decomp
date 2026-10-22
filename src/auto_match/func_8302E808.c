typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f[9];
    unsigned char (*get)(Obj *o, int key, unsigned short *out);
} ObjVtbl;
struct Obj { ObjVtbl *vt; };
typedef struct S {
    char pad0[0x88];
    Obj *o88;
    char pad8c[0x11f - 0x8c];
    unsigned char b11f;
} S;
extern void fn_8302DFF0(S *p, unsigned short v, int c);

void fn_8302E808(S *p, int key, int c)
{
    unsigned short v = 0;
    if ((p->b11f & 0xe0) == 0) {
        if (p->o88->vt->get(p->o88, key, &v)) {
            fn_8302DFF0(p, v, c);
        }
    }
}
