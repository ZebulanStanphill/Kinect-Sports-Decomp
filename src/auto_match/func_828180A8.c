extern int fn_82817CA8();
extern int fn_82F6DDE0();


unsigned __int64
fn_828180A8(int *param_1,int param_2,char *param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             int *param_6)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar5;
  unsigned __int64 uVar4;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int aiStack_60 [4];
  
  pcVar9 = (char *)0x0;
  if ((param_1 != (int *)0x0) && (param_6 != (int *)0x0)) {
    if ((param_5 & 0xffffffff) == 0) {
      iVar3 = param_1[2];
    }
    else {
      if ((param_5 & 0xffffffff) != 1) {
        return 0;
      }
      iVar3 = param_1[3];
    }
    if (iVar3 == 0) {
      uVar4 = fn_82817CA8(param_1,param_3,param_4,param_5,param_6,0xffffffff82f6def0);
      return uVar4;
    }
    aiStack_60[1] = 0;
    aiStack_60[0] = param_2;
    piVar5 = (int *)fn_82F6DDE0(aiStack_60,iVar3,*param_1,0xc,0xffffffff82817ae0);
    iVar6 = 0;
    if (piVar5 != (int *)0x0) {
      do {
        if (((int *)(*param_1 * 0xc + iVar3) <= piVar5) || (*piVar5 != aiStack_60[0])) break;
        if (param_3 == (char *)0x0) {
LAB_828181c8:
          if (iVar6 == (int)param_4) {
            *param_6 = piVar5[2];
            return 1;
          }
          iVar6 = iVar6 + 1;
        }
        else {
          if (*param_3 == '\0') {
LAB_8281818c:
            pcVar8 = pcVar9;
            pcVar7 = param_3;
            if (*param_3 != '\0') {
              do {
                cVar1 = *pcVar8;
                cVar2 = *pcVar7;
                if (cVar1 == '\0') break;
                pcVar8 = pcVar8 + 1;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 != cVar2) goto LAB_828181d4;
            }
            goto LAB_828181c8;
          }
          if ((param_5 & 0xffffffff) == 0) {
            pcVar9 = (char *)((unsigned int *)piVar5[2])[1];
            goto LAB_8281818c;
          }
          if ((param_5 & 0xffffffff) == 1) {
            pcVar9 = *(char **)piVar5[2];
            goto LAB_8281818c;
          }
          pcVar9 = (char *)0x0;
        }
LAB_828181d4:
        piVar5 = piVar5 + 3;
      } while (piVar5 != (int *)0x0);
    }
  }
  *param_6 = 0;
  return 0;
}

