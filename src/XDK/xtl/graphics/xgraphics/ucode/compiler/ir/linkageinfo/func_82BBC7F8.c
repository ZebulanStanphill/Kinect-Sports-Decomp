extern int fn_82AB15D0();
extern int fn_82BBC410();


unsigned __int64 fn_82BBC7F8(int *param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  __int64 lVar4;
  
  if (param_2 == 0x21) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0da8,0xffffffff820e0c10,0x219);
  }
  if (*(char *)(param_1 + 0x1d4) == '\0') {
    iVar2 = 0;
    param_1 = param_1 + 0x104;
    do {
      if ((param_1[-0x10] == param_2) && (*param_1 == param_3)) {
        *param_4 = iVar2;
        return 1;
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
    } while (iVar2 < 0x10);
  }
  else {
    lVar4 = 0;
    piVar3 = param_1;
    do {
      cVar1 = fn_82BBC410(param_1,lVar4);
      if (((cVar1 != '\0') && (*piVar3 == param_2)) && (piVar3[0x10] == param_3)) {
        *param_4 = (int)lVar4;
        return 1;
      }
      lVar4 = lVar4 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)lVar4 < 0x10);
  }
  return 0;
}

