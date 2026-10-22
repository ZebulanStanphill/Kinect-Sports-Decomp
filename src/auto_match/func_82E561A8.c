typedef struct { unsigned int v[4]; } Guid;
extern Guid lbl_82153858;
extern char lbl_8215491C[];
extern void fn_82E50C30(void *p);

typedef struct {
    void *vtbl;
    int f4;
    char sub[0x3c];
    Guid id;
    int f54;
    int f58;
    int f5c;
    int f60;
    int f64;
} Obj;

Obj *fn_82E561A8(Obj *o, int *out)
{
    o->f4 = 0;
    o->vtbl = lbl_8215491C;
    fn_82E50C30(o->sub);
    o->id = lbl_82153858;
    o->f54 = 0;
    o->f58 = 0;
    o->f5c = 0;
    o->f60 = 0;
    o->f64 = 0;
    *out = 0;
    return o;
}
