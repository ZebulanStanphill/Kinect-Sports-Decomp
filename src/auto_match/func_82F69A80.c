extern int fn_82F63BA0();
extern int fn_82F68240();


unsigned int fn_82F69A80(char *param_1,unsigned __int64 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  unsigned int *puVar3;
  char *pcVar4;
  unsigned int uVar5;
  
  if ((param_1 != (char *)0x0) && ((int)param_2 != 0)) {
    pcVar4 = param_1;
    if (param_3 != (char *)0x0) {
      do {
        if (*pcVar4 == '\0') break;
        param_2 = param_2 - 1;
        pcVar4 = pcVar4 + 1;
      } while (param_2 != 0);
      if ((param_2 & 0xffffffff) == 0) {
        *param_1 = '\0';
        puVar3 = (unsigned int *)fn_82F68240();
        uVar5 = 0x16;
      }
      else {
        iVar2 = (int)pcVar4 - (int)param_3;
        do {
          cVar1 = *param_3;
          param_3[iVar2] = cVar1;
          param_3 = param_3 + 1;
          if (cVar1 == '\0') break;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
        if ((param_2 & 0xffffffff) != 0) {
          return 0;
        }
        *param_1 = '\0';
        puVar3 = (unsigned int *)fn_82F68240();
        uVar5 = 0x22;
      }
      *puVar3 = uVar5;
      fn_82F63BA0();
      return uVar5;
    }
    *param_1 = '\0';
  }
  puVar3 = (unsigned int *)fn_82F68240();
  *puVar3 = 0x16;
  fn_82F63BA0();
  return 0x16;
}

