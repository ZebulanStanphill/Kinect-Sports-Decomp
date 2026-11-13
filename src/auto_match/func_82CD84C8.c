void fn_82CD84C8(unsigned int *param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,int param_7,int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  int iVar14;
  unsigned int *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
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
  
  lVar13 = (param_5 & 0xffff) * 0x10000;
  lVar11 = (param_6 & 0xffff) * 0x10000;
  uVar21 = lVar13 - 0x10000;
  uVar12 = (unsigned __int64)in_stack_00000054 - 1;
  uVar20 = lVar11 - 0x10000;
  uVar1 = (int)uVar21 / (int)uVar12;
  uVar19 = (unsigned __int64)in_stack_0000005c - 1;
  uVar2 = (int)uVar20 / (int)uVar19;
  uVar23 = ((__int64)((int)uVar2 >> 4) + (unsigned __int64)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + lVar11
           ) - 0x8000;
  trapWord(6,uVar12,0);
  trapWord(6,uVar19,0);
  trapWord(5,uVar12 & ~(((uVar21 & 0x7fffffff) << 1 | (uVar21 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar19 & ~(((uVar20 & 0x7fffffff) << 1 | (uVar20 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iVar17 = ((int)uVar1 >> 4) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + (int)lVar13 + -0x8000;
  iVar16 = 0x8000;
  if (((unsigned int)param_1 & 3) == 0) {
    if (0x7fff < (int)uVar23) {
      uVar12 = uVar23;
      do {
        iVar14 = 0x8000;
        if (0x7fff < iVar17) {
          iVar18 = (iVar16 >> 0x11) * param_8;
          iVar24 = (iVar16 >> 0x10) * param_7 + param_2;
          iVar22 = ((int)(iVar16 + uVar2) >> 0x10) * param_7 + param_2;
          puVar15 = param_1;
          do {
            iVar6 = iVar14 >> 0x10;
            iVar25 = iVar14 + uVar1;
            iVar7 = iVar14 >> 0x11;
            iVar14 = uVar1 * 2 + iVar14;
            bVar3 = *(unsigned char *)(iVar22 + iVar6);
            iVar25 = iVar25 >> 0x10;
            iVar8 = (unsigned int)*(unsigned char *)(iVar18 + param_4 + iVar7) * 0x1000000;
            iVar7 = (unsigned int)*(unsigned char *)(iVar18 + iVar7 + param_3) * 0x100;
            bVar4 = *(unsigned char *)(iVar22 + iVar25);
            *puVar15 = (unsigned int)*(unsigned char *)(iVar24 + iVar25) * 0x10000 + iVar8 |
                       (unsigned int)*(unsigned char *)(iVar24 + iVar6) + iVar7;
            *(unsigned int *)(in_stack_00000064 * 2 + (int)puVar15) =
                 (unsigned int)bVar4 * 0x10000 + iVar8 | (unsigned int)bVar3 + iVar7;
            puVar15 = puVar15 + 1;
          } while (iVar14 <= iVar17);
          uVar12 = uVar23 & 0xffffffff;
        }
        iVar16 = uVar2 * 2 + iVar16;
        param_1 = param_1 + in_stack_00000064;
      } while (iVar16 <= (int)uVar12);
    }
  }
  else if (0x7fff < (int)uVar23) {
    uVar12 = uVar23;
    do {
      iVar14 = 0x8000;
      if (0x7fff < iVar17) {
        iVar18 = (iVar16 >> 0x11) * param_8;
        iVar24 = (iVar16 >> 0x10) * param_7 + param_2;
        iVar22 = ((int)(iVar16 + uVar2) >> 0x10) * param_7 + param_2;
        puVar15 = param_1;
        do {
          iVar6 = iVar14 >> 0x10;
          iVar25 = iVar14 + uVar1;
          iVar7 = iVar14 >> 0x11;
          iVar14 = uVar1 * 2 + iVar14;
          bVar3 = *(unsigned char *)(iVar22 + iVar6);
          iVar25 = iVar25 >> 0x10;
          bVar4 = *(unsigned char *)(iVar24 + iVar25);
          bVar5 = *(unsigned char *)(iVar22 + iVar25);
          sVar9 = (unsigned short)*(unsigned char *)(iVar18 + param_4 + iVar7) * 0x100;
          sVar10 = (unsigned short)*(unsigned char *)(iVar18 + iVar7 + param_3) * 0x100;
          *(unsigned short *)puVar15 = (unsigned short)*(unsigned char *)(iVar24 + iVar6) + sVar9;
          *(unsigned short *)(in_stack_00000064 * 2 + (int)puVar15) = (unsigned short)bVar3 + sVar9;
          *(unsigned short *)((int)puVar15 + 2) = (unsigned short)bVar4 + sVar10;
          *(unsigned short *)((int)puVar15 + in_stack_00000064 * 2 + 2) = (unsigned short)bVar5 + sVar10;
          puVar15 = puVar15 + 1;
        } while (iVar14 <= iVar17);
        uVar12 = uVar23 & 0xffffffff;
      }
      iVar16 = uVar2 * 2 + iVar16;
      param_1 = param_1 + in_stack_00000064;
    } while (iVar16 <= (int)uVar12);
  }
  return;
}

