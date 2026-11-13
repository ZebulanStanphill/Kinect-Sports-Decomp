typedef struct FuncImpl_824C0E08 FuncImpl_824C0E08;
typedef struct {
    FuncImpl_824C0E08 *(*clone)(FuncImpl_824C0E08 *self, void *where);
} FuncImplVt_824C0E08;
struct FuncImpl_824C0E08 { FuncImplVt_824C0E08 *vt; };

typedef struct {
    char storage[0x10];
    FuncImpl_824C0E08 *impl;
} Function_824C0E08;

typedef struct {
    void *vt;
    int value;
    int state;
    int pad0c;
    Function_824C0E08 callback;
} Obj_824C0E08;

extern char lbl_821C0660[];
extern void fn_82359C18(Function_824C0E08 *f);

Obj_824C0E08 *fn_824C0E08(Obj_824C0E08 *self, int value, Function_824C0E08 *callback)
{
    Function_824C0E08 *dst;

    self->value = value;
    self->vt = lbl_821C0660;
    {
        int *state = &self->state;
        *state = 0;
    }
    dst = &self->callback;
    if (callback->impl == 0) {
        dst->impl = 0;
    } else {
        if ((void *)callback->impl == (void *)callback) {
            dst->impl = callback->impl->vt->clone(callback->impl, dst);
        } else {
            dst->impl = callback->impl->vt->clone(callback->impl, 0);
        }
    }
    fn_82359C18(callback);
    return self;
}
