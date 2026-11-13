extern int fn_82C562F0();
extern int fn_830C6378();


unsigned __int64 fn_82CC0710(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned short *puVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  __int64 lVar6;
  int iVar7;
  unsigned short *puVar8;
  __int64 lVar9;
  __int64 lVar10;
  unsigned short *puVar12;
  unsigned __int64 uVar11;
  unsigned short *puVar14;
  unsigned __int64 uVar13;
  __int64 lVar15;
  unsigned short *puVar16;
  int iVar17;
  int iVar18;
  
  lVar9 = (param_2 & 0x7fffffff) * 2 + (unsigned __int64)*(unsigned int *)(param_1 + 0x54c8);
  lVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6070) + 8;
  iVar1 = (int)((lVar9 + 0x2c95U & 0x3fffffff) << 2);
  if (*(int *)(iVar1 + param_1) == 0) {
    puVar3 = (unsigned short *)fn_82C562F0(lVar10,0x400,0xffffffff82196582);
    *(unsigned short **)(iVar1 + param_1) = puVar3;
    if (puVar3 != (unsigned short *)0x0) {
      iVar17 = 0;
      puVar14 = puVar3 + 0xff;
      puVar12 = puVar3 + 0x101;
      do {
        if (iVar17 < *(int *)(param_1 + 0x553c)) {
          iVar18 = *(int *)(param_1 + 0x554c) * iVar17;
          lVar6 = (__int64)(iVar18 >> 8);
          lVar15 = (__int64)(-iVar18 >> 8);
        }
        else {
          iVar18 = *(int *)(param_1 + 0x5550) * iVar17;
          lVar6 = (__int64)(iVar18 >> 8) + (unsigned __int64)*(unsigned int *)(param_1 + 0x5544);
          lVar15 = (__int64)(-iVar18 >> 8) + ~(unsigned __int64)*(unsigned int *)(param_1 + 0x5544) + 1;
        }
        uVar4 = fn_830C6378(-(unsigned __int64)*(unsigned int *)(param_1 + 0x1a4),lVar6,
                                (unsigned __int64)*(unsigned int *)(param_1 + 0x1a4) - 1);
        uVar5 = fn_830C6378(-(unsigned __int64)*(unsigned int *)(param_1 + 0x1a4),lVar15,
                                (unsigned __int64)*(unsigned int *)(param_1 + 0x1a4) - 1);
        iVar17 = iVar17 + 1;
        puVar14 = puVar14 + 1;
        *puVar14 = uVar4;
        puVar12 = puVar12 + -1;
        *puVar12 = uVar5;
      } while (iVar17 < 0x100);
      uVar4 = fn_830C6378(-(unsigned __int64)*(unsigned int *)(param_1 + 0x1a4),0xffffffffffffff00,
                              (unsigned __int64)*(unsigned int *)(param_1 + 0x1a4) - 1);
      *puVar3 = uVar4;
      puVar3 = (unsigned short *)fn_82C562F0(lVar10,0x300,0xffffffff82196582);
      iVar17 = (int)((lVar9 + 0x2c9dU & 0xffffffff) << 2);
      *(unsigned short **)(iVar17 + param_1) = puVar3;
      if (puVar3 != (unsigned short *)0x0) {
        puVar8 = puVar3 + 0xc0;
        iVar18 = 0;
        puVar14 = puVar3 + 0x141;
        puVar12 = puVar8;
        puVar16 = puVar8;
        do {
          if (iVar18 < *(int *)(param_1 + 0x5540)) {
            iVar7 = *(int *)(param_1 + 0x554c) * iVar18;
            uVar13 = (unsigned __int64)(unsigned int)(iVar7 >> 7) & 0xfffffffe;
            uVar11 = (unsigned __int64)(unsigned int)(-iVar7 >> 7) & 0xfffffffe;
          }
          else {
            iVar7 = *(int *)(param_1 + 0x5550) * iVar18;
            uVar13 = ((unsigned __int64)(unsigned int)(iVar7 >> 7) & 0xfffffffe) +
                     ((unsigned __int64)*(unsigned int *)(param_1 + 0x5548) & 0x7fffffff) * 2;
            uVar11 = (~(unsigned __int64)*(unsigned int *)(param_1 + 0x5548) + 1 & 0x7fffffff) * 2 +
                     ((unsigned __int64)(unsigned int)(-iVar7 >> 7) & 0xfffffffe);
          }
          uVar4 = fn_830C6378(-(unsigned __int64)*(unsigned int *)(param_1 + 0x1a8),uVar13,
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8) - 2);
          *(unsigned short *)((int)puVar3 + (int)puVar16 + (0x80 - (int)puVar8)) = uVar4;
          uVar4 = fn_830C6378(-(unsigned __int64)*(unsigned int *)(param_1 + 0x1a8),uVar11,
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8) - 2);
          *(unsigned short *)((int)puVar3 + (int)puVar12 + (0x80 - (int)puVar8)) = uVar4;
          uVar4 = fn_830C6378(1 - (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8),uVar13 + 1,
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8) - 1);
          *puVar16 = uVar4;
          uVar4 = fn_830C6378(1 - (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8),uVar11 + 1,
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8) - 1);
          *puVar12 = uVar4;
          uVar4 = fn_830C6378(1 - (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8),uVar13 - 1,
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8) - 1);
          puVar16[0x80] = uVar4;
          uVar4 = fn_830C6378(1 - (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8),uVar11 - 1,
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8) - 1);
          iVar18 = iVar18 + 1;
          puVar14 = puVar14 + -1;
          *puVar14 = uVar4;
          puVar16 = puVar16 + 1;
          puVar12 = puVar12 + -1;
        } while (iVar18 < 0x40);
        uVar4 = fn_830C6378(-(unsigned __int64)*(unsigned int *)(param_1 + 0x1a8),0xffffffffffffff80,
                                (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8) - 2);
        *puVar3 = uVar4;
        uVar4 = fn_830C6378(1 - (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8),0xffffffffffffff81,
                                (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8) - 1);
        puVar3[0x80] = uVar4;
        uVar4 = fn_830C6378(1 - (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8),0xffffffffffffff7f,
                                (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8) - 1);
        puVar3[0x100] = uVar4;
        *(unsigned int *)(param_1 + 0xb2d4) = *(unsigned int *)(iVar1 + param_1);
        *(unsigned int *)(param_1 + 0xb2d8) = *(unsigned int *)(iVar17 + param_1);
        return 0;
      }
    }
    uVar2 = 0xfffffffffffffff7;
  }
  else {
    *(int *)(param_1 + 0xb2d4) = *(int *)(iVar1 + param_1);
    *(unsigned int *)(param_1 + 0xb2d8) =
         *(unsigned int *)((int)((lVar9 + 0x2c9dU & 0xffffffff) << 2) + param_1);
    uVar2 = 0;
  }
  return uVar2;
}

