typedef unsigned char bool;
#define true 1
extern int fn_82E857C0();
extern int fn_82E85820();
extern int fn_82E858B0();
extern int fn_82E85940();
extern int fn_82E85958();
extern int fn_82E85978();


void fn_82E859B0(int param_1,int param_2)

{
  bool bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char *pbVar5;
  int (**pcVar6)();
  int (**pcVar7)();
  int (**pcVar8)();
  int iVar9;
  unsigned short *puVar10;
  unsigned char *pbVar11;
  unsigned int uVar12;
  int iVar13;
  int iVar14;
  __int64 lVar15;
  
  if (*(int *)(param_1 + 0x97c) == 0) {
    pcVar8 = fn_82E85940;
    pcVar7 = fn_82E85958;
    pcVar6 = fn_82E85978;
  }
  else {
    pcVar8 = fn_82E857C0;
    pcVar7 = fn_82E85820;
    pcVar6 = fn_82E858B0;
  }
  *(int (***)())(param_1 + 0x9ec) = pcVar6;
  *(int (***)())(param_1 + 0x9e8) = pcVar7;
  *(int (***)())(param_1 + 0x9e4) = pcVar8;
  if (param_2 != 0) {
    uVar12 = *(unsigned int *)(param_1 + 0x588) | 0x8000;
    if (*(unsigned int *)(param_1 + 0xa50) != uVar12) {
      puVar10 = (unsigned short *)0x83256dae;
      pbVar11 = (unsigned char *)0x831afdf7;
      lVar15 = 0x1000;
      do {
        pbVar5 = pbVar11 + 1;
        bVar2 = pbVar11[2];
        bVar3 = pbVar11[3];
        pbVar11 = pbVar11 + 4;
        bVar4 = *pbVar11;
        puVar10[1] = (short)(((__int64)(int)(unsigned int)*pbVar5 * (__int64)*(int *)(param_1 + 0x588) &
                             0xffffffffU) << 1);
        puVar10[2] = (short)(((__int64)(int)(unsigned int)bVar2 * (__int64)*(int *)(param_1 + 0x588) &
                             0xffffffffU) << 1);
        puVar10[3] = (short)(((__int64)(int)(unsigned int)bVar3 * (__int64)*(int *)(param_1 + 0x588) &
                             0xffffffffU) << 1);
        puVar10 = puVar10 + 4;
        *puVar10 = (short)(((__int64)(int)(unsigned int)bVar4 * (__int64)*(int *)(param_1 + 0x588) &
                           0xffffffffU) << 1);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      uVar12 = *(unsigned int *)(param_1 + 0x588) | 0x8000;
      *(unsigned int *)(param_1 + 0xa50) = uVar12;
    }
    if (*(unsigned int *)(param_1 + 0xa54) != uVar12) {
      puVar10 = (unsigned short *)0x8324edae;
      pbVar11 = (unsigned char *)0x831b3df7;
      lVar15 = 0x1000;
      do {
        pbVar5 = pbVar11 + 1;
        bVar2 = pbVar11[2];
        bVar3 = pbVar11[3];
        pbVar11 = pbVar11 + 4;
        bVar4 = *pbVar11;
        puVar10[1] = (short)(((__int64)(int)(unsigned int)*pbVar5 * (__int64)*(int *)(param_1 + 0x588) &
                             0xffffffffU) << 1);
        puVar10[2] = (short)(((__int64)(int)(unsigned int)bVar2 * (__int64)*(int *)(param_1 + 0x588) &
                             0xffffffffU) << 1);
        puVar10[3] = (short)(((__int64)(int)(unsigned int)bVar3 * (__int64)*(int *)(param_1 + 0x588) &
                             0xffffffffU) << 1);
        puVar10 = puVar10 + 4;
        *puVar10 = (short)(((__int64)(int)(unsigned int)bVar4 * (__int64)*(int *)(param_1 + 0x588) &
                           0xffffffffU) << 1);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      *(unsigned int *)(param_1 + 0xa54) = *(unsigned int *)(param_1 + 0x588) | 0x8000;
      return;
    }
    return;
  }
  if (*(int *)(param_1 + 0xa50) == *(int *)(param_1 + 0x588)) {
    return;
  }
  iVar9 = 0;
  puVar10 = (unsigned short *)0x83256dae;
  lVar15 = 0x4000;
  if (*(int *)(param_1 + 0x7b3c) == 0) {
    do {
      uVar12 = (int)(iVar9 - 0x2000U) >> 0x1f;
      iVar13 = (iVar9 - 0x2000U ^ uVar12) - uVar12;
      if (iVar13 < 1) {
        iVar14 = 1;
      }
      else if (iVar13 < 3) {
        iVar14 = 3;
      }
      else if (iVar13 < 7) {
        iVar14 = 5;
      }
      else if (iVar13 < 0xf) {
        iVar14 = 7;
      }
      else {
        iVar14 = 9;
        if (0x1e < iVar13) {
          iVar14 = 0xf;
        }
      }
      iVar9 = iVar9 + 1;
      puVar10 = puVar10 + 1;
      *puVar10 = (short)(((__int64)iVar14 * (__int64)*(int *)(param_1 + 0x588) & 0xffffffffU) << 1
                        );
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    *(unsigned int *)(param_1 + 0xa50) = *(unsigned int *)(param_1 + 0x588);
    return;
  }
  do {
    uVar12 = (int)(iVar9 - 0x2000U) >> 0x1f;
    uVar12 = (iVar9 - 0x2000U ^ uVar12) - uVar12;
    if ((int)uVar12 < 1) {
      uVar12 = 1;
    }
    else if ((int)uVar12 < 3) {
      uVar12 = (uVar12 == 1 ^ 1) + 2;
    }
    else if ((int)uVar12 < 7) {
      if ((uVar12 != 3) && (uVar12 != 4)) {
LAB_82e85be0:
        uVar12 = 5;
      }
    }
    else if ((int)uVar12 < 0xf) {
      if ((int)uVar12 < 9) goto LAB_82e85be0;
      if ((int)uVar12 < 0xb) {
        uVar12 = 6;
      }
      else {
LAB_82e85c08:
        uVar12 = 7;
      }
    }
    else if ((int)uVar12 < 0x1f) {
      if ((int)uVar12 < 0x13) goto LAB_82e85c08;
      if (0x16 < (int)uVar12) goto LAB_82e85c28;
      uVar12 = 8;
    }
    else if ((int)uVar12 < 0x3f) {
LAB_82e85c28:
      uVar12 = 9;
    }
    else {
      bVar1 = 0x5e < (int)uVar12;
      uVar12 = 10;
      if (bVar1) {
        uVar12 = 0xb;
      }
    }
    iVar9 = iVar9 + 1;
    puVar10 = puVar10 + 1;
    *puVar10 = (short)(((__int64)(int)(uVar12 & 0xffff) * (__int64)*(int *)(param_1 + 0x588) &
                       0xffffffffU) << 1);
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) {
      *(unsigned int *)(param_1 + 0xa50) = *(unsigned int *)(param_1 + 0x588);
      return;
    }
  } while( true );
}

