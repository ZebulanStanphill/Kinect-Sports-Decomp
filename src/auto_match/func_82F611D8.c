extern unsigned int *auStack_20;
extern int fn_82BFE8E0();


void fn_82F611D8(unsigned int *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int auStack_20 [4];
  
  auStack_20[0] = 0;
  iVar1 = fn_82BFE8E0(*param_1,auStack_20);
  if ((iVar1 >= 0) && (param_2 != (unsigned int *)0x0)) {
    *param_2 = auStack_20[0];
  }
  return;
}

