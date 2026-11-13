extern unsigned int lbl_831BBCA8;


void fn_82F7F3C8(char *param_1)

{
  char cVar1;
  __int64 lVar2;
  char *pcVar3;
  char *pcVar4;
  
  lVar2 = (__int64)*param_1;
  if (lVar2 != 0) {
    do {
      if ((int)lVar2 == (int)*(char *)**(unsigned int **)(lbl_831BBCA8 + 0xbc)) break;
      param_1 = param_1 + 1;
      lVar2 = (__int64)*param_1;
    } while (lVar2 != 0);
  }
  param_1 = param_1 + 1;
  if ((int)lVar2 != 0) {
    cVar1 = *param_1;
    while (((pcVar4 = param_1, cVar1 != '\0' && (cVar1 != 'e')) && (cVar1 != 'E'))) {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + -1;
    } while (*pcVar4 == '0');
    if (*pcVar4 == *(char *)**(unsigned int **)(lbl_831BBCA8 + 0xbc)) {
      pcVar4 = pcVar3 + -2;
    }
    param_1 = param_1 + -1;
    do {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar1;
    } while (cVar1 != '\0');
    return;
  }
  return;
}

