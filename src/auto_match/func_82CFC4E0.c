void fn_82CFC4E0(unsigned char *param_1,unsigned int *param_2,__int64 param_3)

{
  char cVar1;
  char *pcVar3;
  __int64 lVar2;
  
  lVar2 = param_3;
  do {
    pcVar3 = (char *)lVar2;
    lVar2 = lVar2 + 1;
  } while (*pcVar3 != '\0');
  lVar2 = ((unsigned __int64)param_2[1] - ((lVar2 - param_3) - 1U & 0xffffffff)) + -1;
  if (lVar2 < 0) {
code_r0x82cfc510:
    *param_1 = 0;
    return;
  }
  cVar1 = *(char *)param_3;
  if (cVar1 != '\0') {
    lVar2 = (unsigned __int64)*param_2 + lVar2;
    do {
      if (*(char *)lVar2 != cVar1) goto code_r0x82cfc510;
      param_3 = param_3 + 1;
      cVar1 = *(char *)param_3;
      lVar2 = lVar2 + 1;
    } while (cVar1 != '\0');
  }
  *param_1 = 1;
  return;
}

