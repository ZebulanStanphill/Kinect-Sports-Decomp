void fn_82D04710(int *param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned char *puVar3;
  __int64 lVar4;
  
  lVar1 = (unsigned __int64)(unsigned int)param_1[1] - 1;
  lVar4 = 0x7fffffff;
  if ((int)lVar1 < 0x7fffffff) {
    lVar4 = lVar1;
  }
  lVar4 = lVar4 + -1;
  if (-1 < lVar4) {
    do {
      if (*(char *)(*param_1 + (int)lVar4) == '/') goto code_r0x82d04754;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  lVar4 = -1;
code_r0x82d04754:
  lVar2 = 0x7fffffff;
  if ((int)lVar1 < 0x7fffffff) {
    lVar2 = lVar1;
  }
  lVar2 = lVar2 + -1;
  if (-1 < lVar2) {
    do {
      if (*(char *)(*param_1 + (int)lVar2) == '\\') goto code_r0x82d04788;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  lVar2 = -1;
code_r0x82d04788:
  if ((int)lVar2 <= (int)lVar4) {
    lVar2 = lVar4;
  }
  if ((int)lVar2 < 0) {
    return;
  }
  lVar2 = lVar2 + 1;
  if (lVar2 < 1) {
    return;
  }
  puVar3 = (unsigned char *)*param_1;
  lVar4 = (unsigned __int64)(unsigned int)param_1[1] - lVar2;
  param_1[1] = (int)lVar4;
  if (0 < (int)lVar4) {
    do {
      *puVar3 = puVar3[(int)lVar2];
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return;
  }
  return;
}

