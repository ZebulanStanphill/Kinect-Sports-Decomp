extern void *fn_8265C9E0(int);
extern void *fn_828252D0(int);

typedef struct { int a, b, c; } Inner;
typedef struct { int a, b, c; Inner *d; } Outer;

static Inner *Inner_ctor(Inner *p)
{
  p->a = 0;
  p->b = 0;
  p->c = 0;
  return p;
}

void fn_828261B0(int param_1, int param_2, int param_3, Outer **param_4)
{
  Inner *mem;

  *param_4 = (Outer *)fn_828252D0(0x10);
  (*param_4)->a = param_1;
  (*param_4)->b = param_2;
  (*param_4)->c = param_3;
  mem = (Inner *)fn_8265C9E0(0x10);
  (*param_4)->d = mem ? Inner_ctor(mem) : 0;
}
