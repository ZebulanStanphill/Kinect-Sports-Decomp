typedef struct Del_824E1308 Del_824E1308;
typedef struct {
    void (*f0)(Del_824E1308 *, int);
} DelVT_824E1308;
struct Del_824E1308 {
    DelVT_824E1308 *vt;
};
typedef struct Holder_824E1308 Holder_824E1308;
typedef struct {
    char pad[0xc];
    void (*fc)(Holder_824E1308 *, int);
} HolderVT_824E1308;
struct Holder_824E1308 {
    HolderVT_824E1308 *vt;
};
typedef struct {
    char pad[0x10];
    Holder_824E1308 *h;
} Buf_824E1308;
typedef struct {
    char pad0[0x70];
    Buf_824E1308 buf;
    char pad1[0x88 - 0x84];
    Del_824E1308 *p88;
} Y_824E1308;
typedef struct {
    void *vt;
    void *f4;
} Sub_824E1308;
typedef struct {
    void *vt;
    void *f4;
    char pad[0xf0 - 8];
    Sub_824E1308 sub;
    char padf8[4];
    Y_824E1308 *y;
} Obj_824E1308;

extern void *lbl_821C1148;
extern void *lbl_821C1170;
extern void *lbl_821B5BEC;
extern void *lbl_821C0C34;
extern int fn_824CD030(void);
extern void fn_824E1F30(Obj_824E1308 *);
extern void fn_8265CA20(void *);
extern void fn_823B78E0(void *, void *);
extern void fn_824CC9E8(Obj_824E1308 *);

void fn_824E1308(Obj_824E1308 *o)
{
    Y_824E1308 *y;
    Del_824E1308 *d;
    Holder_824E1308 *h;
    Sub_824E1308 *s = &o->sub;

    o->vt = &lbl_821C1148;
    s->vt = &lbl_821C1170;
    if (fn_824CD030() != 0) {
        fn_824E1F30(o);
    }
    y = o->y;
    if (y != 0) {
        Buf_824E1308 *b;
        d = y->p88;
        if (d != 0) {
            d->vt->f0(d, 1);
        }
        b = &y->buf;
        h = b->h;
        if (h != 0) {
            h->vt->fc(h, (void *)h != (void *)b);
            b->h = 0;
        }
        fn_8265CA20(y);
    }
    s->vt = &lbl_821B5BEC;
    if (s->f4 != 0) {
        fn_823B78E0(s->f4, s);
    }
    o->vt = &lbl_821C0C34;
    fn_824CC9E8(o);
}
