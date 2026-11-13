typedef unsigned char bool;
extern unsigned int lbl_8324DBB0;


bool fn_82F07B68(int param_1,short *param_2,short *param_3,int param_4,int param_5,
                  unsigned int *param_6,int param_7)

{
  short sVar1;
  short sVar2;
  short sVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned __int64 uVar10;
  int iVar12;
  __int64 lVar11;
  short sVar13;
  short sVar14;
  unsigned __int64 uVar15;
  int iVar16;
  int *piVar17;
  int in_stack_00000054;
  
  iVar12 = *(int *)(param_1 + 0x6d24) + in_stack_00000054 * 0x34;
  sVar14 = 0;
  iVar16 = 0;
  uVar4 = *(unsigned int *)(iVar12 + 0x10);
  uVar15 = (unsigned __int64)uVar4;
  uVar5 = *(unsigned int *)(iVar12 + 0x14);
  iVar9 = *(int *)(iVar12 + 0x18);
  uVar6 = *(unsigned int *)(iVar12 + 0x1c);
  uVar7 = *(unsigned int *)(iVar12 + 0x24);
  uVar8 = *(unsigned int *)(iVar12 + 0x20);
  *param_3 = 0;
  if (0 < param_7) {
    piVar17 = (int *)(param_5 + 8);
    lVar11 = (unsigned __int64)(param_7 - 1U >> 2) + 1;
    do {
      sVar1 = *(short *)(piVar17[-1] * 2 + param_4);
      sVar2 = *(short *)(*piVar17 * 2 + param_4);
      sVar3 = *(short *)(piVar17[1] * 2 + param_4);
      if ((unsigned int)(*(short *)(piVar17[-2] * 2 + param_4) + iVar9) < uVar8) {
        sVar13 = sVar14 + 1;
      }
      else {
        sVar13 = 0;
        param_2[*param_3 + 1] = sVar14;
        *param_3 = *param_3 + 2;
      }
      if ((unsigned int)(sVar1 + iVar9) < uVar8) {
        sVar13 = sVar13 + 1;
      }
      else {
        param_2[*param_3 + 1] = sVar13;
        sVar13 = 0;
        *param_3 = *param_3 + 2;
      }
      if ((unsigned int)(sVar2 + iVar9) < uVar8) {
        sVar13 = sVar13 + 1;
      }
      else {
        param_2[*param_3 + 1] = sVar13;
        sVar13 = 0;
        *param_3 = *param_3 + 2;
      }
      if ((unsigned int)(sVar3 + iVar9) < uVar8) {
        sVar14 = sVar13 + 1;
      }
      else {
        sVar14 = 0;
        param_2[*param_3 + 1] = sVar13;
        *param_3 = *param_3 + 2;
      }
      piVar17 = piVar17 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  iVar9 = 0;
  if (0 < *param_3) {
    do {
      sVar14 = *(short *)(*(int *)((param_2[1] + iVar16) * 4 + param_5) * 2 + param_4);
      lVar11 = (__int64)sVar14;
      if ((unsigned __int64)uVar7 < (lVar11 + (unsigned __int64)uVar6 & 0xffffffff)) {
        trapWord(6,uVar15,0);
        if (sVar14 < 0) {
          uVar10 = lVar11 + (unsigned __int64)uVar5;
          trapWord(5,uVar15 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          *param_2 = -*(short *)(&lbl_8324DBB0 + ((int)uVar10 / (int)uVar4) * -2);
        }
        else {
          uVar10 = lVar11 - (unsigned __int64)uVar5;
          trapWord(5,uVar15 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          *param_2 = *(short *)(&lbl_8324DBB0 + ((int)uVar10 / (int)uVar4) * 2);
        }
      }
      else if (sVar14 < 0) {
        *param_2 = -1;
      }
      else {
        *param_2 = 1;
      }
      iVar16 = param_2[1] + iVar16 + 1;
      iVar9 = iVar9 + 2;
      param_2 = param_2 + 2;
    } while (iVar9 < *param_3);
  }
  *param_6 = 0;
  return *param_3 != 0;
}

