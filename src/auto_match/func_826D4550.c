typedef struct Link Link;
struct Link {
    Link *next;
    Link *prev;
    unsigned int refs;
};

typedef struct Sub {
    void *data;
    void *extra;
} Sub;

typedef struct RC {
    int count;
} RC;

typedef struct Dev {
    char pad[0xb00];
    unsigned int flags;
} Dev;

typedef struct Obj {
    void *vt0;
    char pad4[8];
    void *vtc;
    char pad10[0x68 - 0x10];
    void *vt68;
    char pad6c[0x9c - 0x6c];
    void *x9c;
    Dev *dev;
    void *xa4;
    Sub sub;
    char padb0[0xc0 - 0xb0];
    void *xc0;
    char padc4[0xd0 - 0xc4];
    char xd0[0x1ac - 0xd0];
    Link *link;
    void *x1b0;
    void *x1b4;
    void *x1b8;
    char pad1bc[4];
    RC *rc;
    char pad1c4[4];
    void *x1c8;
} Obj;

extern void fn_8267BE38(void *);
extern void fn_8267C498(void *);
extern void fn_826824B0(void *);
extern void fn_82687270(void *);
extern void fn_82699AD0(Sub *);
extern void fn_8269A608(RC *);
extern void fn_826A1370(Obj *);
extern void *fn_826C58D8(Obj *);
extern void *fn_826C59A0(Obj *);
extern void fn_826C6480(void *, int);
extern void fn_826C78F0(void *, int);
extern void fn_826C8F60(Link *, int);
extern void fn_826CE308(void *);
extern void fn_826D4010(void *);
extern void fn_826DF960(void *, void *);
extern char lbl_8200C1D8[];
extern char lbl_8200C22C[];
extern char lbl_8200C238[];

void fn_826D4550(Obj *p)
{
    void *q;
    Link *l;
    RC *rc;
    Sub *s;

    p->vt0 = lbl_8200C238;
    p->vtc = lbl_8200C22C;
    p->vt68 = lbl_8200C1D8;
    if (fn_826C58D8(p) != 0) {
        fn_826C78F0(p, 0);
    }
    q = fn_826C59A0(p);
    if (q != 0) {
        fn_826C78F0(q, 0);
    }
    if (p->link != 0) {
        p->link->refs--;
        l = p->link;
        if (l->refs == 0) {
            l->next->prev = l->prev;
            l->prev->next = l->next;
            if (p->link != 0) {
                fn_826C8F60(p->link, 1);
            }
        }
    }
    q = p->x1b4;
    if (q != 0) {
        fn_826CE308(q);
        fn_8267BE38(q);
    }
    s = &p->sub;
    fn_82699AD0(s);
    p->dev->flags |= 0x400;
    fn_8267BE38(p->xa4);
    if (p->x1c8 != 0) {
        fn_826C6480(p->x1c8, 1);
    }
    rc = p->rc;
    if (rc != 0) {
        if (--rc->count <= 0) {
            fn_8269A608(rc);
            fn_8267BE38(rc);
        }
    }
    if (p->x1b8 != 0) {
        fn_8267C498(p->x1b8);
    }
    if (p->x1b0 != 0) {
        fn_826824B0(p->x1b0);
    }
    fn_826D4010(p->xd0);
    fn_8267BE38(p->xc0);
    fn_826DF960(s->data, s->extra);
    fn_8267BE38(s->data);
    if (p->x9c != 0) {
        fn_82687270(p->x9c);
    }
    fn_826A1370(p);
}
