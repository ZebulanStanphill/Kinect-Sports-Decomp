extern unsigned int lbl_82023970;


void fn_82897458(unsigned int *param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  param_1[3] = param_2;
  *param_1 = &lbl_82023970;
  param_1[1] = 0;
  iVar1 = 0;
  param_1[2] = 0;
  puVar2 = param_1 + 4;
  param_1[4] = 0;
  lVar3 = 4;
  do {
    puVar2[5] = 0;
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    *(unsigned char *)((int)param_1 + iVar1 + 0x34) = 0;
    iVar1 = iVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

