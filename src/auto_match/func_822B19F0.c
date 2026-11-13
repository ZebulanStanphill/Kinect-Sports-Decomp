/* Constructor: an empty circular list head (both links pointing at the object itself, count 0)
   followed by a function object copy-constructed from callback, which is then destroyed
   (fn_82359C18). */
typedef struct FuncImpl_822B19F0 FuncImpl_822B19F0;
typedef struct {
    FuncImpl_822B19F0 *(*clone)(FuncImpl_822B19F0 *self, void *where);
} FuncImplVt_822B19F0;
struct FuncImpl_822B19F0 { FuncImplVt_822B19F0 *vt; };

typedef struct {
    char storage[0x10];
    FuncImpl_822B19F0 *impl;
} Function_822B19F0;

typedef struct Obj_822B19F0 {
    struct Obj_822B19F0 *next;
    struct Obj_822B19F0 *prev;
    int count;
    int pad0c;
    Function_822B19F0 callback;
} Obj_822B19F0;

extern void fn_82359C18(Function_822B19F0 *f);

Obj_822B19F0 *fn_822B19F0(Obj_822B19F0 *self, Function_822B19F0 *callback)
{
    Function_822B19F0 *dst;

    self->prev = self;
    self->next = self;
    self->count = 0;
    dst = &self->callback;
    if (callback->impl == 0) {
        dst->impl = 0;
    } else {
        if ((void *)callback->impl == (void *)callback)
            dst->impl = callback->impl->vt->clone(callback->impl, dst);
        else
            dst->impl = callback->impl->vt->clone(callback->impl, 0);
    }
    fn_82359C18(callback);
    return self;
}
