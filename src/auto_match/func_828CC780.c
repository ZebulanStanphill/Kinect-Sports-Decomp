extern void fn_82240D08(void *p);
extern void fn_82898968(void *a, void *b);
extern void fn_828B55B0(void *p);
extern void fn_828BDE70(void *p);
extern char lbl_82023ABC[];
extern char lbl_82023AC0[];
extern char lbl_82023C3C[];

typedef struct Sub {
    void *vt;
    int f4;
    char m8[4];
} Sub;

typedef struct Obj {
    void *vt;
    char pad4[0x4c];
    void *vt50;
    char pad54[0x30];
    void *owner;
    char m88[0x10];
    Sub sub;
} Obj;

static void Sub_dtor(Sub *s)
{
    s->vt = lbl_82023C3C;
    fn_828B55B0(s->m8);
}

void fn_828CC780(Obj *p)
{
    p->vt = lbl_82023AC0;
    p->vt50 = lbl_82023ABC;
    if (p->owner != 0) {
        fn_82898968(p->owner, p);
    }
    Sub_dtor(&p->sub);
    fn_82240D08(p->m88);
    fn_828BDE70(p);
}
