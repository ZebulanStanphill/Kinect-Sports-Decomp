typedef struct Obj_82E2D068 Obj_82E2D068;
typedef struct {
    int (*QueryInterface)(Obj_82E2D068 *, const void *, void **);
    int slots[38];
    void (*f9c)(Obj_82E2D068 *, int);
} ObjVt_82E2D068;
struct Obj_82E2D068 { ObjVt_82E2D068 *vt; };
extern char lbl_8214C5A0[];
extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern Obj_82E2D068 *fn_82E2C818(void *mem, int a);

int fn_82E2D068(void **out)
{
    void *mem;
    Obj_82E2D068 *p;
    int hr;

    mem = fn_82E50BE8(0x3c, 0, 0, 0, 0);
    p = mem ? fn_82E2C818(mem, 0) : 0;
    if (p == 0) {
        hr = 0x8007000E;
    } else {
        hr = p->vt->QueryInterface(p, lbl_8214C5A0, out);
        if (hr >= 0) {
            return hr;
        }
        p->vt->f9c(p, 1);
    }
    *out = 0;
    return hr;
}
