extern unsigned int *auStack_30;


unsigned __int64 fn_82C01140(int *param_1)

{
  unsigned __int64 uVar1;
  unsigned short *puVar2;
  __int64 lVar3;
  unsigned short auStack_30 [12];
  
  puVar2 = auStack_30;
  auStack_30[0] = 0;
  lVar3 = 8;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  uVar1 = (**(int (***)())(*param_1 + 0x2c))(param_1);
  param_1[0xa5] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = 0xffffffff80070057;
  }
  (**(int (***)())(*param_1 + 0x2c))(param_1);
  return uVar1;
}

