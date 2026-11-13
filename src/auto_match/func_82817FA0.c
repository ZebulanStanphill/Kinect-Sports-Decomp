extern int fn_828183C0();
extern int fn_82F6DDE0();


__int64 fn_82817FA0(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  __int64 lVar7;
  int aiStack_40 [4];
  
  lVar7 = 0;
  if ((param_1 != (int *)0x0) && (param_2 != (char *)0x0)) {
    if (param_3 == 0) {
      iVar3 = param_1[2];
    }
    else {
      if (param_3 != 1) {
        return 0;
      }
      iVar3 = param_1[3];
    }
    aiStack_40[0] = fn_828183C0(param_2);
    aiStack_40[1] = 0;
    piVar4 = (int *)fn_82F6DDE0(aiStack_40,iVar3,*param_1,0xc,0xffffffff82817ae0);
    if (piVar4 != (int *)0x0) {
      do {
        if ((int *)(*param_1 * 0xc + iVar3) <= piVar4) {
          return lVar7;
        }
        if (*piVar4 != aiStack_40[0]) {
          return lVar7;
        }
        pcVar5 = param_2;
        if (param_3 == 0) {
          pcVar6 = (char *)((unsigned int *)piVar4[2])[1];
LAB_82818064:
          do {
            cVar1 = *pcVar6;
            cVar2 = *pcVar5;
            if (cVar1 == '\0') break;
            pcVar6 = pcVar6 + 1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            lVar7 = lVar7 + 1;
          }
        }
        else if (param_3 == 1) {
          pcVar6 = *(char **)piVar4[2];
          goto LAB_82818064;
        }
        piVar4 = piVar4 + 3;
      } while (piVar4 != (int *)0x0);
    }
  }
  return lVar7;
}

