void fn_82CD9690(int param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5,
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
  __int64 lVar11;
  int iVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  int iVar22;
  unsigned __int64 uVar23;
  int iVar24;
  int iVar25;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  int in_stack_00000064;
  
  lVar11 = (param_5 & 0xffff) * 0x10000;
  lVar10 = (param_6 & 0xffff) * 0x10000;
  uVar21 = lVar11 - 0x10000;
  uVar20 = (unsigned __int64)in_stack_00000054 - 1;
  uVar19 = lVar10 - 0x10000;
  uVar1 = (int)uVar21 / (int)uVar20;
  uVar18 = (unsigned __int64)in_stack_0000005c - 1;
  uVar2 = (int)uVar19 / (int)uVar18;
  puVar14 = (unsigned int *)(param_1 + -2);
  uVar23 = ((__int64)((int)uVar2 >> 4) + (unsigned __int64)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + lVar10
           ) - 0x8000;
  trapWord(6,uVar20,0);
  trapWord(6,uVar18,0);
  trapWord(5,uVar20 & ~(((uVar21 & 0x7fffffff) << 1 | (uVar21 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar18 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iVar16 = ((int)uVar1 >> 4) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + (int)lVar11 + -0x8000;
  iVar15 = 0x8000;
  if (((unsigned int)puVar14 & 3) == 0) {
    if (0x7fff < (int)uVar23) {
      uVar18 = uVar23;
      do {
        iVar12 = 0x8000;
        if (0x7fff < iVar16) {
          iVar17 = (iVar15 >> 0x11) * param_8;
          iVar24 = (iVar15 >> 0x10) * param_7 + param_2;
          iVar22 = ((int)(iVar15 + uVar2) >> 0x10) * param_7 + param_2;
          puVar13 = puVar14;
          do {
            iVar8 = iVar12 >> 0x10;
            iVar25 = iVar12 + uVar1;
            iVar9 = iVar12 >> 0x11;
            iVar12 = uVar1 * 2 + iVar12;
            bVar3 = *(unsigned char *)(iVar22 + iVar8);
            iVar25 = iVar25 >> 0x10;
            bVar4 = *(unsigned char *)(iVar17 + iVar9 + param_3);
            iVar9 = (unsigned int)*(unsigned char *)(iVar17 + param_4 + iVar9) * 0x10000;
            bVar5 = *(unsigned char *)(iVar22 + iVar25);
            *puVar13 = (unsigned int)*(unsigned char *)(iVar24 + iVar25) * 0x100 + (unsigned int)bVar4 |
                       (unsigned int)*(unsigned char *)(iVar24 + iVar8) * 0x1000000 + iVar9;
            *(unsigned int *)(in_stack_00000064 * 2 + (int)puVar13) =
                 (unsigned int)bVar5 * 0x100 + (unsigned int)bVar4 | (unsigned int)bVar3 * 0x1000000 + iVar9;
            puVar13 = puVar13 + -1;
          } while (iVar12 <= iVar16);
          uVar18 = uVar23 & 0xffffffff;
        }
        iVar15 = uVar2 * 2 + iVar15;
        puVar14 = puVar14 + in_stack_00000064;
      } while (iVar15 <= (int)uVar18);
    }
  }
  else if (0x7fff < (int)uVar23) {
    uVar18 = uVar23;
    do {
      iVar12 = 0x8000;
      if (0x7fff < iVar16) {
        iVar17 = (iVar15 >> 0x11) * param_8;
        iVar24 = (iVar15 >> 0x10) * param_7 + param_2;
        iVar22 = ((int)(iVar15 + uVar2) >> 0x10) * param_7 + param_2;
        puVar13 = puVar14;
        do {
          iVar8 = iVar12 >> 0x10;
          iVar25 = iVar12 + uVar1;
          iVar9 = iVar12 >> 0x11;
          iVar12 = uVar1 * 2 + iVar12;
          bVar3 = *(unsigned char *)(iVar22 + iVar8);
          bVar4 = *(unsigned char *)(iVar17 + param_4 + iVar9);
          iVar25 = iVar25 >> 0x10;
          bVar5 = *(unsigned char *)(iVar17 + iVar9 + param_3);
          bVar6 = *(unsigned char *)(iVar24 + iVar25);
          bVar7 = *(unsigned char *)(iVar22 + iVar25);
          *(unsigned short *)((int)puVar13 + 2) = (unsigned short)*(unsigned char *)(iVar24 + iVar8) * 0x100 + (unsigned short)bVar5;
          *(unsigned short *)((int)puVar13 + in_stack_00000064 * 2 + 2) =
               (unsigned short)bVar3 * 0x100 + (unsigned short)bVar5;
          *(unsigned short *)puVar13 = (unsigned short)bVar6 * 0x100 + (unsigned short)bVar4;
          *(unsigned short *)(in_stack_00000064 * 2 + (int)puVar13) = (unsigned short)bVar7 * 0x100 + (unsigned short)bVar4;
          puVar13 = puVar13 + -1;
        } while (iVar12 <= iVar16);
        uVar18 = uVar23 & 0xffffffff;
      }
      iVar15 = uVar2 * 2 + iVar15;
      puVar14 = puVar14 + in_stack_00000064;
    } while (iVar15 <= (int)uVar18);
  }
  return;
}

