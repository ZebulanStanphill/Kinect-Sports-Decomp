typedef struct Iface_82C067C8 Iface_82C067C8;
struct Iface_82C067C8 {
    int (*Method0)();
    void (*Release)(Iface_82C067C8 *self);
    int (*Method2)(Iface_82C067C8 *self);
};

typedef struct Obj_82C067C8 {
    Iface_82C067C8 *a;      /* 0x000 */
    int *flag;              /* 0x004 */
    Iface_82C067C8 *b;      /* 0x008 */
    int pad00C[0x84];       /* 0x00C */
    int f21C;               /* 0x21C */
    int f220;               /* 0x220 */
    int f224;               /* 0x224 */
    int pad228[9];          /* 0x228 */
    int f24C;               /* 0x24C */
    int pad250[4];          /* 0x250 */
    void *ctx;              /* 0x260 */
} Obj_82C067C8;

extern void fn_82C10B28(void *ctx, int size, void *p);
extern int fn_82C10CB0(int a, void *ctx, Iface_82C067C8 *obj);
extern int fn_82C10CC0(void *ctx, int a, int b, Iface_82C067C8 *obj);

int fn_82C067C8(Obj_82C067C8 *self, int p2, int p3, int p4, int p5, int p6, int p7)
{
    Iface_82C067C8 **pb = &self->b;
    Iface_82C067C8 *o;
    int hr;

    hr = fn_82C10CC0(self->ctx, p5, p6, *pb);
    if (hr >= 0) {
        o = *pb;
        hr = o->Method0(p5, p6, p7, self->ctx, o);
        if (hr >= 0) {
            hr = fn_82C10CB0(p2, self->ctx, self->a);
            if (hr >= 0) {
                o = self->a;
                hr = o->Method0(p2, *pb, self->flag, self->ctx, o);
                if (hr >= 0) {
                    *self->flag = 1;
                    self->f21C = p3;
                    self->f220 = p4;
                    self->f224 = p7;
                    self->f24C = 0;
                    o = self->a;
                    hr = o->Method2(o);
                }
            }
        }
    }
    if (hr != 0x80500000 && hr < 0) {
        o = self->a;
        if (o != 0 && o->Release != 0) {
            o->Release(o);
            fn_82C10B28(self->ctx, 8, self);
        }
        o = *pb;
        if (o != 0 && o->Release != 0) {
            o->Release(o);
            fn_82C10B28(self->ctx, 8, pb);
        }
    }
    return hr;
}
