typedef struct Lock Lock;
typedef struct LockVtbl {
    void *slots0[2];
    void (*lock)(Lock *self);
    void *slots3[2];
    void (*unlock)(Lock *self);
} LockVtbl;
struct Lock {
    LockVtbl *vt;
};

typedef struct Obj {
    unsigned char pad0[0xc];
    Lock *lock;
    unsigned char pad10[0x84];
    void *target;
} Obj;

extern void fn_82A77200(void *target, void *arg);

int fn_82A5B5D0(Obj *o, void *arg)
{
    o->lock->vt->lock(o->lock);
    fn_82A77200(o->target, arg);
    o->lock->vt->unlock(o->lock);
    return 0;
}
