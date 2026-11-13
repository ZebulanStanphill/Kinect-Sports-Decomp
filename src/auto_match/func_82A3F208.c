extern unsigned int *auStack_94;
extern unsigned int *auStack_e0;
extern int fn_82F691F0();
extern unsigned int iStack_9c;


unsigned __int64
fn_82A3F208(unsigned __int64 param_1,int param_2,int param_3,unsigned int param_4,int param_5,int param_6)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  short *psVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  unsigned int uVar12;
  unsigned __int64 uVar11;
  int iVar14;
  int iVar15;
  unsigned __int64 uVar13;
  unsigned short *puVar16;
  __int64 lVar17;
  unsigned int auStack_e0 [17];
  int iStack_9c;
  unsigned int auStack_94 [37];
  
  puVar9 = auStack_94 + 1;
  lVar17 = 0x10;
  do {
    puVar9 = puVar9 + 1;
    *puVar9 = 0;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  iVar14 = 0;
  for (iVar15 = param_2; iVar15 != 0; iVar15 = iVar15 + -1) {
    pbVar2 = (unsigned char *)(iVar14 + param_3);
    iVar14 = iVar14 + 1;
    auStack_94[*pbVar2 + 1] = auStack_94[*pbVar2 + 1] + 1;
  }
  auStack_e0[1] = 0;
  iVar15 = 0;
  iVar14 = 1;
  lVar17 = 0x10;
  do {
    uVar6 = 0x10 - iVar14;
    iVar14 = iVar14 + 1;
    *(int *)((int)auStack_e0 + iVar15 + 8) =
         (*(int *)((int)auStack_94 + iVar15 + 8) << (uVar6 & 0x3f)) +
         *(int *)((int)auStack_e0 + iVar15 + 4);
    iVar15 = iVar15 + 4;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if (iStack_9c != 0x10000) {
    if (iStack_9c != 0) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_5,0,(1 << (param_4 & 0x3f)) << 1);
  }
  uVar6 = param_4 & 0xff;
  uVar10 = 1;
  uVar3 = 0x10 - uVar6;
  if (uVar6 != 0) {
    iVar14 = 0;
    do {
      uVar4 = uVar6 - uVar10;
      puVar9 = (unsigned int *)((int)auStack_e0 + iVar14 + 4);
      uVar12 = *puVar9;
      uVar10 = uVar10 + 1;
      *(int *)((int)auStack_94 + iVar14 + 8) = 1 << (uVar4 & 0x3f);
      iVar14 = iVar14 + 4;
      *puVar9 = uVar12 >> (uVar3 & 0x3f);
    } while (uVar10 <= uVar6);
    if (0x10 < uVar10) goto LAB_82a3f37c;
  }
  uVar12 = 0x10 - uVar10;
  iVar14 = 0x11 - uVar10;
  puVar9 = auStack_94 + uVar10;
  do {
    puVar9 = puVar9 + 1;
    *puVar9 = 1 << (uVar12 & 0x3f);
    uVar12 = uVar12 - 1;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
LAB_82a3f37c:
  uVar10 = auStack_e0[uVar6 + 1] >> (uVar3 & 0x3f);
  if ((unsigned __int64)uVar10 != 0x10000) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar10 * 2 + param_5,0,
                 ((unsigned __int64)(unsigned int)(1 << (param_4 & 0x3f)) - (unsigned __int64)uVar10 & 0x7fffffff) << 1);
  }
  iVar15 = 0;
  iVar14 = param_2;
  if (0 < param_2) {
    do {
      bVar1 = *(unsigned char *)(iVar15 + param_3);
      uVar10 = (unsigned int)bVar1;
      if (uVar10 != 0) {
        uVar12 = auStack_e0[bVar1];
        uVar13 = (unsigned __int64)uVar12;
        uVar11 = auStack_94[bVar1 + 1] + uVar13;
        if (uVar6 < uVar10) {
          auStack_e0[bVar1] = (unsigned int)uVar11;
          uVar10 = uVar10 - uVar6 & 0xff;
          iVar5 = uVar12 << (param_4 & 0x3f);
          psVar8 = (short *)((uVar12 >> (uVar3 & 0x3f)) * 2 + param_5);
          iVar7 = -iVar14;
          puVar16 = (unsigned short *)(iVar14 * 4 + param_6 + -4);
          do {
            if (*psVar8 == 0) {
              puVar16[3] = 0;
              iVar14 = iVar14 + 1;
              puVar16 = puVar16 + 2;
              *puVar16 = 0;
              *psVar8 = (short)iVar7;
              iVar7 = iVar7 + -1;
            }
            if ((short)iVar5 < 0) {
              psVar8 = (short *)(param_6 + ((int)*psVar8 & 0x3fffffffU) * -4 + 2);
            }
            else {
              psVar8 = (short *)(param_6 + ((int)*psVar8 & 0x3fffffffU) * -4);
            }
            iVar5 = iVar5 << 1;
            uVar10 = uVar10 + 0xff & 0xff;
          } while (uVar10 != 0);
          *psVar8 = (short)iVar15;
        }
        else {
          if ((unsigned __int64)(unsigned int)(1 << (param_4 & 0x3f)) < (uVar11 & 0xffffffff)) {
            return 0;
          }
          if (uVar13 < (uVar11 & 0xffffffff)) {
            lVar17 = uVar11 - uVar13;
            psVar8 = (short *)(uVar12 * 2 + param_5 + -2);
            do {
              psVar8 = psVar8 + 1;
              *psVar8 = (short)iVar15;
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
          }
          auStack_e0[bVar1] = (unsigned int)uVar11;
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < param_2);
  }
  return 1;
}

