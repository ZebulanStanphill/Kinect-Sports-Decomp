extern unsigned int *auStack_20;
extern int fn_82D00310();


unsigned __int64 fn_82E14240(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int auStack_20 [4];
  
  uVar1 = fn_82D00310(param_1,param_2,auStack_20);
  if ((int)uVar1 == 0) {
    *param_3 = auStack_20[0];
    return uVar1;
  }
  return 1;
}

