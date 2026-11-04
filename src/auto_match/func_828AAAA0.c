extern void fn_8224E978(void *, void *);
extern void fn_8265CA20(void *);
extern int fn_82881EE8(void);
extern void fn_82895158(void *);
extern void fn_82897BD0(int);
extern void fn_828AA838(void *);
extern void fn_828EA5F0(int, int);
extern int fn_828EBB90(void *, void *, int, int);
extern char lbl_820244C8[];

struct Obj_828AAAA0;
struct Sub_828AAAA0;
typedef struct {
    int f0;
    struct Obj_828AAAA0 *(*f4)(struct Obj_828AAAA0 *);
} VT_828AAAA0;
typedef struct Obj_828AAAA0 {
    VT_828AAAA0 *vt;
    char pad[0x34 - 4];
    char *p34;
    char pad2[0x68 - 0x38];
    int h68;
} Obj_828AAAA0;
typedef struct Iface_828AAAA0 {
    struct {
        char pad[0x3c];
        int (*f3c)(struct Iface_828AAAA0 *);
    } *vt;
} Iface_828AAAA0;
typedef struct Iface2_828AAAA0 {
    struct {
        char pad[0x40];
        void (*f40)(struct Iface2_828AAAA0 *, unsigned __int64 *);
    } *vt;
} Iface2_828AAAA0;
typedef struct {
    char buf[16];
    unsigned size;
    unsigned cap;
} Str_828AAAA0;

Obj_828AAAA0 *fn_828AAAA0(Obj_828AAAA0 *self)
{
    int h;
    unsigned char flag;
    unsigned __int64 t;
    unsigned __int64 pair;
    char *o;
    Str_828AAAA0 s;
    Iface_828AAAA0 *ifc;
    Iface2_828AAAA0 *sub;

    fn_82895158(self);
    self->vt = (VT_828AAAA0 *)lbl_820244C8;
    fn_82897BD0(*(int *)(self->p34 + 0x38));
    h = fn_82881EE8();
    o = (char *)self->vt->f4(self);
    sub = (Iface2_828AAAA0 *)(o + 0x48);
    sub->vt->f40(sub, &t);
    pair = t;
    o = (char *)self->vt->f4(self);
    ifc = (Iface_828AAAA0 *)(o + 0xf0);
    flag = (unsigned char)ifc->vt->f3c(ifc);
    fn_8224E978(&s, (char *)self->vt->f4(self) + 0x9c);
    self->h68 = fn_828EBB90(&s, &pair, flag, h);
    if (s.cap >= 0x10) {
        fn_8265CA20(*(void **)s.buf);
    }
    s.size = 0;
    s.cap = 0xf;
    s.buf[0] = 0;
    ifc = (Iface_828AAAA0 *)(self->p34 + 0x240);
    fn_828EA5F0(self->h68, ifc->vt->f3c(ifc));
    fn_828AA838(self);
    return self;
}
