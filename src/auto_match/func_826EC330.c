typedef struct Iface_826EC330 { struct { char pad[0x44]; void (*f44)(void *, void *, int); } *vt; } Iface_826EC330;
typedef struct Sub_826EC330 { Iface_826EC330 *p; int q; } Sub_826EC330;
typedef struct Self_826EC330 { char pad[0x14]; void *f14; char pad2[8]; Sub_826EC330 s; } Self_826EC330;
extern void fn_8267BE38(void *);

Self_826EC330 *fn_826EC330(Self_826EC330 *self, unsigned int flags)
{
    Sub_826EC330 *s = &self->s;
    if (s->p != 0) {
        s->p->vt->f44(s->p, s, 2);
    }
    s->p = 0;
    s->q = 0;
    fn_8267BE38(self->f14);
    if ((flags & 1) != 0) {
        fn_8267BE38(self);
    }
    return self;
}
