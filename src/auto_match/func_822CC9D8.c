extern void fn_822C18B8(void *p);
extern void fn_82359C18(void *p);
extern void fn_8251FA58(void *p);
extern void fn_82552B50(void *p, int n);
extern char lbl_821AD208[];
extern char lbl_821C7FB8[];

typedef struct Sub {
    void *vtbl;
    int pad4;
    char inner[8];
} Sub;

typedef struct Obj {
    void *vtbl;
    int pad4[3];
    char a[0xc];
    void *p1c;
    char b[0x18];
    Sub sub;
} Obj;

void fn_822CC9D8(Obj *p)
{
    Sub *s;
    p->vtbl = lbl_821AD208;
    fn_82552B50(p->a, 1);
    if (p->p1c != 0) {
        fn_8251FA58(p->p1c);
        p->p1c = 0;
    }
    s = &p->sub;
    fn_82359C18(s->inner);
    s->vtbl = lbl_821C7FB8;
    fn_822C18B8(p->b);
}
