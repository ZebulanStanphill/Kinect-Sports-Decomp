void fn_8252CC80(int param_1,char param_2,int param_3)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  int iVar6;
  __int64 lVar7;
  
  if (param_1 + 0x8bc != 0) {
    if (param_3 == -1) {
      iVar5 = 0;
      lVar7 = 2;
      do {
        *(char *)(param_1 + 0x930 + iVar5) = param_2;
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    else {
      *(char *)(param_1 + 0x8bc + param_3 + 0x74) = param_2;
    }
  }
  piVar1 = *(int **)(param_1 + 0x8c0);
  if (piVar1 != (int *)0x0) {
    iVar5 = param_1 + 0x1d0;
    if (param_3 == -1) {
      puVar4 = (unsigned int *)(param_1 + 0x1dc);
      lVar7 = 2;
      if (param_2 == '\0') {
        do {
          puVar3 = puVar4 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar3 & 0xffffffdf;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        puVar4 = (unsigned int *)(param_1 + 0x1dc);
        lVar7 = 2;
        do {
          puVar3 = puVar4 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar3 & 0xfffffff7;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      else {
        do {
          puVar3 = puVar4 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar3 | 0x20;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        puVar4 = (unsigned int *)(param_1 + 0x1dc);
        lVar7 = 2;
        do {
          puVar3 = puVar4 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar3 | 8;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        *(unsigned int *)(param_1 + 0x224) = 1;
      }
    }
    else {
      iVar6 = (param_3 + 4) * 4;
      if (param_2 == '\0') {
        uVar2 = *(unsigned int *)(iVar6 + iVar5);
        *(unsigned int *)(iVar6 + iVar5) = uVar2 & 0xffffffdf;
        *(unsigned int *)(iVar6 + iVar5) = uVar2 & 0xffffffd7;
      }
      else {
        uVar2 = *(unsigned int *)(iVar6 + iVar5);
        *(unsigned int *)(iVar6 + iVar5) = uVar2 | 0x20;
        *(unsigned int *)(iVar6 + iVar5) = uVar2 | 0x28;
        *(int *)(param_1 + 0x224) = param_3 + 1;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x8252cdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(int (***)())(*piVar1 + 0x78))((double)*(float *)(*(int *)(param_1 + 0x4c) + 0x82c));
    return;
  }
  return;
}

