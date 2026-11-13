extern unsigned int lbl_82002C40;


unsigned __int64 fn_82967EE0(int param_1,int param_2,double *param_3,double *param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  iVar2 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x14));
  iVar5 = *(int *)(iVar2 + 0x48);
  if ((iVar5 != -1) && (*(int *)(iVar2 + 8) == -1)) {
    puVar3 = *(unsigned int **)(iVar5 * 4 + *(int *)(param_1 + 0x18));
    uVar8 = *puVar3 & 0xfff00000;
    if (uVar8 == 0x10100000) {
      uVar8 = 0;
      if (puVar3[3] != 0) {
        iVar5 = 0;
        do {
          if (*(int *)(iVar5 + puVar3[4]) == param_2) break;
          uVar8 = uVar8 + 1;
          iVar5 = iVar5 + 4;
        } while (uVar8 < puVar3[3]);
      }
      if (param_3 != (double *)0x0) {
        *param_3 = -*param_3;
      }
      return (unsigned __int64)*(unsigned int *)(uVar8 * 4 + puVar3[2]);
    }
    if ((uVar8 == 0x20500000) || (uVar8 == 0x20400000)) {
      uVar1 = puVar3[3];
      uVar6 = 0;
      if (uVar1 != 0) {
        iVar5 = 0;
        do {
          if (*(int *)(iVar5 + puVar3[4]) == param_2) break;
          uVar6 = uVar6 + 1;
          iVar5 = iVar5 + 4;
        } while (uVar6 < uVar1);
      }
      uVar7 = 0;
      iVar5 = 1;
      do {
        uVar4 = (unsigned __int64)*(unsigned int *)((puVar3[3] * uVar7 + uVar6) * 4 + puVar3[2]);
        iVar2 = *(int *)(*(int *)((iVar5 * puVar3[3] + uVar6) * 4 + puVar3[2]) * 4 +
                        *(int *)(param_1 + 0x14));
        if (((*(unsigned int *)(*(int *)(*(int *)(iVar2 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100)
             != 0) && (*(int *)(iVar2 + 8) == -1)) {
          if (param_3 == (double *)0x0) {
            return uVar4;
          }
          if (uVar8 == 0x20500000) {
            *param_3 = *(double *)(iVar2 + 0x20) * *param_3;
            return uVar4;
          }
          *param_4 = *(double *)(iVar2 + 0x20) * *param_3 + *param_4;
          return uVar4;
        }
        uVar7 = uVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (uVar7 < 2);
      if ((uVar8 == 0x20400000) &&
         (*(int *)(puVar3[2] + uVar6 * 4) == *(int *)((uVar1 + uVar6) * 4 + puVar3[2]))) {
        if (param_3 != (double *)0x0) {
          *param_3 = *param_3 * lbl_82002C40;
        }
        return (unsigned __int64)*(unsigned int *)(uVar6 * 4 + puVar3[2]);
      }
    }
  }
  return 0xffffffffffffffff;
}

