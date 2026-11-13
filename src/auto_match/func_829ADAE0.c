extern int fn_829AD570();


unsigned __int64 fn_829ADAE0(int *param_1)

{
  int iVar1;
  
  if ((param_1[0x69] == 0) && (iVar1 = fn_829AD570(), iVar1 == 0)) {
    return 0;
  }
  if (param_1[0x69] == *(int *)(param_1[0x6f] + 0x14) + 0xd0) {
    *(unsigned int *)(*param_1 + 0x14) = 0x62;
    *(unsigned int *)(*param_1 + 0x18) = *(unsigned int *)(param_1[0x6f] + 0x14);
    (*(int (**)())(*param_1 + 4))(param_1,3);
    param_1[0x69] = 0;
  }
  else {
    iVar1 = (*(int (**)())(param_1[6] + 0x14))(param_1,*(int *)(param_1[0x6f] + 0x14));
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(unsigned int *)(param_1[0x6f] + 0x14) = *(int *)(param_1[0x6f] + 0x14) + 1U & 7;
  return 1;
}

