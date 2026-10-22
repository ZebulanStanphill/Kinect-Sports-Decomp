typedef struct VTable {
    void *f0;
    void *f4;
    void (*f8)(void *);
    void *fc;
    void *f10;
    void *f14;
    int (*f18)(void *);
} VTable;

typedef struct Iface {
    VTable *vt;
} Iface;

typedef struct Target {
    char pad0[0xd0];
    int d0;
    char pad1[0xdb - 0xd4];
    unsigned char db;
} Target;

typedef struct Info {
    char pad0[8];
    Target *target;
    unsigned char flags;
} Info;

typedef struct Obj {
    char pad0[0xc0];
    Iface iface;
    char pad1[0xfc - 0xc4];
    Info *info;
} Obj;

typedef struct Self {
    char pad0[8];
    int state;
    Obj *obj;
    int pad10;
    void *p14;
    char pad1[0x190 - 0x18];
    int a;
    int b;
} Self;

extern void fn_83037590(void **p);
extern void fn_8303A630(Info *info);

void fn_8301BD18(Self *self)
{
    Target *t;
    Obj *obj;

    if (self->a == 0 && self->b == 2) {
        if (self->obj != 0 && (t = self->obj->info->target) != 0) {
            t->d0 = 0;
            t->db &= 0x7f;
            return;
        }
    } else {
        obj = self->obj;
        if (obj != 0) {
            if ((obj->info->flags & 0x80) != 0) {
                if (self->p14 != 0) {
                    fn_83037590(&self->p14);
                } else {
                    obj->iface.vt->f8(&obj->iface);
                }
                if (self->obj->iface.vt->f18(&self->obj->iface) != 1) {
                    fn_8303A630(self->obj->info);
                    self->state = 2;
                }
            }
        }
    }
}
