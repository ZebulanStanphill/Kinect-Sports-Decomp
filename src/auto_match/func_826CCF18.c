extern int fn_826CBFF0();


void fn_826CCF18(int *param_1,char param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if (param_2 == '\0') {
    uVar2 = param_1[0x23] & 0xfffffffe;
  }
  else {
    uVar2 = param_1[0x23] | 1;
  }
  param_1[0x23] = uVar2;
  if (param_2 == '\0') {
    uVar2 = 1;
    if ((*(unsigned int *)(param_1[0x28] + 0xb00) >> 0xb & 1) != 0) goto LAB_826ccf68;
  }
  uVar2 = 0;
LAB_826ccf68:
  uVar1 = param_1[0x23];
  if (uVar2 != (uVar1 >> 3 & 1)) {
    uVar3 = uVar1 | 8;
    if (uVar2 == 0) {
      uVar3 = uVar1 & 0xfffffff7;
    }
    param_1[0x23] = uVar3;
    fn_826CBFF0(param_1,param_1[0x28]);
    if ((param_1[8] != 0) && ((*(unsigned int *)(param_1[8] + 0x8c) >> 3 & 1) == 0)) {
      (**(int (***)())(*param_1 + 0x108))(param_1);
    }
  }
  *(unsigned int *)(param_1[0x28] + 0xb00) = *(unsigned int *)(param_1[0x28] + 0xb00) | 0x400;
  return;
}

