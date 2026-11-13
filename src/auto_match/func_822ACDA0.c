extern int fn_8251FBA8();


int fn_822ACDA0(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  unsigned __int64 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 4);
  if (iVar7 != 0) {
    iVar5 = 0;
    uVar3 = fn_8251FBA8();
    if ((int)((uVar3 & 0xffffffff) / 0x88) != 0) {
      iVar6 = (iVar7 - (int)param_2) + 4;
      do {
        cVar2 = *(char *)(iVar7 + 4);
        cVar1 = *param_2;
        pcVar4 = param_2;
        while (cVar1 == cVar2) {
          pcVar4 = pcVar4 + 1;
          if (cVar1 == '\0') {
            return iVar7;
          }
          cVar2 = pcVar4[iVar6];
          cVar1 = *pcVar4;
        }
        if (cVar1 == cVar2) {
          return iVar7;
        }
        iVar7 = iVar7 + 0x88;
        iVar6 = iVar6 + 0x88;
        iVar5 = iVar5 + 1;
        uVar3 = fn_8251FBA8(*(unsigned int *)(param_1 + 4));
      } while (iVar5 < (int)((uVar3 & 0xffffffff) / 0x88));
    }
  }
  return 0;
}

