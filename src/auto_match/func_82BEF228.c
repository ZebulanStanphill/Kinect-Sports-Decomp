extern int fn_82BE5240();


unsigned __int64 fn_82BEF228(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    *(unsigned int *)(param_1 + 0x10) = 1;
    uVar2 = fn_82BE5240(param_1,0x193,0xffffffff820eb198);
    return uVar2;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x10);
  if (iVar1 == 0x17) {
    uVar3 = 0x12;
  }
  else {
    if (iVar1 != 0x18) {
      return 0;
    }
    if (*(int *)(param_1 + 0x34) == 2) {
      fn_82BE5240(param_1,0x194,0xffffffff82196582);
      uVar3 = 0;
      *(unsigned int *)(param_1 + 0x30) = 0;
    }
    else {
      fn_82BE5240(param_1,0x194,0xffffffff82196582);
      uVar3 = 0x14;
    }
  }
  *(unsigned int *)(param_1 + 0x10) = uVar3;
  return 0;
}

