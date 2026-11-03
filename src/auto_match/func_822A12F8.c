typedef struct { int a; int b; int val; int d; } Val_822A12F8;
typedef struct { int *h; int p4; int p8; int pc; } Obj_822A12F8;
extern void fn_82273CD8(Val_822A12F8 *, int);
extern void fn_82273C88(Val_822A12F8 *);
extern void fn_82672C20(int *, const char *, Val_822A12F8 *, int);
extern void fn_8266F640(int *, int);
extern void fn_8266F628(int *, int);

void fn_822A12F8(Obj_822A12F8 *o, unsigned a, unsigned b)
{
  Val_822A12F8 v[2];
  Val_822A12F8 *p;
  int i;
  if (o->pc == 0 && a != 0 && b != 0) {
    for (i = 0; i < 2; i++) {
      v[i].a = 0;
      v[i].b = 0;
    }
    fn_82273CD8(&v[0], 5);
    v[0].val = a;
    fn_82273CD8(&v[1], 5);
    v[1].val = b;
    fn_82672C20(o->h, "_root.mc_panel.Open", v, 2);
    p = v + 2;
    i = 1;
    do {
      p--;
      fn_82273C88(p);
    } while (--i >= 0);
    fn_8266F640(o->h, 0);
    fn_8266F628(o->h, 0);
    o->p8 = 0;
    o->pc = 1;
  }
}
