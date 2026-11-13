extern int _invalid_parameter_noinfo();
extern int _errno();


unsigned int fn_82F685A8(unsigned __int64 param_1,char *param_2,unsigned int param_3,unsigned __int64 param_4,int param_5)

{
  char *pcVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  char *pcVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  char cVar7;
  char *pcVar8;
  unsigned int uVar9;
  
  uVar3 = (unsigned int)param_4;
  if (param_2 == (char *)0x0) {
    puVar2 = (unsigned int *)_errno();
    *puVar2 = 0x16;
    _invalid_parameter_noinfo();
    return 0x16;
  }
  if (param_3 == 0) {
LAB_82f685e0:
    puVar2 = (unsigned int *)_errno();
    uVar9 = 0x16;
  }
  else {
    *param_2 = '\0';
    if ((param_5 == 0 ^ 1) + 1 < param_3) {
      if ((uVar3 < 2) || (0x24 < uVar3)) goto LAB_82f685e0;
      pcVar4 = param_2;
      if (param_5 != 0) {
        pcVar4 = param_2 + 1;
        *param_2 = '-';
        param_1 = -param_1;
      }
      uVar5 = (unsigned int)(param_5 != 0);
      pcVar1 = pcVar4;
      do {
        pcVar8 = pcVar1;
        trapWord(6,param_4,0);
        uVar6 = param_1 - (__int64)(int)((param_1 & 0xffffffff) / (param_4 & 0xffffffff)) *
                          (__int64)(int)uVar3;
        param_1 = (param_1 & 0xffffffff) / (param_4 & 0xffffffff);
        trapWord(6,param_4,0);
        cVar7 = (char)uVar6;
        if ((uVar6 & 0xffffffff) < 10) {
          cVar7 = cVar7 + '0';
        }
        else {
          cVar7 = cVar7 + 'W';
        }
        *pcVar8 = cVar7;
        uVar5 = uVar5 + 1;
      } while ((param_1 != 0) && (pcVar1 = pcVar8 + 1, uVar5 < param_3));
      if (uVar5 < param_3) {
        pcVar8[1] = '\0';
        do {
          cVar7 = *pcVar8;
          *pcVar8 = *pcVar4;
          pcVar8 = pcVar8 + -1;
          *pcVar4 = cVar7;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < pcVar8);
        return 0;
      }
      *param_2 = '\0';
    }
    puVar2 = (unsigned int *)_errno();
    uVar9 = 0x22;
  }
  *puVar2 = uVar9;
  _invalid_parameter_noinfo();
  return uVar9;
}

