typedef struct Rc_826D3D00 { int a; int b; int refs; } Rc_826D3D00;
typedef struct Dst_826D3D00 { unsigned char kind; } Dst_826D3D00;
typedef struct Obj_826D3D00 {
    int pad0;
    Dst_826D3D00 *dst;
    int pad1[4];
    int f18;
    int f1c;
} Obj_826D3D00;
typedef struct L_826D3D00 { void *p; int pad[15]; int f40; int rest[5]; } L_826D3D00;
typedef struct Char_826D3D00 Char_826D3D00;
typedef struct {
    int pad[63];
    void (*fc)(Char_826D3D00 *, int, int, int);
} CharVt_826D3D00;
struct Char_826D3D00 { CharVt_826D3D00 *vt; };
typedef struct Item_826D3D00 Item_826D3D00;
typedef struct {
    int pad[5];
    void (*f14)(Item_826D3D00 *, int);
} ItemVt_826D3D00;
struct Item_826D3D00 {
    ItemVt_826D3D00 *vt;
    int refs;
    unsigned char pad[0x5e];
    unsigned char flags66;
};
extern char lbl_831552E0[];
extern float lbl_83155190[];
extern void fn_826959C8(Dst_826D3D00 *);
extern void *fn_826C59F8(Obj_826D3D00 *);
extern int fn_826957D0(Obj_826D3D00 *, int);
extern float fn_826972E0(int, int);
extern void *fn_82681BF8(L_826D3D00 *, int *, int, unsigned char, const void *, unsigned char, const float *,
                         float, unsigned short, unsigned char, int);
extern void fn_82696D38(Rc_826D3D00 **, int, int, int, int);
extern Item_826D3D00 *fn_826D2B68(void *, L_826D3D00 *, Rc_826D3D00 **, int, int, int, int, int, int);
extern void fn_826944C8(Rc_826D3D00 *);
extern void fn_82696480(Dst_826D3D00 *, Char_826D3D00 *);
extern void fn_8267C498(void *);

void fn_826D3D00(Obj_826D3D00 *self)
{
    Dst_826D3D00 *d;
    void *ctx;
    int kind;
    L_826D3D00 l;
    Rc_826D3D00 *rc;
    Item_826D3D00 *item;
    Char_826D3D00 *ch;
    int v;
    int t;

    d = self->dst;
    fn_826959C8(d);
    d->kind = 0;
    ctx = fn_826C59F8(self);
    if (ctx != 0 && self->f1c >= 6) {
        kind = 0x10002;
        fn_82681BF8(&l, &kind, (int)fn_826972E0(fn_826957D0(self, 1), self->f18) + 0x4000, 1, lbl_831552E0, 1,
                    lbl_83155190, 0.0f, 0, 0, 0);
        if (l.f40 >= 0 && l.f40 <= 0x7efffffd) {
            v = self->f18;
            t = fn_826957D0(self, 0);
            fn_82696D38(&rc, t, v, -1, 0);
            item = fn_826D2B68(ctx, &l, &rc, 0, 0, -1, 1, 0, 0);
            if (item != 0) {
                item->refs++;
            }
            {
                Rc_826D3D00 *r = rc;
                if (--r->refs == 0) {
                    fn_826944C8(r);
                }
            }
            if (item != 0) {
                item->vt->f14(item, 0);
                ch = (item->flags66 & 0x80) ? (Char_826D3D00 *)item : 0;
                ch->vt->fc(ch, 0, fn_826957D0(self, 2), 0);
                ch->vt->fc(ch, 1, fn_826957D0(self, 3), 0);
                ch->vt->fc(ch, 8, fn_826957D0(self, 4), 0);
                ch->vt->fc(ch, 9, fn_826957D0(self, 5), 0);
                fn_82696480(self->dst, ch);
                fn_8267C498(item);
            }
        }
        if (l.p != 0) {
            fn_8267C498(l.p);
        }
    }
}
