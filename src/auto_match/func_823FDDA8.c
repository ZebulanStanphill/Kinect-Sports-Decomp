typedef struct SP_823FDDA8 { int a; unsigned b; } SP_823FDDA8;
extern void fn_822315A0(unsigned);
extern void fn_82365BD8(int *, int);
extern unsigned char fn_8223AAC0(unsigned);
extern unsigned int lbl_821B7414;

int *fn_823FDDA8(int *param_1,int param_2,int param_3,int param_4,int param_5,SP_823FDDA8 *param_6,int param_7,int param_8,int param_9)
{
  SP_823FDDA8 *d;
  unsigned b;
  int a;
  param_1[1] = 0;
  *param_1 = (int)&lbl_821B7414;
  fn_82365BD8(param_1 + 10, param_2);
  fn_82365BD8(param_1 + 0xc, param_3);
  fn_82365BD8(param_1 + 0xe, param_4);
  fn_82365BD8(param_1 + 0x10, param_5);
  d = (SP_823FDDA8 *)(param_1 + 0x12);
  d->a = 0;
  d->b = 0;
  b = param_6->b;
  a = param_6->a;
  if (b != 0 && fn_8223AAC0(b) != 0) {
    if (d->b != 0) fn_822315A0(d->b);
    d->b = b;
    d->a = a;
  }
  fn_82365BD8(param_1 + 0x14, param_7);
  fn_82365BD8(param_1 + 0x16, param_8);
  fn_82365BD8(param_1 + 0x18, param_9);
  if (*(unsigned int *)(param_2 + 4) != 0) fn_822315A0(*(unsigned int *)(param_2 + 4));
  if (*(unsigned int *)(param_3 + 4) != 0) fn_822315A0(*(unsigned int *)(param_3 + 4));
  if (*(unsigned int *)(param_4 + 4) != 0) fn_822315A0(*(unsigned int *)(param_4 + 4));
  if (*(unsigned int *)(param_5 + 4) != 0) fn_822315A0(*(unsigned int *)(param_5 + 4));
  if (param_6->b != 0) fn_822315A0(param_6->b);
  if (*(unsigned int *)(param_7 + 4) != 0) fn_822315A0(*(unsigned int *)(param_7 + 4));
  if (*(unsigned int *)(param_8 + 4) != 0) fn_822315A0(*(unsigned int *)(param_8 + 4));
  if (*(unsigned int *)(param_9 + 4) != 0) fn_822315A0(*(unsigned int *)(param_9 + 4));
  return param_1;
}
