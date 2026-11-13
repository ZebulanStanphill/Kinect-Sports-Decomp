extern int fn_826829A0();
extern int fn_826B14D8();
extern int fn_826C0B08();
extern unsigned int lbl_82010F60;
extern unsigned int lbl_82010FB4;


typedef struct { int a; int b; } Tail_82728610;
unsigned int *fn_82728610(unsigned int *param_1,int param_2)
{
  unsigned int uVar1;
  Tail_82728610 *t;
  fn_826C0B08();
  *param_1 = (unsigned int)&lbl_82010FB4;
  param_1[4] = (unsigned int)&lbl_82010F60;
  t = (Tail_82728610 *)(param_1 + 0xc);
  t->a = 0;
  t->b = 0;
  uVar1 = fn_826B14D8(*(unsigned int *)(param_2 + 0x78),10);
  fn_826829A0(param_1 + 4,param_2 + 0x78,uVar1);
  return param_1;
}
