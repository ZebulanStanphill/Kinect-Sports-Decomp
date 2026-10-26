extern void fn_822315A0(void *p);
extern void fn_82359C18(void *p);
extern unsigned int lbl_821AE4C4;
extern unsigned int lbl_821AF1C8;
extern unsigned int lbl_821C7FB8;

typedef struct Sub {
    void *vt;
    int pad4;
    char inner[4];
} Sub;

typedef struct S {
    void *vt;
    int pad[6];
    void *ref;
    int pad2[4];
    Sub sub;
} S;

void fn_822EFDD8(S *p)
{
    Sub *sub;
    p->vt = &lbl_821AE4C4;
    sub = &p->sub;
    fn_82359C18(sub->inner);
    sub->vt = &lbl_821C7FB8;
    if (p->ref != 0)
        fn_822315A0(p->ref);
    p->vt = &lbl_821AF1C8;
}
