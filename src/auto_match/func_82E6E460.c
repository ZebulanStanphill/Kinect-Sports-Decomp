unsigned __int64 fn_82E6E460(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned __int64 uVar3;
  
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
  iVar2 = (**(int (***)())(*param_1 + 0x5c))(param_1,param_2,param_3,param_4);
  if (iVar2 < 0) {
    uVar1 = (**(int (***)())(*param_1 + 0x54))(param_1);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(int (***)())(*param_1 + 0x50))(param_1,*(unsigned __int64 *)(param_1 + 6));
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    iVar2 = (**(int (***)())(*param_1 + 0x5c))(param_1,param_2,param_3,param_4);
    if (iVar2 < 0) {
      uVar1 = (**(int (***)())(*(int *)param_1[2] + 0x30))((int *)param_1[2],param_2,param_3,param_4);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      goto LAB_82e6e564;
    }
  }
  uVar1 = 0;
LAB_82e6e564:
  uVar3 = (unsigned __int64)*param_4 + *(__int64 *)(param_1 + 6);
  if (*(unsigned __int64 *)(param_1 + 8) < uVar3) {
    *(unsigned __int64 *)(param_1 + 8) = uVar3;
  }
  *(unsigned __int64 *)(param_1 + 6) = (unsigned __int64)*param_4 + *(__int64 *)(param_1 + 6);
  return uVar1;
}

