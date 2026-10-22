typedef int (*code)();

typedef struct Obj { void **vtbl; } Obj;
typedef struct Item { int *a; int b; Obj *c; } Item;
typedef struct Vec { int pad; Item *begin; Item *end; } Vec;

void fn_82FB7F40(Vec *v)
{
  Item *p;

  for (p = v->begin; p != v->end; p++) {
    if ((p->a[7] == 0 || p->a[7] == 2) && p->c != 0) {
      ((void (*)(Obj *))p->c->vtbl[1])(p->c);
    }
  }
  v->end = v->begin;
}
