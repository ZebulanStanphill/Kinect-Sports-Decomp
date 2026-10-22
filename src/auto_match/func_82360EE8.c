typedef unsigned int uint;
extern int fn_823BC1B8();
extern uint *fn_8265C9E0(int);
extern uint lbl_821B28C4;

typedef struct {
  uint a, b, c, d, e, f;
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

uint *fn_82360EE8(uint *param_1)
{
  uint *p;
  p = fn_8265C9E0(0x48);
  if (p != 0) {
    fn_823BC1B8(p, param_1);
    *p = (uint)&lbl_821B28C4;
    Zeroed_init((Zeroed *)(p + 12));
    return p;
  }
  return 0;
}
