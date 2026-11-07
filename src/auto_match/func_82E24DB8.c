typedef struct Obj_82E24DB8 {
    void *vtable;      /* 0x00 */
    int refCount;      /* 0x04 */
    int field8;        /* 0x08 */
    int size;          /* 0x0C */
    void *buffer;      /* 0x10 */
    int pad14;         /* 0x14 */
    int pad18;         /* 0x18 */
    int pad1C;         /* 0x1C */
} Obj_82E24DB8;

extern void *fn_8265C940(unsigned int size, unsigned int tag);
extern void fn_8265C990(void *p, unsigned int tag);
extern unsigned int lbl_8214C340;

static __forceinline Obj_82E24DB8 *Obj_82E24DB8_Init(Obj_82E24DB8 *p, int size, void *buf)
{
    p->size = size;
    p->buffer = buf;
    p->refCount = 1;
    p->vtable = &lbl_8214C340;
    p->field8 = 0;
    return p;
}

int fn_82E24DB8(int size, Obj_82E24DB8 **out)
{
    void *buf;
    Obj_82E24DB8 *mem;
    Obj_82E24DB8 *obj;

    if (out == 0) {
        return 0x80070057;
    }
    buf = fn_8265C940(size, 0x208c804d);
    if (buf == 0) {
        return 0x8007000E;
    }
    mem = (Obj_82E24DB8 *)fn_8265C940(0x20, 0x208c804d);
    obj = mem ? Obj_82E24DB8_Init(mem, size, buf) : 0;
    if (obj == 0) {
        fn_8265C990(buf, 0x208c804d);
        return 0x8007000E;
    }
    *out = obj;
    return 0;
}
