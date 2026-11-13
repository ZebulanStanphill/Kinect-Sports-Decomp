#define true 1
extern int fn_8265C990();
extern int fn_82F68CC0();


void fn_82ACB930(unsigned int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  int iVar5;
  __int64 lVar6;
  int iVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  
  uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 4);
  if ((*(unsigned int *)(param_1 + 4) & 1) != 0) {
    return;
  }
  if (uVar11 == 0) {
    return;
  }
  do {
    puVar3 = (unsigned int *)uVar11;
    uVar10 = 0;
    if ((unsigned __int64)(unsigned int)puVar3[2] != 0) {
      lVar8 = uVar11 + 0x10;
      do {
        if (*(int *)lVar8 == param_2) {
          uVar9 = (unsigned __int64)(unsigned int)puVar3[2] - 1;
          puVar3[2] = (int)uVar9;
          if (uVar9 == 0) {
            puVar2 = (unsigned int *)((unsigned int)puVar3 & 0xfffffffe);
            *(unsigned int *)(puVar2[1] & 0xfffffffe) = *puVar2;
            *(unsigned int *)(*puVar2 & 0xfffffffe) = puVar2[1];
            iVar5 = *(int *)(param_1 & 0xfffff000);
            if ((puVar3[3] + 4 & 0x3fffffff) < 0x22) {
              iVar7 = ((puVar3[3] + 4 & 0x3fffffff) - 1) * 4;
              *puVar3 = *(unsigned int *)(iVar7 + iVar5);
              *(unsigned int **)(iVar7 + iVar5) = puVar3;
              return;
            }
            puVar2 = (unsigned int *)((unsigned int)(uVar11 - 0xc) & 0xfffffffe);
            *(unsigned int *)(puVar2[1] & 0xfffffffe) = *puVar2;
            *(unsigned int *)(*puVar2 & 0xfffffffe) = puVar2[1];
            fn_8265C990(uVar11 - 0xc,0x618d0000);
            return;
          }
          if ((uVar9 & 0xffffffff) <= (uVar10 & 0xffffffff)) {
            return;
          }
          uVar9 = (uVar9 - uVar10 & 0x3fffffff) * 4;
          lVar6 = (uVar10 + 5 & 0x3fffffff) * 4 + uVar11;
          lVar8 = (uVar10 + 4 & 0x3fffffff) * 4 + uVar11;
          iVar7 = (int)lVar6;
          iVar5 = (int)lVar8;
          if (iVar5 == iVar7) {
            return;
          }
          if (iVar7 <= iVar5) {
            lVar4 = uVar9 + 1;
            uVar10 = lVar6 + uVar9;
            for (uVar11 = lVar8 + uVar9; lVar4 = lVar4 + -1, lVar4 != 0 && (uVar11 & 3) != 0;
                uVar11 = uVar11 - 1) {
              uVar9 = uVar9 - 1;
              iVar5 = (int)uVar10;
              uVar10 = uVar10 - 1;
              *(unsigned char *)((int)uVar11 + -1) = *(unsigned char *)(iVar5 + -1);
            }
            uVar12 = (uVar9 & 0xffffffff) >> 2;
            if (uVar12 != 0) {
              if ((uVar10 & 3) == 0) {
                do {
                  iVar5 = (int)uVar10;
                  uVar10 = uVar10 - 4;
                  *(unsigned int *)((int)uVar11 + -4) = *(unsigned int *)(iVar5 + -4);
                  uVar11 = uVar11 - 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              else {
                do {
                  iVar5 = (int)uVar10;
                  uVar11 = uVar11 - 4;
                  uVar10 = uVar10 - 4;
                  *(unsigned int *)uVar11 = *(unsigned int *)(iVar5 + -4);
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
            }
            uVar9 = uVar9 & 3;
            if (uVar9 != 0) {
              do {
                iVar5 = (int)uVar10;
                uVar10 = uVar10 - 1;
                *(unsigned char *)((int)uVar11 + -1) = *(unsigned char *)(iVar5 + -1);
                uVar11 = uVar11 - 1;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
              return;
            }
            return;
          }
          fn_82F68CC0();
          return;
        }
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 4;
      } while ((uVar10 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar3[2]);
    }
    uVar1 = *(unsigned int *)(((unsigned int)puVar3 & 0xfffffffe) + 4);
    uVar11 = (unsigned __int64)uVar1;
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (uVar11 == 0) {
      return;
    }
  } while( true );
}

