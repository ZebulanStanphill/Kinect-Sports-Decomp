void fn_82965280(int (**param_1)(),__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  
  if (1 < (param_3 & 0xffffffff)) {
    uVar9 = (param_3 & 0xffffffff) >> 1;
    puVar3 = (unsigned int *)param_2;
    if (uVar9 != 0) {
      lVar6 = (uVar9 & 0x3fffffff) * 4 + param_2;
      uVar8 = uVar9 * 2 + 1;
      do {
        uVar8 = uVar8 - 2;
        lVar6 = lVar6 + -4;
        uVar2 = *(unsigned int *)lVar6;
        uVar9 = uVar9 - 1;
        uVar7 = uVar9;
        uVar12 = uVar8;
        if ((uVar8 & 0xffffffff) < (param_3 & 0xffffffff)) {
          do {
            puVar5 = (unsigned int *)((int)((uVar12 & 0xffffffff) << 2) + (int)puVar3);
            uVar10 = *puVar5;
            uVar11 = uVar12;
            if ((uVar12 + 1 & 0xffffffff) < (param_3 & 0xffffffff)) {
              uVar1 = puVar5[1];
              iVar4 = (*param_1)(uVar1,uVar10,param_4);
              if (0 < iVar4) {
                uVar11 = uVar12 + 1;
                uVar10 = uVar1;
              }
            }
            iVar4 = (*param_1)(uVar10,uVar2,param_4);
            if (iVar4 < 1) break;
            uVar12 = (uVar11 & 0x7fffffff) * 2 + 1;
            *(unsigned int *)((int)((uVar7 & 0xffffffff) << 2) + (int)puVar3) =
                 *(unsigned int *)((int)((uVar11 & 0xffffffff) << 2) + (int)puVar3);
            uVar7 = uVar11;
          } while (uVar12 < (param_3 & 0xffffffff));
        }
        *(unsigned int *)((int)((uVar7 & 0xffffffff) << 2) + (int)puVar3) = uVar2;
      } while ((uVar9 & 0xffffffff) != 0);
    }
    param_3 = param_3 - 1;
    if (param_3 != 0) {
      param_2 = (param_3 & 0x3fffffff) * 4 + param_2;
      do {
        uVar2 = *(unsigned int *)param_2;
        uVar8 = 1;
        *(unsigned int *)param_2 = *puVar3;
        uVar9 = 0;
        if (1 < (param_3 & 0xffffffff)) {
          do {
            puVar5 = (unsigned int *)((int)(uVar8 << 2) + (int)puVar3);
            uVar10 = *puVar5;
            uVar7 = uVar8;
            if ((uVar8 + 1 & 0xffffffff) < (param_3 & 0xffffffff)) {
              uVar1 = puVar5[1];
              iVar4 = (*param_1)(uVar1,uVar10,param_4);
              if (0 < iVar4) {
                uVar7 = uVar8 + 1;
                uVar10 = uVar1;
              }
            }
            iVar4 = (*param_1)(uVar10,uVar2,param_4);
            if (iVar4 < 1) break;
            uVar8 = (uVar7 & 0x7fffffff) * 2 + 1;
            *(unsigned int *)((int)((uVar9 & 0xffffffff) << 2) + (int)puVar3) =
                 *(unsigned int *)((int)((uVar7 & 0xffffffff) << 2) + (int)puVar3);
            uVar9 = uVar7;
          } while (uVar8 < (param_3 & 0xffffffff));
        }
        param_3 = param_3 - 1;
        param_2 = param_2 + -4;
        *(unsigned int *)((int)((uVar9 & 0xffffffff) << 2) + (int)puVar3) = uVar2;
      } while (param_3 != 0);
    }
  }
  return;
}

