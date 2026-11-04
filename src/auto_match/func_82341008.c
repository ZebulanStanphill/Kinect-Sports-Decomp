extern void *fn_82340F08(void *, void *);
extern void *fn_8265C9E0(int);
extern char lbl_821B17D0[];

typedef struct { void *vt; int f4; int f8; void *fc; } Obj_82341008;

Obj_82341008 *fn_82341008(Obj_82341008 *o, int a, void *b, int c)
{
    void *mem;

    o->f4 = c;
    o->f8 = a;
    o->vt = lbl_821B17D0;
    mem = fn_8265C9E0(0x68);
    o->fc = mem ? fn_82340F08(mem, b) : 0;
    return o;
}
