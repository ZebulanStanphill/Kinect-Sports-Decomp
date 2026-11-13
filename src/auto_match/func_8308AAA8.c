extern unsigned int *auStack_20;
extern unsigned int lbl_821878B0;


void fn_8308AAA8(int param_1,int param_2,int param_3,int param_4,unsigned short param_5,int param_6)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned int *puVar4;
  int in_r0;
  unsigned __int64 uVar5;
  unsigned short *puVar6;
  int iVar7;
  unsigned int uVar8;
  __int64 lVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned short *puVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned char auStack_20 [16];
  
  uVar1 = *(unsigned short *)(param_4 + 8);
  uVar2 = *(unsigned short *)(param_4 + 10);
  puVar4 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  uVar13 = *puVar4;
  uVar14 = puVar4[1];
  uVar15 = puVar4[2];
  uVar16 = puVar4[3];
  if (-1 < (__int64)(param_2 >> 7)) {
    lVar9 = (__int64)(param_2 >> 7) + 1;
    iVar7 = param_6;
    do {
      puVar4 = (unsigned int *)(in_r0 + iVar7 & 0xfffffff0);
      *puVar4 = uVar13;
      puVar4[1] = uVar14;
      puVar4[2] = uVar15;
      puVar4[3] = uVar16;
      lVar9 = lVar9 + -1;
      iVar7 = iVar7 + 0x10;
    } while (lVar9 != 0);
  }
  iVar7 = *(int *)(param_1 + 0xac);
  uVar10 = iVar7 + 4;
  if ((*(int *)(param_1 + 0xd0) != 0) &&
     (param_3 = param_3 >> (0x10U - *(int *)(param_1 + 0xd4) & 0x3f), 0 < param_3)) {
    iVar11 = *(int *)(param_1 + 0xd8) + param_3 * 0x10;
    iVar7 = ((int)(unsigned int)*(unsigned short *)(iVar11 + -0x10) >> 5) * 4;
    *(unsigned int *)(iVar7 + param_6) =
         *(unsigned int *)(&lbl_821878B0 + (*(unsigned short *)(iVar11 + -0x10) & 0x1f) * 4) ^
         *(unsigned int *)(iVar7 + param_6);
    uVar5 = (unsigned __int64)*(unsigned int *)(iVar11 + -8);
    puVar6 = *(unsigned short **)(iVar11 + -0xc);
    if (-1 < (__int64)(uVar5 - 1)) {
      do {
        uVar3 = *puVar6;
        if (uVar3 != param_5) {
          iVar7 = ((int)(unsigned int)uVar3 >> 5) * 4;
          *(unsigned int *)(iVar7 + param_6) =
               *(unsigned int *)(&lbl_821878B0 + (uVar3 & 0x1f) * 4) ^ *(unsigned int *)(iVar7 + param_6);
        }
        puVar6 = puVar6 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    iVar11 = (unsigned int)*(unsigned short *)(iVar11 + -0x10) * 0x10 + *(int *)(param_1 + 0xa0);
    puVar6 = (unsigned short *)((unsigned int)*(unsigned short *)(iVar11 + 10) * 4 + *(int *)(param_1 + 0xac));
    puVar12 = (unsigned short *)((*(unsigned short *)(iVar11 + 8) + 1) * 4 + *(int *)(param_1 + 0xac));
    if (puVar12 < puVar6) {
      lVar9 = (unsigned __int64)((unsigned int)((int)puVar6 + (-1 - (int)puVar12)) >> 2) + 1;
      do {
        if ((*puVar12 & 1) == 0) {
          iVar7 = ((int)(unsigned int)puVar12[1] >> 5) * 4;
          *(unsigned int *)(iVar7 + param_6) =
               *(unsigned int *)(iVar7 + param_6) & ~*(unsigned int *)(&lbl_821878B0 + (puVar12[1] & 0x1f) * 4);
        }
        puVar12 = puVar12 + 2;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    iVar7 = *(int *)(param_1 + 0xac);
    uVar10 = (*(unsigned short *)(iVar11 + 8) + 1) * 4 + iVar7;
  }
  uVar8 = (unsigned int)uVar1 * 4 + iVar7;
  if (uVar10 < uVar8) {
    lVar9 = (unsigned __int64)((uVar8 - uVar10) - 1 >> 2) + 1;
    do {
      puVar6 = (unsigned short *)(uVar10 + 2);
      uVar10 = uVar10 + 4;
      iVar7 = ((int)(unsigned int)*puVar6 >> 5) * 4;
      *(unsigned int *)(iVar7 + param_6) =
           *(unsigned int *)(&lbl_821878B0 + (*puVar6 & 0x1f) * 4) ^ *(unsigned int *)(iVar7 + param_6);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  puVar12 = (unsigned short *)(uVar10 + 4);
  puVar6 = (unsigned short *)((unsigned int)uVar2 * 4 + *(int *)(param_1 + 0xac));
  if (puVar12 < puVar6) {
    lVar9 = (unsigned __int64)((unsigned int)((int)puVar6 + (-1 - (int)puVar12)) >> 2) + 1;
    do {
      if ((*puVar12 & 1) == 0) {
        iVar7 = ((int)(unsigned int)puVar12[1] >> 5) * 4;
        *(unsigned int *)(iVar7 + param_6) =
             *(unsigned int *)(&lbl_821878B0 + (puVar12[1] & 0x1f) * 4) ^ *(unsigned int *)(iVar7 + param_6);
      }
      puVar12 = puVar12 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}

