typedef struct N { struct N *next; } N;
typedef struct S { int f0; int f4; int f8; N *fc; int f10; int f14; int f18; int f1c; int f20; int f24; int f28; int f2c; } S;
void fn_82D018E8(S *p)
{
  N *n = p->fc;
  p->f28 = p->f2c;
  if (n != 0) {
    N *e;
    p->f0 = 0;
    e = n;
    while (e->next != 0) { e = e->next; }
    e->next = (N*)p->f10;
    p->f20 = 0; p->f24 = 0; p->f8 = 0;
    {N *t = p->fc; p->fc = 0; p->f10 = (int)t;}
  }
}
