unsigned __int64 fn_825258F8(int param_1,__int64 *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  char *pcVar5;
  __int64 *plVar6;
  unsigned int uVar7;
  int iVar8;
  
  uVar2 = 0;
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0xa18) + 8);
  if (uVar1 != 0) {
    iVar8 = *(int *)(*(int *)(param_1 + 0xa18) + 0xc);
    iVar3 = iVar8 - (int)param_2;
    do {
      uVar4 = 7;
      plVar6 = param_2;
      do {
        uVar7 = uVar4;
        if (*(__int64 *)(iVar3 + (int)plVar6) != *plVar6) goto LAB_8252597c;
        uVar4 = uVar7 + 8;
        plVar6 = plVar6 + 1;
      } while (uVar4 < 0x10);
      uVar7 = uVar7 + 1;
      if (0xf < uVar7) {
        return 1;
      }
      pcVar5 = (char *)(iVar8 + uVar7);
      while (*pcVar5 == pcVar5[(int)param_2 - iVar8]) {
        uVar7 = uVar7 + 1;
        pcVar5 = pcVar5 + 1;
        if (0xf < uVar7) {
          return 1;
        }
      }
LAB_8252597c:
      uVar2 = uVar2 + 1;
      iVar8 = iVar8 + 0x20;
      iVar3 = iVar3 + 0x20;
    } while (uVar2 < uVar1);
  }
  return 0;
}

