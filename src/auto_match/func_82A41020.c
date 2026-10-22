typedef struct Lock Lock;
typedef struct {
    void *f0;
    void *f4;
    void (*lock)(Lock *self);
    void *fc;
    void *f10;
    void (*unlock)(Lock *self);
} LockVtbl;
struct Lock {
    LockVtbl *vtbl;
    char pad[0x24 - 4];
};

typedef struct {
    char pad0[0x2c];
    Lock lockA;
    Lock lockB;
    char pad74[0xa4 - 0x74];
    int active;
    int unka8;
    unsigned int owner;
} Obj;

extern unsigned int fn_82A1BB18(void);
extern void fn_82A406A0(Obj *self, int arg);

void fn_82A41020(Obj *p)
{
    p->lockA.vtbl->lock(&p->lockA);
    if (fn_82A1BB18() != p->owner) {
        p->lockB.vtbl->lock(&p->lockB);
        if (p->active != 0) {
            fn_82A406A0(p, 0);
            p->active = 0;
        }
        p->lockB.vtbl->unlock(&p->lockB);
    }
    p->lockA.vtbl->unlock(&p->lockA);
}
