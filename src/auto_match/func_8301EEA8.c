extern unsigned int lbl_83264660;


unsigned __int64 fn_8301EEA8(unsigned int param_1,unsigned char *param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  if (7 < param_1) {
    return 0x1f;
  }
  puVar1 = (unsigned int *)(param_3 + -4);
  lVar3 = 6;
  puVar2 = (unsigned int *)(param_1 * 0x90 + -0x7cd9b9c4);
  *param_2 = (&lbl_83264660)[param_1 * 0x90];
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return 1;
}

