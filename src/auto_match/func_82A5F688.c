typedef unsigned char bool;
extern int fn_8265C990();
extern int fn_82A5F060();
extern int fn_82A5F298();
extern int fn_82A5F578();


unsigned __int64 fn_82A5F688(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  bool bVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  uVar2 = (**(int (***)())(*param_1 + 0x34))(param_1,param_2,0);
  if ((__int64)uVar2 < 0) {
    return 0xffffffff80070057;
  }
  iVar3 = fn_82A5F060(param_3);
  if (iVar3 == 0) {
    uVar2 = 0xffffffff80070057;
  }
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  bVar1 = param_4 != (unsigned int *)0x0;
  if (bVar1) {
    param_3 = fn_82A5F298(param_3);
    uVar2 = -(unsigned __int64)(param_3 == 0) & 0xffffffff8007000e;
  }
  if ((((int)uVar2 < 0) ||
      (uVar2 = (**(int (***)())(*param_1 + 0x34))(param_1,param_3,bVar1), (__int64)uVar2 < 0)) ||
     (uVar2 = fn_82A5F578(param_1,param_2,param_3,bVar1), (__int64)uVar2 < 0)) {
    if (!bVar1) {
      return uVar2;
    }
    if ((param_3 & 0xffffffff) == 0) {
      return uVar2;
    }
    if ((int)uVar2 == -0x7768ffff) {
      *param_4 = (int)param_3;
      return uVar2;
    }
  }
  else if (!bVar1) {
    return uVar2;
  }
  fn_8265C990(param_3,0x20970000);
  return uVar2;
}

