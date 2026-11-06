struct Base_827234B8;
typedef struct BaseVT_827234B8 {
    int pad[2];
    int (*f8)(struct Base_827234B8 *);
} BaseVT_827234B8;
typedef struct Base_827234B8 {
    BaseVT_827234B8 *vt;
} Base_827234B8;
struct Dev_827234B8;
typedef struct Rc_827234B8 {
    int first;
    int pad;
    int count;
} Rc_827234B8;
typedef struct DevVT_827234B8 {
    int pad[0x40 / 4];
    struct Dev_827234B8 *(*f40)(struct Obj_827234B8 *);
} DevVT_827234B8;
typedef struct Dev_827234B8 {
    char pad[0xb00];
    unsigned int flags;
} Dev_827234B8;
typedef struct Obj_827234B8 {
    DevVT_827234B8 *vt;
    char pad0[0xa0 - 4];
    void *fa0;
    char pad1[0xd0 - 0xa4];
    int *fd0;
} Obj_827234B8;
typedef struct Self_827234B8 {
    char pad0[8];
    Base_827234B8 *base;
    char pad1[0x18 - 0xc];
    int val;
    int count;
} Self_827234B8;
extern int fn_826957D0(Self_827234B8 *, int);
extern void fn_82696D38(Rc_827234B8 **, int, int, int, int);
extern void fn_82799FF8(void *, int, int);
extern void fn_826944C8(Rc_827234B8 *);

void fn_827234B8(Self_827234B8 *self)
{
    if (self->base != 0) {
        if (self->base->vt->f8(self->base) == 4) {
            Obj_827234B8 *o;
            Rc_827234B8 *rc;
            unsigned char ok;
            int v;
            int n;
            Rc_827234B8 *r;
            int t;
            Dev_827234B8 *dev;

            if (self->base != 0)
                o = (Obj_827234B8 *)((char *)self->base - 0x68);
            else
                o = 0;
            if (o->fd0 == 0 || *o->fd0 == 0)
                ok = 0;
            else
                ok = 1;
            if (ok == 0 && self->count >= 1) {
                v = self->val;
                t = fn_826957D0(self, 0);
                fn_82696D38(&rc, t, v, -1, 0);
                fn_82799FF8(o->fa0, rc->first, -1);
                dev = o->vt->f40(o);
                if (dev != 0)
                    dev->flags = dev->flags | 0x400;
                r = rc;
                n = r->count - 1;
                r->count = n;
                if (n == 0)
                    fn_826944C8(r);
            }
        }
    }
}
