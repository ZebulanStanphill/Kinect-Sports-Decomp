void fn_82A3B0B8(int *param_1,int param_2,unsigned int param_3)

{
  __int64 lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  
  iVar2 = (unsigned int)*(unsigned short *)(*param_1 + param_2) * 4;
  uVar7 = *(unsigned int *)(iVar2 + param_1[2]);
  *(int *)(iVar2 + param_1[2]) = param_2;
  if (param_3 < uVar7) {
    iVar2 = 2;
    iVar9 = 2;
    iVar8 = 2;
    puVar11 = (unsigned int *)(param_2 * 4 + param_1[3]);
    puVar10 = (unsigned int *)(param_1[4] + param_2 * 4);
    do {
      iVar5 = *param_1;
      iVar3 = iVar2 + uVar7;
      lVar1 = (unsigned __int64)*(unsigned char *)(iVar5 + iVar3) - (unsigned __int64)*(unsigned char *)(iVar5 + iVar2 + param_2);
      iVar6 = iVar2;
      if (lVar1 == 0) {
        iVar4 = (iVar3 - uVar7) + param_2;
        do {
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + 1;
          if (0x31 < iVar6) break;
          lVar1 = (unsigned __int64)*(unsigned char *)((iVar3 - iVar2) + iVar5 + iVar6) -
                  (unsigned __int64)*(unsigned char *)(iVar4 + iVar5);
        } while (lVar1 == 0);
      }
      if ((int)lVar1 < 0) {
        if (iVar8 < iVar6) {
          if (0x31 < iVar6) {
LAB_82a3b1fc:
            *puVar11 = *(unsigned int *)(uVar7 * 4 + param_1[3]);
            uVar7 = *(unsigned int *)(param_1[4] + uVar7 * 4);
            goto LAB_82a3b1f4;
          }
          iVar2 = iVar9;
          iVar8 = iVar6;
          if (iVar6 <= iVar9) {
            iVar2 = iVar6;
          }
        }
        *puVar10 = uVar7;
        iVar5 = param_1[3];
        puVar10 = (unsigned int *)(uVar7 * 4 + iVar5);
      }
      else {
        if (iVar9 < iVar6) {
          if (0x31 < iVar6) goto LAB_82a3b1fc;
          iVar2 = iVar6;
          iVar9 = iVar6;
          if (iVar8 <= iVar6) {
            iVar2 = iVar8;
          }
        }
        *puVar11 = uVar7;
        iVar5 = param_1[4];
        puVar11 = (unsigned int *)(uVar7 * 4 + iVar5);
      }
      uVar7 = *(unsigned int *)(uVar7 * 4 + iVar5);
    } while (param_3 < uVar7);
    uVar7 = 0;
    *puVar11 = 0;
LAB_82a3b1f4:
    *puVar10 = uVar7;
  }
  else {
    *(unsigned int *)(param_1[4] + param_2 * 4) = 0;
    *(unsigned int *)(param_1[3] + param_2 * 4) = 0;
  }
  return;
}

