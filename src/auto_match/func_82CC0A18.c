extern int fn_82C562F0();
extern int fn_830C6378();


unsigned __int64 fn_82CC0A18(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned short *puVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  int iVar8;
  __int64 lVar9;
  __int64 lVar10;
  unsigned short *puVar11;
  unsigned short *puVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  int iVar15;
  int iVar16;
  
  lVar9 = (param_2 & 0x7fffffff) * 2 + (unsigned __int64)*(unsigned int *)(param_1 + 0x54c8);
  lVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6070) + 8;
  iVar1 = (int)((lVar9 + 0x2ca5U & 0x3fffffff) << 2);
  if (*(int *)(iVar1 + param_1) == 0) {
    puVar3 = (unsigned short *)fn_82C562F0(lVar10,0x400,0xffffffff82196582);
    *(unsigned short **)(iVar1 + param_1) = puVar3;
    if (puVar3 != (unsigned short *)0x0) {
      iVar15 = 0;
      puVar12 = puVar3 + 0xff;
      puVar11 = puVar3 + 0x101;
      do {
        if (iVar15 < *(int *)(param_1 + 0x5520)) {
          iVar16 = *(int *)(param_1 + 0x5530) * iVar15;
          lVar6 = (__int64)(iVar16 >> 8);
          lVar13 = (__int64)(-iVar16 >> 8);
        }
        else {
          iVar16 = *(int *)(param_1 + 0x5534) * iVar15;
          lVar6 = (__int64)(iVar16 >> 8) + (unsigned __int64)*(unsigned int *)(param_1 + 0x5528);
          lVar13 = (__int64)(-iVar16 >> 8) + ~(unsigned __int64)*(unsigned int *)(param_1 + 0x5528) + 1;
        }
        uVar4 = fn_830C6378(-(unsigned __int64)*(unsigned int *)(param_1 + 0x1a4),lVar6,
                                (unsigned __int64)*(unsigned int *)(param_1 + 0x1a4) - 1);
        uVar5 = fn_830C6378(-(unsigned __int64)*(unsigned int *)(param_1 + 0x1a4),lVar13,
                                (unsigned __int64)*(unsigned int *)(param_1 + 0x1a4) - 1);
        iVar15 = iVar15 + 1;
        puVar12 = puVar12 + 1;
        *puVar12 = uVar4;
        puVar11 = puVar11 + -1;
        *puVar11 = uVar5;
      } while (iVar15 < 0x100);
      uVar4 = fn_830C6378(-(unsigned __int64)*(unsigned int *)(param_1 + 0x1a4),0xffffffffffffff00,
                              (unsigned __int64)*(unsigned int *)(param_1 + 0x1a4) - 1);
      *puVar3 = uVar4;
      puVar3 = (unsigned short *)fn_82C562F0(lVar10,0x100,0xffffffff82196582);
      iVar15 = (int)((lVar9 + 0x2cadU & 0xffffffff) << 2);
      *(unsigned short **)(iVar15 + param_1) = puVar3;
      if (puVar3 != (unsigned short *)0x0) {
        iVar16 = 0;
        puVar12 = puVar3 + 0x3f;
        puVar11 = puVar3 + 0x41;
        do {
          if (iVar16 < *(int *)(param_1 + 0x5524)) {
            iVar8 = *(int *)(param_1 + 0x5530) * iVar16;
            uVar7 = (unsigned __int64)(unsigned int)(iVar8 >> 7) & 0xfffffffe;
            uVar14 = (unsigned __int64)(unsigned int)(-iVar8 >> 7) & 0xfffffffe;
          }
          else {
            iVar8 = *(int *)(param_1 + 0x5534) * iVar16;
            uVar7 = ((unsigned __int64)(unsigned int)(iVar8 >> 7) & 0xfffffffe) +
                    ((unsigned __int64)*(unsigned int *)(param_1 + 0x552c) & 0x7fffffff) * 2;
            uVar14 = (~(unsigned __int64)*(unsigned int *)(param_1 + 0x552c) + 1 & 0x7fffffff) * 2 +
                     ((unsigned __int64)(unsigned int)(-iVar8 >> 7) & 0xfffffffe);
          }
          uVar4 = fn_830C6378(-(unsigned __int64)*(unsigned int *)(param_1 + 0x1a8),uVar7,
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8) - 2);
          puVar12 = puVar12 + 1;
          *puVar12 = uVar4;
          uVar4 = fn_830C6378(-(unsigned __int64)*(unsigned int *)(param_1 + 0x1a8),uVar14,
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8) - 2);
          iVar16 = iVar16 + 1;
          puVar11 = puVar11 + -1;
          *puVar11 = uVar4;
        } while (iVar16 < 0x40);
        uVar4 = fn_830C6378(-(unsigned __int64)*(unsigned int *)(param_1 + 0x1a8),0xffffffffffffff80,
                                (unsigned __int64)*(unsigned int *)(param_1 + 0x1a8) - 2);
        *puVar3 = uVar4;
        *(unsigned int *)(param_1 + 0xb2dc) = *(unsigned int *)(iVar1 + param_1);
        *(unsigned int *)(param_1 + 0xb2e0) = *(unsigned int *)(iVar15 + param_1);
        return 0;
      }
    }
    uVar2 = 0xfffffffffffffff7;
  }
  else {
    *(int *)(param_1 + 0xb2dc) = *(int *)(iVar1 + param_1);
    *(unsigned int *)(param_1 + 0xb2e0) =
         *(unsigned int *)((int)((lVar9 + 0x2cadU & 0xffffffff) << 2) + param_1);
    uVar2 = 0;
  }
  return uVar2;
}

