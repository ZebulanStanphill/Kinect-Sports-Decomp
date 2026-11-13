void fn_82BD8558(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  __int64 lVar3;
  int iVar4;
  
  lVar3 = *(__int64 *)(param_1 + 0x10);
  *(unsigned __int64 *)(param_1 + 0x10) = 0;
  piVar2 = (int *)(param_1 + 0x188);
  uVar1 = ((param_2 & 0xffff) - (unsigned int)*(unsigned short *)(param_1 + 0x44)) + 0x800;
  *(unsigned int *)(param_1 + 0x138) = 0;
  *(unsigned int *)(param_1 + 0x130) = 0;
  *(__int64 *)(param_1 + 0x18) = lVar3 + *(__int64 *)(param_1 + 0x18);
  *(short *)(param_1 + 0x20) =
       (short)uVar1 -
       (short)(((__int64)((int)uVar1 >> 0xb) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 0x7ff) != 0)
               & 0xffffffff) << 0xb);
  iVar4 = *(int *)(param_1 + 0x188);
  if (iVar4 == 0) {
    return;
  }
  if (iVar4 == *(int *)(param_1 + 0x18c)) {
    *(unsigned int *)(param_1 + 0x18c) = 0;
  }
  *piVar2 = *(int *)(iVar4 + 4);
  *(unsigned int *)(iVar4 + 4) = 0;
  if (iVar4 == 0) {
    return;
  }
  do {
    *(unsigned int *)(iVar4 + 4) = 0;
    if (*(int *)(param_1 + 0x184) == 0) {
      *(int *)(param_1 + 0x180) = iVar4;
    }
    else {
      *(int *)(*(int *)(param_1 + 0x184) + 4) = iVar4;
    }
    *(int *)(param_1 + 0x184) = iVar4;
    iVar4 = *piVar2;
    if (iVar4 == 0) {
      return;
    }
    if (iVar4 == *(int *)(param_1 + 0x18c)) {
      *(unsigned int *)(param_1 + 0x18c) = 0;
    }
    *piVar2 = *(int *)(iVar4 + 4);
    *(unsigned int *)(iVar4 + 4) = 0;
  } while (iVar4 != 0);
  return;
}

