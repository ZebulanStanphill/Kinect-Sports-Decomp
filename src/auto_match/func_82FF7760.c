typedef struct { int a, b, c; } Triple;
extern int fn_82FF8358(void *, Triple *);
char fn_82FF7760(char *p, int a, int b, int c)
{
  Triple t;
  t.a = a;
  t.b = b;
  t.c = c;
  return (fn_82FF8358(p + 0x30, &t) == 0) + 1;
}
