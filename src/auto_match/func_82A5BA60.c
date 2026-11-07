typedef struct LockVt_82A5BA60 LockVt_82A5BA60;
typedef struct Lock_82A5BA60 {
    LockVt_82A5BA60 *vt;
} Lock_82A5BA60;

struct LockVt_82A5BA60 {
    void *f0;
    void *f4;
    void (*Lock)(Lock_82A5BA60 *self);
    void *fc;
    void *f10;
    void (*Unlock)(Lock_82A5BA60 *self);
};

typedef struct Obj_82A5BA60 {
    unsigned int f0;
    unsigned int f4;
    unsigned int f8;
    Lock_82A5BA60 *lock;   /* 0x0c */
    unsigned int f10;
    unsigned int f14;      /* 0x14 */
    unsigned int f18;      /* 0x18 */
    unsigned int pad1c[30];
    unsigned int f94;      /* 0x94 */
} Obj_82A5BA60;

typedef struct Item_82A5BA60 {
    unsigned int flag;     /* 0x0 */
    unsigned int count;    /* 0x4 */
    unsigned int type;     /* 0x8 */
    void *owner;           /* 0xc */
} Item_82A5BA60;

extern char lbl_83219D50[];
extern Item_82A5BA60 *fn_82A3FF60(void *pool, unsigned int size, unsigned int tag, unsigned int flags);
extern void fn_82A4F4E0(Item_82A5BA60 *p);
extern int fn_82A5C760(unsigned int q, Item_82A5BA60 *p);
extern void fn_82A77C10(unsigned int a);

int fn_82A5BA60(Obj_82A5BA60 *o, unsigned int n)
{
    int hr;
    Item_82A5BA60 *p;

    o->lock->vt->Lock(o->lock);
    hr = 0;
    if (o->f18 == 0 && n == 0) {
        fn_82A77C10(o->f94);
    } else {
        p = fn_82A3FF60(lbl_83219D50, 0x10, 0x20970006, 0);
        if (p == 0) {
            hr = (int)0x8007000E;
        } else {
            p->count = n;
            p->type = 7;
            p->flag = n != 0;
            p->owner = (char *)o + 4;
            hr = fn_82A5C760(o->f14, p);
            if (hr < 0) {
                fn_82A4F4E0(p);
            }
        }
    }
    o->lock->vt->Unlock(o->lock);
    return hr;
}
