void fn_82CFC478(unsigned char *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3[1] + -1;
  if (param_2[1] + -1 < iVar1) {
code_r0x82cfc490:
    *param_1 = 0;
    return;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(char *)(*param_2 + (param_2[1] - param_3[1]) + iVar2) != *(char *)(*param_3 + iVar2))
      goto code_r0x82cfc490;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  *param_1 = 1;
  return;
}

