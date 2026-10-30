struct If_82E245F8;
typedef struct VT_82E245F8 {
    void *pad0[2];
    void (*f8)(struct If_82E245F8 *);
    void *pad1[13];
    void (*f40)(struct If_82E245F8 *);
    void (*f44)(struct If_82E245F8 *);
} VT_82E245F8;
typedef struct If_82E245F8 { VT_82E245F8 *vt; } If_82E245F8;
typedef struct {
    unsigned int magic;
    void *f4;
    char pad0[0x10 - 8];
    void *f10;
    char pad1[0x58 - 0x14];
    void *f58;
    char pad2[0xc8 - 0x5c];
    void *fc8;
    char pad3[0xd4 - 0xcc];
    void *fd4;
    char pad4[0x100 - 0xd8];
    If_82E245F8 *f100;
    If_82E245F8 *f104;
    If_82E245F8 *f108;
    If_82E245F8 *f10c;
} Obj_82E245F8;
extern void fn_8265C990(void *, unsigned int);
extern void fn_82E25B78(void *);
extern void fn_82E33098(void *);

void fn_82E245F8(Obj_82E245F8 *o)
{
    if (o != 0 && o->magic == 0x476f6f64) {
        o->magic = 0x46726565;
        if (o->f104 != 0)
            o->f104->vt->f40(o->f104);
        if (o->f104 != 0)
            o->f104->vt->f44(o->f104);
        if (o->f58 != 0)
            fn_82E33098(o->f58);
        o->f58 = 0;
        if (o->f4 != 0)
            fn_82E25B78(o->f4);
        o->f4 = 0;
        if (o->f104 != 0) {
            o->f104->vt->f8(o->f104);
            o->f104 = 0;
        }
        if (o->f108 != 0) {
            o->f108->vt->f8(o->f108);
            o->f108 = 0;
        }
        if (o->f10c != 0) {
            o->f10c->vt->f8(o->f10c);
            o->f10c = 0;
        }
        if (o->f100 != 0) {
            o->f100->vt->f8(o->f100);
            o->f100 = 0;
        }
        if (o->f10 != 0)
            fn_8265C990(o->f10, 0x208c804d);
        o->f10 = 0;
        if (o->fc8 != 0)
            fn_8265C990(o->fc8, 0x208c804d);
        o->fc8 = 0;
        if (o->fd4 != 0)
            fn_8265C990(o->fd4, 0x208c804d);
        o->fd4 = 0;
    }
}
