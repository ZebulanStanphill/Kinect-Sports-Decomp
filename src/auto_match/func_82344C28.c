typedef struct Rep_82344C28 Rep_82344C28;

typedef struct SharedPtr_82344C28 {
    void *ptr;
    Rep_82344C28 *rep;
} SharedPtr_82344C28;

typedef struct Vec3_82344C28 {
    float x;
    float y;
    float z;
} Vec3_82344C28;

typedef struct Obj_82344C28 {
    void *vt;
    char pad4[0x14 - 0x4];
    SharedPtr_82344C28 source; /* 0x14 */
    Vec3_82344C28 *scale;      /* 0x1c */
} Obj_82344C28;

extern void fn_82349DE8(Obj_82344C28 *self, int a, int b, int kind);
extern void fn_82365BD8(SharedPtr_82344C28 *dst, SharedPtr_82344C28 *src);
extern void *fn_8265C9E0(unsigned int size);
extern void fn_822315A0(Rep_82344C28 *rep);
extern char lbl_821B1A70[];

static __forceinline Vec3_82344C28 *Vec3Init(Vec3_82344C28 *v, float x, float y, float z)
{
    v->x = x;
    v->y = y;
    v->z = z;
    return v;
}

Obj_82344C28 *fn_82344C28(Obj_82344C28 *self, int a, int b, SharedPtr_82344C28 *source)
{
    Vec3_82344C28 *v;
    void *mem;

    fn_82349DE8(self, a, b, 5);
    self->vt = lbl_821B1A70;
    fn_82365BD8(&self->source, source);
    mem = fn_8265C9E0(0xc);
    if (mem != 0) {
        v = Vec3Init((Vec3_82344C28 *)mem, 12.5f, 1.5f, 27.0f);
    } else {
        v = 0;
    }
    self->scale = v;
    if (source->rep != 0) {
        fn_822315A0(source->rep);
    }
    return self;
}
