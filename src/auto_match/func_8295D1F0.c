extern int fn_8295A330();


unsigned int fn_8295D1F0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int uVar2;
  
  uVar2 = fn_8295A330(param_1,param_2 | param_3);
  uVar2 = (int)uVar2 >> 0x1f & uVar2;
  if (-1 < (int)uVar2) {
    if ((param_4 & 0xffffffff) != 0) {
      uVar2 = fn_8295A330(param_1,param_4);
      uVar2 = (int)uVar2 >> 0x1f & uVar2;
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      iVar1 = *(int *)(param_1 + 0x11c) * 4;
      *(unsigned int *)(iVar1 + *(int *)(param_1 + 0x110)) =
           *(unsigned int *)(iVar1 + *(int *)(param_1 + 0x110)) | 0x10000000;
    }
    uVar2 = 0;
  }
  return uVar2;
}

