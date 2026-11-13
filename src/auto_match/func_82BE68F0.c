extern unsigned int *auStack_20;
extern int fn_82BE5E88();
extern int fn_82BE6410();


void fn_82BE68F0(int param_1)

{
  unsigned int uVar1;
  unsigned short auStack_20 [4];
  
  uVar1 = *(unsigned int *)(param_1 + 0x20);
  auStack_20[0] = 0;
  fn_82BE5E88(param_1,param_1 + 0x30,auStack_20);
  fn_82BE6410(param_1,uVar1,(unsigned __int64)auStack_20[0] + 2);
  return;
}

