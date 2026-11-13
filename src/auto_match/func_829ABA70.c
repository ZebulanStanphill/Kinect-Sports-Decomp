unsigned __int64 fn_829ABA70(int *param_1)

{
  int iVar1;
  
  if (param_1[5] != 0xcc) {
    (*(int (**)())param_1[0x6a])();
    param_1[0x23] = 0;
    param_1[5] = 0xcc;
  }
  iVar1 = *(int *)(param_1[0x6a] + 8);
  while (iVar1 != 0) {
    *(unsigned int *)(*param_1 + 0x14) = 0x30;
    (*(int (**)())*param_1)(param_1);
    iVar1 = *(int *)(param_1[0x6a] + 8);
  }
  param_1[5] = ((param_1[0x11] == 0) ^ 1) + 0xcd;
  return 1;
}

