typedef struct Out_828D9A58 { int a; unsigned char flag; unsigned cap; } Out_828D9A58;
extern int fn_823AA970(void *);
extern unsigned fn_82882110(int);
extern int fn_82882158();
extern int fn_82897BD0(void *);

Out_828D9A58 *fn_828D9A58(Out_828D9A58 *p, void *a)
{
  int v;
  unsigned n;
  unsigned cap;

  p->a = fn_823AA970(a);
  v = fn_82897BD0(a);
  if (v != -1 && fn_82882158() == -1) {
    p->flag = 1;
    n = fn_82882110(v);
    p->cap = n;
    if (n > 0xf) { p->cap = 0xf; return p; }
  } else {
    p->flag = 0;
    p->cap = 0;
    return p;
  }
  return p;
}
