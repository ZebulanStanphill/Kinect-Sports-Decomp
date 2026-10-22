typedef struct lock_82A404D0 lock_82A404D0;
typedef struct {
    void *pad0;
    void *pad4;
    void (*lock)(lock_82A404D0 *self);
    void *padc;
    void *pad10;
    void (*unlock)(lock_82A404D0 *self);
} lock_vt_82A404D0;
struct lock_82A404D0 {
    lock_vt_82A404D0 *vt;
};

typedef struct dev_82A404D0 dev_82A404D0;
typedef struct {
    void *pad[14];
    int (*create)(dev_82A404D0 *self, int arg, void *out);
} dev_vt_82A404D0;
struct dev_82A404D0 {
    dev_vt_82A404D0 *vt;
};

typedef struct {
    unsigned char pad[0x2c];
    lock_82A404D0 lock_a;
    unsigned char pad30[0x20];
    lock_82A404D0 lock_b;
    unsigned char pad54[0x50];
    int created;
    int state;
    int out;
    dev_82A404D0 *dev;
    unsigned char padb4[0x104];
    void *p1b8;
    unsigned char pad1bc[0x58];
    int arg;
} obj_82A404D0;

extern void fn_82A40238(int *hr);

int fn_82A404D0(obj_82A404D0 *param_1)
{
    lock_82A404D0 *a = &param_1->lock_a;
    lock_82A404D0 *b;
    int hr;

    a->vt->lock(a);
    b = &param_1->lock_b;
    hr = 0;
    b->vt->lock(b);
    if (param_1->created == 0) {
        if (param_1->p1b8 != 0) {
            hr = param_1->dev->vt->create(param_1->dev, param_1->arg, &param_1->out);
            if (hr < 0) goto done;
            param_1->state = 2;
        }
        param_1->created = 1;
    }
done:
    b->vt->unlock(b);
    a->vt->unlock(a);
    fn_82A40238(&hr);
    return hr;
}
