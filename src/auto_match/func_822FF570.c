extern void fn_82233888(void *p);
extern void fn_822FF888(void *p);
extern void fn_82359C18(void *p);
extern void fn_8289D4C0(void *p);
extern char lbl_82197100[];
extern char lbl_821AEC2C[];
extern char lbl_821AECA0[];

typedef struct Inner {
    void *vtbl;
} Inner;

typedef struct Sub {
    void *vtbl;
    char pad4[0x14];
    char m18[0x18];
    Inner in;
} Sub;

typedef struct Obj {
    void *vtbl;
    char pad[0x1ec];
    Sub sub;
} Obj;

void fn_822FF570(Obj *p)
{
    Sub *s;
    p->vtbl = lbl_821AECA0;
    s = &p->sub;
    s->in.vtbl = lbl_82197100;
    fn_8289D4C0(&s->in);
    s->vtbl = lbl_821AEC2C;
    fn_82359C18(s->m18);
    fn_822FF888(s);
    fn_82233888(p);
}
