extern unsigned int *auStack_28;
extern unsigned int *auStack_30;


unsigned __int64 fn_82E6E8B0(int *param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_30 [2];
  unsigned __int64 auStack_28 [5];
  
  if (param_1[0xe] == 0) {
    return 0;
  }
  if (param_1[2] != 0) {
    auStack_28[0] = 0;
    uVar1 = (**(int (***)())(*param_1 + 0x10))(param_1,auStack_28);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar3 = (unsigned __int64)(unsigned int)param_1[10];
    uVar2 = *(unsigned __int64 *)(param_1 + 0xc);
    if (auStack_28[0] < uVar3 + uVar2) {
      uVar3 = (auStack_28[0] & 0xffffffff) - (uVar2 & 0xffffffff);
    }
    uVar1 = (**(int (***)())(*(int *)param_1[2] + 0x1c))
                      ((int *)param_1[2],*(__int64 *)(param_1 + 4) + uVar2);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    auStack_30[0] = 0;
    uVar1 = (**(int (***)())(*(int *)param_1[2] + 0x30))
                      ((int *)param_1[2],param_1[0xe],uVar3,auStack_30);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if ((unsigned __int64)auStack_30[0] == (uVar3 & 0xffffffff)) {
      param_1[0xf] = 1;
      return uVar1;
    }
  }
  return 0xffffffffc00d36bb;
}

