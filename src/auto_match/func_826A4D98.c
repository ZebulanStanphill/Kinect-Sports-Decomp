#define true 1
extern unsigned int *auStack_1a0;
extern int fn_826A2A40();
extern int fn_826A3F08();


unsigned __int64 fn_826A4D98(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  __int64 lVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  unsigned int auStack_1a0 [104];
  
  if (1 < (param_3 - param_2 & 0xffffffff)) {
    puVar10 = auStack_1a0;
    do {
      while( true ) {
        uVar4 = (unsigned int)param_2;
        uVar3 = (unsigned int)param_3;
        uVar8 = uVar3 - uVar4;
        if ((int)uVar8 < 10) break;
        iVar6 = *param_1;
        uVar11 = param_2 + 1;
        uVar12 = param_3 - 1;
        iVar2 = (int)(((__int64)((int)uVar8 >> 1) + (unsigned __int64)((int)uVar8 < 0 && (uVar8 & 1) != 0)
                       + param_2 & 0xffffffff) << 2);
        iVar7 = (int)((param_2 & 0x3fffffff) << 2);
        uVar1 = *(unsigned int *)(iVar7 + iVar6);
        lVar15 = (uVar11 & 0x3fffffff) << 2;
        lVar14 = (uVar12 & 0x3fffffff) << 2;
        *(unsigned int *)(iVar7 + iVar6) = *(unsigned int *)(iVar2 + iVar6);
        *(unsigned int *)(iVar2 + iVar6) = uVar1;
        iVar6 = (int)lVar15;
        iVar2 = (int)lVar14;
        iVar5 = fn_826A3F08(param_4,*(unsigned int *)(iVar2 + *param_1),
                              *(unsigned int *)(iVar6 + *param_1));
        if (iVar5 < 0) {
          iVar5 = *param_1;
          uVar1 = *(unsigned int *)(iVar2 + iVar5);
          *(unsigned int *)(iVar2 + iVar5) = *(unsigned int *)(iVar6 + iVar5);
          *(unsigned int *)(iVar6 + iVar5) = uVar1;
        }
        iVar5 = fn_826A3F08(param_4,*(unsigned int *)(iVar7 + *param_1),
                              *(unsigned int *)(iVar6 + *param_1));
        if (iVar5 < 0) {
          iVar5 = *param_1;
          uVar1 = *(unsigned int *)(iVar7 + iVar5);
          *(unsigned int *)(iVar7 + iVar5) = *(unsigned int *)(iVar6 + iVar5);
          *(unsigned int *)(iVar6 + iVar5) = uVar1;
        }
        iVar6 = fn_826A3F08(param_4,*(unsigned int *)(iVar2 + *param_1),
                              *(unsigned int *)(iVar7 + *param_1));
        if (iVar6 < 0) {
          iVar6 = *param_1;
          uVar1 = *(unsigned int *)(iVar2 + iVar6);
          *(unsigned int *)(iVar2 + iVar6) = *(unsigned int *)(iVar7 + iVar6);
          *(unsigned int *)(iVar7 + iVar6) = uVar1;
        }
LAB_826a4eb0:
        do {
          uVar11 = uVar11 + 1;
          lVar15 = lVar15 + 4;
          uVar8 = (unsigned int)uVar11;
          if ((int)uVar3 <= (int)uVar8) {
LAB_826a4ff0:
            uVar16 = 0;
            goto LAB_826a4dbc;
          }
          iVar6 = fn_826A3F08(param_4,*(unsigned int *)((int)lVar15 + *param_1),
                                *(unsigned int *)(iVar7 + *param_1));
        } while (iVar6 < 0);
        do {
          uVar12 = uVar12 - 1;
          lVar14 = lVar14 + -4;
          if ((__int64)uVar12 < 0) goto LAB_826a4ff0;
          iVar6 = fn_826A3F08(param_4,*(unsigned int *)(iVar7 + *param_1),
                                *(unsigned int *)((int)lVar14 + *param_1));
        } while (iVar6 < 0);
        iVar6 = *param_1;
        uVar13 = (unsigned int)uVar12;
        if ((int)uVar8 <= (int)uVar13) {
          lVar14 = (uVar12 & 0x3fffffff) << 2;
          lVar15 = (uVar11 & 0x3fffffff) << 2;
          uVar1 = *(unsigned int *)((int)lVar15 + iVar6);
          *(unsigned int *)((int)lVar15 + iVar6) = *(unsigned int *)((int)lVar14 + iVar6);
          *(unsigned int *)((int)lVar14 + iVar6) = uVar1;
          goto LAB_826a4eb0;
        }
        iVar2 = (int)((uVar12 & 0xffffffff) << 2);
        uVar1 = *(unsigned int *)(iVar7 + iVar6);
        *(unsigned int *)(iVar7 + iVar6) = *(unsigned int *)(iVar2 + iVar6);
        *(unsigned int *)(iVar2 + iVar6) = uVar1;
        if ((int)(uVar3 - uVar8) < (int)(uVar13 - uVar4)) {
          *puVar10 = uVar4;
          puVar10[1] = uVar13;
          uVar12 = param_3;
          param_2 = uVar11;
        }
        else {
          puVar10[1] = uVar3;
          *puVar10 = uVar8;
        }
        param_3 = uVar12;
        puVar10 = puVar10 + 2;
      }
LAB_826a4fd0:
      uVar12 = param_2;
      param_2 = uVar12 + 1;
      if ((int)param_2 < (int)uVar3) {
        while( true ) {
          iVar6 = (int)((uVar12 & 0x3fffffff) << 2);
          puVar9 = (unsigned int *)(*param_1 + iVar6);
          iVar7 = fn_826A3F08(param_4,puVar9[1],*puVar9);
          if (-1 < iVar7) break;
          puVar9 = (unsigned int *)(*param_1 + iVar6);
          uVar1 = puVar9[1];
          puVar9[1] = *puVar9;
          *puVar9 = uVar1;
          if ((unsigned int)uVar12 == uVar4) break;
          uVar12 = uVar12 - 1;
        }
        goto LAB_826a4fd0;
      }
      if (puVar10 <= auStack_1a0) break;
      param_2 = (unsigned __int64)puVar10[-2];
      param_3 = (unsigned __int64)puVar10[-1];
      puVar10 = puVar10 + -2;
    } while( true );
  }
  uVar16 = 1;
LAB_826a4dbc:
  fn_826A2A40(param_4);
  return uVar16;
}

