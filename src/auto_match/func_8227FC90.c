typedef struct Rep_8227FC90 Rep_8227FC90;

typedef struct Ref_8227FC90 {
    void *ptr;
    Rep_8227FC90 *rep;
} Ref_8227FC90;

typedef struct Val_8227FC90 {
    int a;
    int b;
    unsigned int c;
    int d;
} Val_8227FC90;

extern void *memset(void *, int, unsigned int);
extern void fn_8227F818(void *self, void *p2, unsigned short *text);
extern int fn_82528BF8(void *converter, const char *src, unsigned short *buf, int size, int a, int b);
extern void fn_82273CD8(Val_8227FC90 *, int);
extern void fn_82273C88(Val_8227FC90 *);
extern void **fn_82279C58(Ref_8227FC90 *, void *);
extern void fn_82672C20(void *, const char *, Val_8227FC90 *, int);
extern void fn_822315A0(Rep_8227FC90 *);
extern unsigned short lbl_820E975C;
extern void *lbl_821A89BC;
extern void *lbl_83276728[3];

void *fn_8227FC90(void *self, void *p2, unsigned int value)
{
    Val_8227FC90 items[2];
    unsigned short text[0x100];
    Ref_8227FC90 ref;
    Val_8227FC90 *p;
    int i;

    fn_8227F818(self, p2, &lbl_820E975C);
    *(void **)self = &lbl_821A89BC;
    for (i = 0; i < 2; i++) {
        items[i].a = 0;
        items[i].b = 0;
    }
    text[0] = lbl_820E975C;
    memset(text + 1, 0, 0x1fe);
    fn_82528BF8(lbl_83276728[1], "loading_gameloading", text, 0x100, 0, 1);
    fn_82273CD8(&items[0], 5);
    items[0].c = (unsigned int)text;
    fn_82273CD8(&items[1], 5);
    items[1].c = value;
    fn_82672C20(*fn_82279C58(&ref, self), "_root.SetText", items, 2);
    if (ref.rep != 0)
        fn_822315A0(ref.rep);
    p = items + 2;
    i = 1;
    do {
        p--;
        fn_82273C88(p);
        i--;
    } while (i >= 0);
    return self;
}
