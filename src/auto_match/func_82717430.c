void fn_82717430(int *param_1,char param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  if (param_2 == '\0') {
    uVar3 = param_1[0x23] & 0xfffffffe;
  }
  else {
    uVar3 = param_1[0x23] | 1;
  }
  param_1[0x23] = uVar3;
  iVar2 = (**(int (***)())(*param_1 + 0x40))(param_1);
  if (iVar2 != 0) {
    if ((param_2 != '\0') || (uVar3 = 1, (*(unsigned int *)(iVar2 + 0xb00) >> 0xb & 1) == 0)) {
      uVar3 = 0;
    }
    uVar1 = param_1[0x23];
    if (uVar3 != (uVar1 >> 3 & 1)) {
      uVar4 = uVar1 | 8;
      if (uVar3 == 0) {
        uVar4 = uVar1 & 0xfffffff7;
      }
      param_1[0x23] = uVar4;
      if ((param_1[8] != 0) && ((*(unsigned int *)(param_1[8] + 0x8c) >> 3 & 1) == 0)) {
        (**(int (***)())(*param_1 + 0x108))(param_1);
      }
    }
    iVar2 = (**(int (***)())(*param_1 + 0x40))(param_1);
    *(unsigned int *)(iVar2 + 0xb00) = *(unsigned int *)(iVar2 + 0xb00) | 0x400;
    return;
  }
  return;
}

