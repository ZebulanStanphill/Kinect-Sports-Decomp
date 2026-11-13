typedef struct FuncImpl_824C2A28 FuncImpl_824C2A28;
typedef struct {
    FuncImpl_824C2A28 *(*clone)(FuncImpl_824C2A28 *self, void *where);
} FuncImplVt_824C2A28;
struct FuncImpl_824C2A28 { FuncImplVt_824C2A28 *vt; };

typedef struct {
    char storage[0x10];
    FuncImpl_824C2A28 *impl;
} Function_824C2A28;

typedef struct {
    void *vt;
    int value;
    int state;
    int pad0c;
    Function_824C2A28 callback;
} Obj_824C2A28;

extern char lbl_821C0744[];
extern void fn_82359C18(Function_824C2A28 *f);

Obj_824C2A28 *fn_824C2A28(Obj_824C2A28 *self, int value, Function_824C2A28 *callback)
{
    Function_824C2A28 *dst;

    self->value = value;
    self->vt = lbl_821C0744;
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
