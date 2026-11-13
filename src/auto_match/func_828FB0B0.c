extern int fn_828FA8D8();
extern int fn_82F66AA0();


int fn_828FB0B0(int param_1,char *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = param_2 + 2;
  if ((((pcVar4 < *(char **)(param_1 + 4)) && (*param_2 == '0')) && (param_2[1] == 'x')) &&
     (iVar2 = fn_82F66AA0(*pcVar4), iVar2 != 0)) {
    iVar2 = 0;
    while ((pcVar4 < *(char **)(param_1 + 4) && (iVar3 = fn_82F66AA0(*pcVar4), iVar3 != 0))) {
      cVar1 = *pcVar4;
      if (cVar1 < 'a') {
        iVar3 = (int)cVar1 + iVar2 * 0x10;
        iVar2 = iVar3 + -0x37;
        if (cVar1 < 'A') {
          iVar2 = iVar3 + -0x30;
        }
      }
      else {
        iVar2 = (int)cVar1 + iVar2 * 0x10 + -0x57;
      }
      pcVar4 = pcVar4 + 1;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar2;
    }
    iVar2 = (int)pcVar4 - (int)param_2;
    if (10 < iVar2) {
      fn_828FA8D8(*(unsigned int *)(param_1 + 0x30),param_1 + 8,0x3ea,0xffffffff8202991c);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

