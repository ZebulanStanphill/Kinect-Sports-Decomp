struct Obj_82E66280;
typedef struct { void *f0; void (*f4)(struct Obj_82E66280 *); } VT_82E66280;
typedef struct Obj_82E66280 { VT_82E66280 *vt; } Obj_82E66280;

extern void *fn_82E50BE8(int, int, int, int, int);
extern Obj_82E66280 *fn_82E66120(void *, int, int, int);

int fn_82E66280(int a, int b, int c, Obj_82E66280 **out)
{
    int hr;
    void *mem;
    Obj_82E66280 *o;

    hr = 0;
    mem = fn_82E50BE8(0x38, 0, 0, 0, 0);
    o = mem ? fn_82E66120(mem, a, b, c) : 0;
    if (o == 0) {
        hr = 0x8007000E;
    } else {
        o->vt->f4(o);
        *out = o;
    }
    return hr;
}
