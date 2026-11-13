typedef struct { void *vt; int f4, f8, fc, f10, f14; int refs; } Obj_82E81480;
extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern char lbl_8215F300[];

static __forceinline Obj_82E81480 *construct_82E81480(Obj_82E81480 *o)
{
    o->f4 = 0;
    o->f8 = 0;
    o->fc = 0;
    o->f10 = 0;
    o->f14 = 0;
    o->vt = lbl_8215F300;
    o->refs = 1;
    return o;
}

int fn_82E81480(Obj_82E81480 **out)
{
    Obj_82E81480 *o = 0;
    int hr = 0;
    if (out == 0) {
        hr = 0x80070057;
    } else {
        Obj_82E81480 *mem = fn_82E50BE8(sizeof(Obj_82E81480), 0, 0, 0, 0);
        o = mem ? construct_82E81480(mem) : 0;
        if (o == 0) {
            hr = 0x8007000e;
        } else {
            *out = o;
        }
    }
    return hr;
}
