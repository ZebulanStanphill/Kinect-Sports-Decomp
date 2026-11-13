extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern int fn_828005B0();


void fn_828006D8(unsigned int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int iVar1;
  unsigned int auStack_120 [4];
  unsigned int auStack_110 [64];
  
  auStack_120[0] = 0;
  auStack_110[0] = param_1;
  iVar1 = fn_828005B0(auStack_110,0,param_2,auStack_120);
  if (iVar1 == 1) {
    *param_3 = auStack_120[0];
  }
  return;
}

