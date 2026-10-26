typedef struct { int empty; int a; int b; int c; int pad[5]; void *x; } S;
extern S *fn_82292AE8(void);
extern void fn_822931D8(S *);

void fn_82292BC0(int a, int b, int c)
{
  S *s = fn_82292AE8();
  if (s->x != 0 && a != 0) {
    a = 0;
  }
  s->empty = (a == 0 && b == 0 && c == 0);
  s->a = a;
  s->b = b;
  s->c = c;
  fn_822931D8(s);
}
