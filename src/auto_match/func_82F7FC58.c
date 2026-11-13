extern int _invalid_parameter_noinfo();
extern int memmove();
extern int _errno();
extern int memset();
extern unsigned int lbl_831BBCA8;


unsigned __int64 fn_82F7FC58(char *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar5;
  unsigned __int64 uVar4;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar2 = param_4[1];
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    puVar5 = (unsigned int *)_errno();
    *puVar5 = 0x16;
    _invalid_parameter_noinfo();
    uVar4 = 0x16;
  }
  else {
    if ((param_5 != '\0') && (iVar2 + -1 == param_3)) {
      iVar3 = *param_4;
      param_1[(unsigned int)(iVar3 == 0x2d) + iVar2 + -1] = '0';
      (param_1 + (unsigned int)(iVar3 == 0x2d) + iVar2 + -1)[1] = '\0';
    }
    pcVar7 = param_1;
    if (*param_4 == 0x2d) {
      pcVar7 = param_1 + 1;
      *param_1 = '-';
    }
    pcVar6 = pcVar7;
    if (param_4[1] < 1) {
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar8 = pcVar7 + 1;
      memmove(pcVar8,pcVar7,(int)pcVar6 - (int)pcVar7);
      *pcVar7 = '0';
    }
    else {
      pcVar8 = pcVar7 + param_4[1];
    }
    pcVar7 = pcVar8;
    if (0 < param_3) {
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar8 + 1;
      memmove(pcVar6,pcVar8,(int)pcVar7 - (int)pcVar8);
      *pcVar8 = *(char *)**(unsigned int **)(lbl_831BBCA8 + 0xbc);
      iVar2 = param_4[1];
      if (iVar2 < 0) {
        if (param_5 == '\0') {
          if (-iVar2 <= param_3) {
            param_3 = -iVar2;
          }
        }
        else {
          param_3 = -iVar2;
        }
        pcVar7 = pcVar6;
        if (param_3 != 0) {
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          memmove(pcVar6 + param_3,pcVar6,(int)pcVar7 - (int)pcVar6);
        }
                    /* WARNING: Subroutine does not return */
        memset(pcVar6,0x30,param_3);
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

