extern unsigned int *auStack_28;
extern unsigned int iStack_30;
extern unsigned int uStack_2c;


unsigned __int64 fn_82934408(int param_1,int *param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iStack_30;
  unsigned int uStack_2c;
  unsigned int auStack_28 [1];
  
  if (param_3 == (unsigned int *)0x0) {
    param_3 = auStack_28;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 9) {
    iVar1 = *(int *)(param_1 + 0x10);
    if ((iVar1 == 1) || (iVar1 == 0)) {
      *param_2 = 1;
      uVar3 = *(unsigned int *)(param_1 + 0x20);
    }
    else if (iVar1 == 2) {
      *param_2 = *(int *)(param_1 + 0x20);
      uVar3 = *(unsigned int *)(param_1 + 0x1c);
    }
    else {
      if (iVar1 != 3) {
        return 0xffffffff80004005;
      }
      uVar3 = 1;
      *param_2 = 1;
    }
    *param_3 = uVar3;
  }
  else if (iVar1 == 8) {
    uVar2 = fn_82934408(*(unsigned int *)(param_1 + 0x10),param_2,param_3);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    *param_2 = *(int *)(param_1 + 0x14) * *param_2;
  }
  else {
    if (iVar1 != 1) {
      return 0xffffffff80004005;
    }
    *param_2 = 0;
    *param_3 = 0;
    do {
      uVar2 = fn_82934408(*(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + 0x30),
                            &iStack_30,&uStack_2c);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      *param_2 = *param_2 + iStack_30;
      uVar3 = *param_3;
      if (*param_3 < uStack_2c) {
        uVar3 = uStack_2c;
      }
      *param_3 = uVar3;
      param_1 = *(int *)(param_1 + 0xc);
    } while (param_1 != 0);
  }
  return 0;
}

