extern int fn_82FA5190();
extern int fn_83032E20();
extern int fn_83033D28();
extern unsigned int lbl_831BC768;
typedef struct { unsigned int pad; struct Vec { struct Item *begin; struct Item *end; unsigned int cap; } v; } Obj;
typedef struct Item { int pad[3]; unsigned int a; unsigned int b; } Item;
void fn_83032CF8(Obj *p){ Item *e; struct Vec *v = &p->v;
 for (e = v->begin; e != p->v.end; e++) { if (e->a != 0 && e->b != 0) fn_83033D28(e->a, e->b); }
 if (v->begin != 0) { fn_83032E20(v); fn_82FA5190(lbl_831BC768, (unsigned)v->begin); v->begin = 0; v->end = 0; v->cap = 0; } }