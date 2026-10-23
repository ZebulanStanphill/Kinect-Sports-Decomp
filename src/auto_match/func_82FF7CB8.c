typedef struct Obj {
    int m0;
    void *begin;
    void *end;
    void *cap;
    char m10[0x30 - 0x10];
    char m30[0x6c - 0x30];
    char m6c[0xc];
    char m78[0xc];
} Obj;

extern void fn_82FA5190(void *heap, void *p);
extern void fn_82FA7D18(void *p);
extern void fn_82FB38A8(void *p);
extern void fn_82FF6828(Obj *p);
extern void fn_82FF7968(Obj *p, void *q);
extern void fn_82FF7B98(Obj *p, int a);
extern void *lbl_831BC768;

void fn_82FF7CB8(Obj *p)
{
    fn_82FF6828(p);
    fn_82FF7B98(p, 0);
    if (p->begin != 0) {
        p->end = p->begin;
        fn_82FA5190(lbl_831BC768, p->begin);
        p->begin = 0;
        p->end = 0;
        p->cap = 0;
    }
    fn_82FB38A8(p->m10);
    fn_82FA7D18(p->m30);
    fn_82FF7968(p, p->m6c);
    fn_82FF7968(p, p->m78);
}
