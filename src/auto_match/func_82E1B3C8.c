typedef struct { int a, b, c; } Sub;
typedef struct { int a; unsigned int b; unsigned int c; Sub s; int d; } Obj;
extern char *fn_82CE5410(void);
extern void fn_82CEAB00(Sub *s, int v, int z);

Obj *fn_82E1B3C8(Obj *p)
{
  char *g;
  p->a = 0;
  p->b = 0;
  p->c = 0x80000000;
  p->s.a = 0;
  p->s.b = 0;
  p->s.c = -1;
  g = fn_82CE5410();
  fn_82CEAB00(&p->s, *(int *)(g + 0x10), 0);
  p->d = -1;
  return p;
}
