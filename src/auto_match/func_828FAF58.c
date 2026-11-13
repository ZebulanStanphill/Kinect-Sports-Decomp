extern int fn_828FAB00();


unsigned __int64 fn_828FAF58(unsigned int *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  unsigned int uVar4;
  
  if (*param_1 < param_1[1]) {
    do {
      pcVar2 = (char *)*param_1;
      cVar1 = *pcVar2;
      if (cVar1 == '\n') {
        return 1;
      }
      if (cVar1 == '\\') {
        if ((pcVar2 + 1 < (char *)param_1[1]) && (pcVar2[1] == '\n')) {
          if (param_2 != 0) {
            fn_828FAB00(param_1[0xc],param_1 + 2,0x41a,0xffffffff820298b8);
          }
          uVar4 = *param_1 + 2;
        }
        else {
          if (((char *)param_1[1] <= pcVar2 + 2) || ((pcVar2[1] != '\r' || (pcVar2[2] != '\n'))))
          goto LAB_828fb04c;
          if (param_2 != 0) {
            fn_828FAB00(param_1[0xc],param_1 + 2,0x41a,0xffffffff820298b8);
          }
          uVar4 = *param_1 + 3;
        }
        *param_1 = uVar4;
        param_1[7] = param_1[7] + 1;
      }
      else {
LAB_828fb04c:
        if ((param_2 == 0) &&
           (((cVar1 == '/' && (pcVar2 + 1 < (char *)param_1[1])) && (pcVar2[1] == '/')))) {
          iVar3 = 2;
          param_2 = 1;
        }
        else {
          iVar3 = 1;
        }
        *param_1 = (unsigned int)(pcVar2 + iVar3);
      }
    } while (*param_1 < param_1[1]);
  }
  return 0;
}

