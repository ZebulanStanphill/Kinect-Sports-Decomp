typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_264;
extern unsigned int *auStack_280;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D2C3F8();
extern unsigned int uStack_268;
extern unsigned int uStack_26c;


__int64 fn_82D2D510(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned char **ppuVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  bool bVar7;
  unsigned char **ppuVar8;
  int iVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned int *puVar12;
  unsigned int uVar13;
  unsigned int *puVar14;
  unsigned char **ppuVar15;
  __int64 lVar16;
  __int64 lVar17;
  __int64 lVar18;
  unsigned int *puVar19;
  unsigned char **ppuVar20;
  unsigned char auStack_280 [16];
  unsigned char *puStack_270;
  unsigned int uStack_26c;
  unsigned int uStack_268;
  unsigned char auStack_264 [516];
  
  for (puVar12 = *(unsigned int **)(param_1 + 0x34); puVar12 != (unsigned int *)0x0;
      puVar12 = (unsigned int *)*puVar12) {
    *(unsigned short *)(puVar12 + 8) = *(unsigned short *)(puVar12 + 8) | 0xfff;
  }
  puStack_270 = auStack_264;
  uStack_268 = 0x80000040;
  uStack_26c = 0;
  iVar9 = fn_82D2C3F8(auStack_280,param_1,0,0);
  iVar10 = fn_82CE5410();
  if (uStack_26c == (uStack_268 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar10 + 0x10),&puStack_270,8);
  }
  puVar12 = (unsigned int *)(puStack_270 + uStack_26c * 8);
  if (puVar12 != (unsigned int *)0x0) {
    uVar1 = *(unsigned int *)(iVar9 + 4);
    puVar12[1] = *(unsigned int *)(iVar9 + 8);
    *puVar12 = uVar1;
  }
  uStack_26c = uStack_26c + 1;
  lVar17 = -1;
  ppuVar8 = &puStack_270;
  ppuVar15 = (unsigned char **)(param_1 + 0x40);
  do {
    ppuVar20 = ppuVar8;
    lVar16 = lVar17;
    lVar17 = lVar16 + 1;
    ppuVar15[1] = (unsigned char *)0x0;
    do {
      iVar9 = *(int *)(*ppuVar20 + (int)ppuVar20[1] * 8 + -8);
      ppuVar20[1] = ppuVar20[1] + -1;
      if ((*(unsigned short *)(iVar9 + 0x20) & 0xfff) == 0xfff) {
        puVar19 = (unsigned int *)(iVar9 + 0x14);
        lVar18 = 3;
        *(unsigned short *)(iVar9 + 0x20) = (unsigned short)lVar17 & 0xfff | *(unsigned short *)(iVar9 + 0x20) & 0xf000;
        do {
          uVar5 = *puVar19 & 0xfffffffc;
          uVar6 = *puVar19 & 3;
          if ((uVar5 != 0) && ((*(unsigned short *)(uVar5 + 0x20) & 0xfff) == 0xfff)) {
            iVar2 = *(int *)((uVar6 + 2) * 4 + uVar5);
            iVar3 = *(int *)(((-(unsigned int)(uVar6 != 2) & uVar6 + 1) + 2) * 4 + uVar5);
            iVar9 = *(int *)(iVar2 + 8);
            iVar10 = *(int *)(iVar3 + 8);
            if ((iVar9 < iVar10) ||
               ((iVar9 <= iVar10 &&
                ((iVar9 = *(int *)(iVar2 + 0xc), iVar10 = *(int *)(iVar3 + 0xc), iVar9 < iVar10 ||
                 (iVar9 <= iVar10)))))) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            if ((bVar7) || (bVar7 = false, (*(unsigned int *)((uVar6 + 5) * 4 + uVar5) & 0xfffffffc) == 0))
            {
              bVar7 = true;
            }
            uVar11 = uVar5;
            uVar13 = uVar6;
            if (!bVar7) {
              uVar13 = *(unsigned int *)((uVar6 + 5) * 4 + uVar5);
              uVar11 = uVar13 & 0xfffffffc;
              uVar13 = uVar13 & 3;
            }
            if (((unsigned int)(*(unsigned short *)(uVar11 + 0x20) >> 0xd) & 1 << uVar13) == 0) {
              iVar9 = fn_82CE5410();
              if (ppuVar20[1] == (unsigned char *)((unsigned int)ppuVar20[2] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),ppuVar20,8);
              }
              puVar14 = (unsigned int *)(*ppuVar20 + (int)ppuVar20[1] * 8);
              if (puVar14 != (unsigned int *)0x0) {
                *puVar14 = uVar5;
                puVar14[1] = uVar6;
              }
              ppuVar20[1] = ppuVar20[1] + 1;
            }
            else {
              iVar9 = fn_82CE5410();
              if (ppuVar15[1] == (unsigned char *)((unsigned int)ppuVar15[2] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),ppuVar15,8);
              }
              puVar14 = (unsigned int *)(*ppuVar15 + (int)ppuVar15[1] * 8);
              if (puVar14 != (unsigned int *)0x0) {
                *puVar14 = uVar5;
                puVar14[1] = uVar6;
              }
              ppuVar15[1] = ppuVar15[1] + 1;
            }
          }
          lVar18 = lVar18 + -1;
          puVar19 = puVar19 + 1;
        } while (lVar18 != 0);
      }
    } while (0 < (int)ppuVar20[1]);
    ppuVar4 = ppuVar15 + 1;
    ppuVar8 = ppuVar15;
    ppuVar15 = ppuVar20;
  } while (0 < (int)*ppuVar4);
  iVar9 = fn_82CE5410();
  uStack_26c = 0;
  if ((uStack_268 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar9 + 0x10) + 0x10))
              (*(int **)(iVar9 + 0x10),puStack_270,uStack_268 & 0x3fffffff,8);
  }
  return lVar16 + 2;
}

