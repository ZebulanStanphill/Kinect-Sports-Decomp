extern unsigned int *auStack_40;


unsigned __int64 fn_82E6E2E0(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 auStack_40 [8];
  
  if (param_4 == (unsigned int *)0x0) {
    return 0xffffffff80004003;
  }
  *param_4 = 0;
  if ((param_3 & 0xffffffff) == 0) {
    return 0;
  }
  if ((param_2 & 0xffffffff) == 0) {
    return 0xffffffff80004003;
  }
  auStack_40[0] = 0;
  uVar1 = (**(int (***)())(*param_1 + 0x10))(param_1,auStack_40);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  uVar3 = *(unsigned __int64 *)(param_1 + 6);
  if (auStack_40[0] < uVar3) {
    return 0xffffffffc00d36bb;
  }
  if ((((param_3 & 0xffffffff) + uVar3 <= auStack_40[0]) ||
      (param_3 = (auStack_40[0] & 0xffffffff) - (uVar3 & 0xffffffff), param_3 != 0)) &&
     (iVar2 = (**(int (***)())(*param_1 + 0x58))(param_1,param_2,param_3,param_4), iVar2 < 0)) {
    uVar1 = (**(int (***)())(*param_1 + 0x50))(param_1,*(unsigned __int64 *)(param_1 + 6));
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (param_1[0xe] == 0) {
      return 0xffffffffc00d36bb;
    }
    iVar2 = (**(int (***)())(*param_1 + 0x58))(param_1,param_2,param_3,param_4);
    if (iVar2 < 0) {
      uVar1 = (**(int (***)())(*param_1 + 0x60))
                        (param_1,*(__int64 *)(param_1 + 4) + *(__int64 *)(param_1 + 6),param_2,
                         param_3,param_4);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      goto LAB_82e6e440;
    }
  }
  uVar1 = 0;
LAB_82e6e440:
  *(unsigned __int64 *)(param_1 + 6) = (unsigned __int64)*param_4 + *(__int64 *)(param_1 + 6);
  return uVar1;
}

