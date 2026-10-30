// Calls fn_82A5C118 on the object at +4 between slots 2 and 5 of the object at +0xc
// (probably a lock), passing a through and returning the result. fn_82A5C118 tail-calls
// slot 10 with its arguments untouched, so neither a nor the result has a known type;
// int is used for both.
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

extern int fn_82A5C118(void *inner, int a);

int fn_82A5B558(Obj_82A5B558 *self, int a)
{
    int r;

    self->lock->vt->fn8(self->lock);
    r = fn_82A5C118(self->inner, a);
    self->lock->vt->fn14(self->lock);
    return r;
}
