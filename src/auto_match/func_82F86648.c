extern int fn_82F63BA0();
extern int fn_82F63CA0();
extern int fn_82F68240();


unsigned int fn_82F86648(char *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  char *pcVar2;
  unsigned __int64 uVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  unsigned int uVar7;
  
  pcVar4 = *(char **)(param_4 + 0xc);
  if (param_1 == (char *)0x0) {
    puVar1 = (unsigned int *)fn_82F68240();
    *puVar1 = 0x16;
    fn_82F63BA0();
    uVar7 = 0x16;
  }
  else {
    if ((param_2 & 0xffffffff) == 0) {
      puVar1 = (unsigned int *)fn_82F68240();
      uVar7 = 0x16;
    }
    else {
      *param_1 = '\0';
      if ((((((param_3 & 0xffffffff) >> 0x1f) - 1) + (unsigned __int64)(param_3 == 0) & param_3) + 1 &
          0xffffffff) < (param_2 & 0xffffffff)) {
        pcVar2 = param_1 + 1;
        *param_1 = '0';
        uVar3 = param_3;
        pcVar6 = pcVar2;
        if (0 < (int)param_3) {
          uVar3 = 0;
          do {
            cVar5 = *pcVar4;
            if (cVar5 == '\0') {
              cVar5 = '0';
            }
            else {
              pcVar4 = pcVar4 + 1;
            }
            *pcVar6 = cVar5;
            pcVar6 = pcVar6 + 1;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        *pcVar6 = '\0';
        if ((-1 < (int)uVar3) && ('4' < *pcVar4)) {
          while (pcVar6 = pcVar6 + -1, *pcVar6 == '9') {
            *pcVar6 = '0';
          }
          *pcVar6 = *pcVar6 + '\x01';
        }
        pcVar4 = pcVar2;
        if (*param_1 == '1') {
          *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
        }
        else {
          do {
            cVar5 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar5 != '\0');
          fn_82F63CA0(param_1,pcVar2,(int)pcVar4 - (int)pcVar2);
        }
        return 0;
      }
      puVar1 = (unsigned int *)fn_82F68240();
      uVar7 = 0x22;
    }
    *puVar1 = uVar7;
    fn_82F63BA0();
  }
  return uVar7;
}

