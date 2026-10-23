typedef struct LockVtbl {
    void *pad0[2];
    void (*Lock)(void *self);
    void *pad0c[2];
    void (*Unlock)(void *self);
} LockVtbl;

typedef struct Lock {
    LockVtbl *vtbl;
} Lock;

typedef struct Cfg {
    char pad[0x80];
    int mode;
} Cfg;

typedef struct Obj {
    char pad0[0x1c];
    Lock lock;
    char pad20[0x28];
    Cfg *cfg;
    void *queue;
} Obj;

typedef struct Msg {
    int type;
    int arg;
    int a;
    int b;
} Msg;

extern char lbl_83219D50[];
extern Msg *fn_82A3FF60(void *heap, int size, int tag, int flags);
extern int fn_82A5C760(void *queue, Msg *msg);
extern void fn_82A4F4E0(Msg *msg);
extern int fn_82A5CBD8(void *queue, int arg);

int fn_82A4B588(Obj *o, int arg)
{
    Lock *lock = &o->lock;
    Msg *m;
    int hr;

    lock->vtbl->Lock(lock);
    if (o->cfg->mode == 2) {
        m = fn_82A3FF60(lbl_83219D50, 0x10, 0x20970006, 0);
        if (m == 0) {
            hr = 0x8007000e;
        } else {
            m->arg = arg;
            m->a = 0;
            m->type = 3;
            m->b = 0;
            hr = fn_82A5C760(o->queue, m);
            if (hr < 0)
                fn_82A4F4E0(m);
        }
    } else {
        hr = fn_82A5CBD8(o->queue, arg);
    }
    lock->vtbl->Unlock(lock);
    return hr;
}
