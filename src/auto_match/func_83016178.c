typedef struct Ent { int a; int b; } Ent;
typedef struct Obj { char pad[0x1c]; Ent *begin; Ent *end; Ent *cap; } Obj;
extern void fn_82FA5190(int heap, void *p);
extern int lbl_831BC768;

void fn_83016178(Obj *p)
{
    Ent *e;
    for (e = p->begin; e != p->end; e++) {
        fn_82FA5190(lbl_831BC768, (void *)e->b);
    }
    if (p->begin != 0) {
        p->end = p->begin;
        fn_82FA5190(lbl_831BC768, p->begin);
        p->begin = 0;
        p->end = 0;
        p->cap = 0;
    }
}
