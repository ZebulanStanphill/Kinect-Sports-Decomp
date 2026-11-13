// Copies the global callback (a tr1::function-style object at lbl_8328A678: 16 bytes of local
// storage + impl pointer) and, when it is set, calls it with this object's fields.
struct Impl_823B46C8;
typedef struct ImplVt_823B46C8 {
    struct Impl_823B46C8 *(*copy)(struct Impl_823B46C8 *self, void *where);
    void (*call)(struct Impl_823B46C8 *self, void *a, void *b, void *c);
    void *f8;
    void (*destroy)(struct Impl_823B46C8 *self, int deallocate);
} ImplVt_823B46C8;

typedef struct Impl_823B46C8 {
    ImplVt_823B46C8 *vt;
} Impl_823B46C8;

typedef struct Function_823B46C8 {
    int storage[4];
    Impl_823B46C8 *impl;
} Function_823B46C8;

typedef struct Obj_823B46C8 {
    char pad0[0x6c];
    void *target;       /* 0x6c */
    char pad70[0x10];
    void *handle;       /* 0x80 */
    int pad84;
    char args[4];       /* 0x88 */
} Obj_823B46C8;

extern Function_823B46C8 lbl_8328A678;
extern void fn_828E9D40(void *handle);

int fn_823B46C8(Obj_823B46C8 *self)
{
    Function_823B46C8 f;
    Impl_823B46C8 *src;

    fn_828E9D40(self->handle);
    if (lbl_8328A678.impl != 0) {
        src = lbl_8328A678.impl;
        if (src == (Impl_823B46C8 *)&lbl_8328A678)
            f.impl = src->vt->copy(src, &f);
        else
            f.impl = src->vt->copy(src, 0);
        if (f.impl != 0) {
            f.impl->vt->call(f.impl, self->target, self->args, &self->handle);
            if (f.impl != 0)
                f.impl->vt->destroy(f.impl, f.impl != (Impl_823B46C8 *)&f);
        }
    }
    return 1;
}
