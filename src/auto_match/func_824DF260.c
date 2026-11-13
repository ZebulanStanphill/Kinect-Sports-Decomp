typedef struct FuncImpl_824DF260 FuncImpl_824DF260;
typedef struct {
    FuncImpl_824DF260 *(*clone)(FuncImpl_824DF260 *self, void *where);
} FuncImplVt_824DF260;
struct FuncImpl_824DF260 { FuncImplVt_824DF260 *vt; };

typedef struct {
    char storage[0x10];
    FuncImpl_824DF260 *impl;
} Function_824DF260;

typedef struct {
    int a;
    int b;
    int c;
    int pad0c;
    float rate;
    int pad14[2];
    float time;
    Function_824DF260 callback;
} Obj_824DF260;

extern void fn_82359C18(Function_824DF260 *f);

Obj_824DF260 *fn_824DF260(Obj_824DF260 *self, float rate, Function_824DF260 *callback)
{
    Function_824DF260 *dst;

    self->rate = rate;
    self->a = 0;
    self->b = 0;
    dst = &self->callback;
    self->c = 0;
    self->time = 0.0f;
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
