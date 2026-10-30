// Calls fn_82A5C480 on the object at +4 between slots 2 and 5 of the object at +0xc
// (probably a lock), with 0 and the last three arguments; returns its result. Same
// object layout as fn_82A5B558. The second argument is unused.
typedef struct Lock_82A5B558 Lock_82A5B558;

typedef struct {
    void *f0[2];
    void (*fn8)(Lock_82A5B558 *self);
    void *fc[2];
    void (*fn14)(Lock_82A5B558 *self);
} LockVtbl_82A5B558;

struct Lock_82A5B558 { LockVtbl_82A5B558 *vt; };

typedef struct {
    void *vt;
    char inner[8];
    Lock_82A5B558 *lock;
} Obj_82A5B558;

extern int fn_82A5C480(void *inner, int arg, int a, int b, int c);

int fn_82A5CCA0(Obj_82A5B558 *self, int arg, int a, int b, int c)
{
    int r;

    self->lock->vt->fn8(self->lock);
    r = fn_82A5C480(self->inner, 0, a, b, c);
    self->lock->vt->fn14(self->lock);
    return r;
}
