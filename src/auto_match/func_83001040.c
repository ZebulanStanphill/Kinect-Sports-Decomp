typedef struct Obj_83001040 Obj_83001040;

typedef struct {
    char pad[0x48];
    void (*f48)(Obj_83001040 *self, float value, int a, int b, int c);
} Vtbl_83001040;

struct Obj_83001040 {
    Vtbl_83001040 *vt;
    char pad04[0x39];
    unsigned char flags3d;  /* 0x3d */
    char pad3e[0x26];
    void *f64;              /* 0x64 */
};

extern void fn_82FFFFE0(Obj_83001040 *self);
extern void fn_82FFFF50(Obj_83001040 *self);
extern int fn_83027260(void *a, unsigned int mode);

int fn_83001040(Obj_83001040 *p, unsigned int mode)
{
    int r;

    switch (mode) {
    case 0:
        fn_82FFFFE0(p);
        return 1;
    case 1:
        fn_82FFFFE0(p);
        p->flags3d |= 1;
        return 1;
    case 2:
    case 3:
        if (p->f64 == 0) {
            fn_82FFFF50(p);
        }
        break;
    }
    if (p->f64 != 0) {
        r = fn_83027260(p->f64, mode);
        p->vt->f48(p, (float)(int)mode, 0x20, 0, 0);
    } else {
        r = 2;
    }
    return r;
}
