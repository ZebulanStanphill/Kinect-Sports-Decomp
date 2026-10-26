extern int fn_8251F720(int, int);
typedef struct { int a; int b; } X;
X *fn_8255F880(X *p, int v)
{
  p->a = v;
  p->b = 0;
  p->b = fn_8251F720(v, 0);
  return p;
}
