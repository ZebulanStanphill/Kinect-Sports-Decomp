typedef struct Obj_82874CE0 {
  int (**vt)(struct Obj_82874CE0 *, void *, void *, void *, void *);
} Obj_82874CE0;

typedef struct Entry_82874CE0 {
  char kind;
  char pad1[3];
  Obj_82874CE0 obj;    /* 0x04 */
  char pad8[0x68];
} Entry_82874CE0;

typedef struct List_82874CE0 {
  int pad0;
  Entry_82874CE0 *begin;   /* 0x04 */
  Entry_82874CE0 *end;     /* 0x08 */
} List_82874CE0;

typedef struct Dest_82874CE0 {
  int a;
  int b;
} Dest_82874CE0;

typedef struct Locals_82874CE0 {
  char a[8];
  char b[16];
  char c[16];
  char d[16];
  char e[16];
} Locals_82874CE0;

extern void fn_82834EA0(void *tmp, Dest_82874CE0 *dst, int a, int b);
extern void fn_82835208(Dest_82874CE0 *dst, void *item);

int fn_82874CE0(List_82874CE0 *list, Dest_82874CE0 *dst)
{
  Locals_82874CE0 l;
  Entry_82874CE0 *e;
  fn_82834EA0(l.a, dst, dst->a, dst->b);
  for (e = list->begin; e != list->end; e++) {
    if (e->kind == 1) {
      if ((*e->obj.vt)(&e->obj, l.b, l.e, l.d, l.c) >= 0) {
        fn_82835208(dst, l.b);
      }
    }
  }
  return 0x20260000;
}
