void fn_82CD9078(unsigned int *param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,int param_7,int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  int iVar8;
  int iVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  int iVar13;
  unsigned int *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  int iVar21;
  unsigned __int64 uVar22;
  int iVar23;
  int iVar24;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  int in_stack_00000064;
  
  lVar12 = (param_5 & 0xffff) * 0x10000;
  lVar10 = (param_6 & 0xffff) * 0x10000;
  uVar20 = lVar12 - 0x10000;
  uVar11 = (unsigned __int64)in_stack_00000054 - 1;
  uVar19 = lVar10 - 0x10000;
  uVar1 = (int)uVar20 / (int)uVar11;
  uVar18 = (unsigned __int64)in_stack_0000005c - 1;
  uVar2 = (int)uVar19 / (int)uVar18;
  uVar22 = ((__int64)((int)uVar2 >> 4) + (unsigned __int64)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + lVar10
           ) - 0x8000;
  trapWord(6,uVar11,0);
  trapWord(6,uVar18,0);
  trapWord(5,uVar11 & ~(((uVar20 & 0x7fffffff) << 1 | (uVar20 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar18 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iVar16 = ((int)uVar1 >> 4) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + (int)lVar12 + -0x8000;
  iVar15 = 0x8000;
  if (((unsigned int)param_1 & 3) == 0) {
    if (0x7fff < (int)uVar22) {
      uVar11 = uVar22;
      do {
        iVar13 = 0x8000;
        if (0x7fff < iVar16) {
          iVar17 = (iVar15 >> 0x11) * param_8;
          iVar23 = (iVar15 >> 0x10) * param_7 + param_2;
          iVar21 = ((int)(iVar15 + uVar2) >> 0x10) * param_7 + param_2;
          puVar14 = param_1;
          do {
            iVar8 = iVar13 >> 0x10;
            iVar24 = iVar13 + uVar1;
            iVar9 = iVar13 >> 0x11;
            iVar13 = uVar1 * 2 + iVar13;
            bVar3 = *(unsigned char *)(iVar21 + iVar8);
            iVar24 = iVar24 >> 0x10;
            bVar4 = *(unsigned char *)(iVar17 + iVar9 + param_3);
            iVar9 = (unsigned int)*(unsigned char *)(iVar17 + param_4 + iVar9) * 0x10000;
            bVar5 = *(unsigned char *)(iVar21 + iVar24);
            *puVar14 = (unsigned int)*(unsigned char *)(iVar23 + iVar24) * 0x1000000 + iVar9 |
                       (unsigned int)*(unsigned char *)(iVar23 + iVar8) * 0x100 + (unsigned int)bVar4;
            *(unsigned int *)(in_stack_00000064 * 2 + (int)puVar14) =
                 (unsigned int)bVar5 * 0x1000000 + iVar9 | (unsigned int)bVar3 * 0x100 + (unsigned int)bVar4;
            puVar14 = puVar14 + 1;
          } while (iVar13 <= iVar16);
          uVar11 = uVar22 & 0xffffffff;
        }
        iVar15 = uVar2 * 2 + iVar15;
        param_1 = param_1 + in_stack_00000064;
      } while (iVar15 <= (int)uVar11);
    }
  }
  else if (0x7fff < (int)uVar22) {
    uVar11 = uVar22;
    do {
      iVar13 = 0x8000;
      if (0x7fff < iVar16) {
        iVar17 = (iVar15 >> 0x11) * param_8;
        iVar23 = (iVar15 >> 0x10) * param_7 + param_2;
        iVar21 = ((int)(iVar15 + uVar2) >> 0x10) * param_7 + param_2;
        puVar14 = param_1;
        do {
          iVar8 = iVar13 >> 0x10;
          iVar24 = iVar13 + uVar1;
          iVar9 = iVar13 >> 0x11;
          iVar13 = uVar1 * 2 + iVar13;
          bVar3 = *(unsigned char *)(iVar21 + iVar8);
          bVar4 = *(unsigned char *)(iVar17 + param_4 + iVar9);
          bVar5 = *(unsigned char *)(iVar17 + iVar9 + param_3);
          iVar24 = iVar24 >> 0x10;
          bVar6 = *(unsigned char *)(iVar23 + iVar24);
          bVar7 = *(unsigned char *)(iVar21 + iVar24);
          *(unsigned short *)puVar14 = (unsigned short)*(unsigned char *)(iVar23 + iVar8) * 0x100 + (unsigned short)bVar4;
          *(unsigned short *)(in_stack_00000064 * 2 + (int)puVar14) = (unsigned short)bVar3 * 0x100 + (unsigned short)bVar4;
          *(unsigned short *)((int)puVar14 + 2) = (unsigned short)bVar6 * 0x100 + (unsigned short)bVar5;
          *(unsigned short *)(in_stack_00000064 * 2 + 2 + (int)puVar14) =
               (unsigned short)bVar7 * 0x100 + (unsigned short)bVar5;
          puVar14 = puVar14 + 1;
        } while (iVar13 <= iVar16);
        uVar11 = uVar22 & 0xffffffff;
      }
      iVar15 = uVar2 * 2 + iVar15;
      param_1 = param_1 + in_stack_00000064;
    } while (iVar15 <= (int)uVar11);
  }
  return;
}

