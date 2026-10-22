typedef struct {
  int a;
  int b;
  unsigned int pad : 18;
  unsigned int kind : 7;
  unsigned int rest : 7;
} S;

extern unsigned char fn_82AD1590(S *);

static unsigned char isSpecial(S *p)
{
  unsigned int k = p->kind;
  return (k >= 0x19 && k <= 0x1c) || (k >= 0x43 && k <= 0x47);
}

unsigned char fn_82AD15F0(S *param_1)
{
  return fn_82AD1590(param_1) || isSpecial(param_1);
}
