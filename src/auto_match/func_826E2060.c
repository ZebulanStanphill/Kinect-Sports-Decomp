extern unsigned int *auStack_20;
extern int fn_826AA460();
extern int fn_826E1778();
extern int fn_826FB010();


void fn_826E2060(int param_1)

{
  unsigned int uVar1;
  unsigned int auStack_20 [2];
  
  uVar1 = fn_826E1778();
  fn_826FB010(uVar1,param_1);
  auStack_20[0] = (unsigned int)uVar1;
  fn_826AA460(*(int *)(param_1 + 0x2e8) * 0xc + param_1 + 0x2f0,auStack_20);
  return;
}

