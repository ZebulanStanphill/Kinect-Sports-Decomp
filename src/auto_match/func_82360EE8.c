extern int fn_823BC1B8();
extern unsigned int *fn_8265C9E0(int);
extern unsigned int lbl_821B28C4;

typedef struct {
  unsigned int a, b, c, d, e, f;
} Zeroed;

static void Zeroed_init(Zeroed *z)
{
  z->a = 0;
  z->b = 0;
  z->c = 0;
  z->d = 0;
  z->e = 0;
  z->f = 0;
}

unsigned int *fn_82360EE8(unsigned int *param_1)
{
  unsigned int *p;
  p = fn_8265C9E0(0x48);
  if (p != 0) {
    fn_823BC1B8(p, param_1);
    *p = (unsigned int)&lbl_821B28C4;
    Zeroed_init((Zeroed *)(p + 12));
    return p;
  }
  return 0;
}
