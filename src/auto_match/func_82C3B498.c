extern unsigned int *auStack_30;
extern int fn_82C30370();


unsigned __int64 fn_82C3B498(int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int auStack_30;
  
  iVar1 = *param_1;
  uVar2 = 0;
  if (param_1[0x22] == 0x7fffffff) {
    param_1[0x23] = 0;
    uVar2 = fn_82C30370(param_1 + 0x38,6,&auStack_30);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    iVar4 = (-(unsigned int)((auStack_30 & 0x20) != 0) & 0xfffffffe) + 1;
    param_1[0x22] = iVar4;
    uVar3 = auStack_30;
    if (iVar4 == -1) {
      uVar3 = auStack_30 | 0xffffffc0;
    }
    *(unsigned int *)(iVar1 + 0x128) = *(int *)(iVar1 + 0x128) + uVar3;
    if (((int)uVar3 < -0x1f) || (0x1e < (int)uVar3)) {
      param_1[0x23] = 1;
    }
  }
  if (param_1[0x23] != 0) {
    do {
      uVar2 = fn_82C30370(param_1 + 0x38,5,&auStack_30);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (auStack_30 != 0x1f) {
        *(unsigned int *)(iVar1 + 0x128) = param_1[0x22] * auStack_30 + *(int *)(iVar1 + 0x128);
        return uVar2;
      }
      iVar4 = param_1[0x22] * 0x1f + *(int *)(iVar1 + 0x128);
      *(int *)(iVar1 + 0x128) = iVar4;
      if (iVar4 < 1) {
        *(unsigned int *)(iVar1 + 0x128) = 0x3e;
        return 0xffffffff80040002;
      }
    } while (param_1[0x23] != 0);
  }
  return uVar2;
}

