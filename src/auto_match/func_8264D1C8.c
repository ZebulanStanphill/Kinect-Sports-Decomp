typedef unsigned char bool;
#define true 1
extern int fn_8264C9D0();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8264D1C8(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int *puVar7;
  unsigned __int64 uVar6;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar11;
  __int64 lVar10;
  unsigned int *puVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  int iVar15;
  unsigned int uVar16;
  unsigned __int64 in_MSR;
  char in_RESERVE;
  unsigned __int64 uVar17;
  
  iVar15 = *(int *)(param_1 + 0x5ea8) + (param_2 & 0x3f) * 0x80;
  puVar11 = (unsigned int *)(*(int *)(param_1 + 0x5eb0) + (param_2 & 0x3f) * 0x14);
  uVar8 = (unsigned int)param_3;
  puVar11[2] = uVar8;
  *(unsigned int *)(iVar15 + 4) = 0xc0006300;
  puVar12 = (unsigned int *)(iVar15 + 8);
  *puVar12 = (unsigned int)param_4;
  uVar9 = (unsigned __int64)puVar11[1];
  if ((param_3 & 0xffffffff) == 0) {
    puVar7 = (unsigned int *)0x0;
  }
  else {
    puVar7 = *(unsigned int **)(uVar8 + 0x74);
  }
  uVar16 = 0;
  bVar1 = (puVar11[4] & 0x80000000) == 0;
  if (!bVar1) {
    uVar16 = 1;
  }
  for (; puVar7 != (unsigned int *)0x0; puVar7 = (unsigned int *)*puVar7) {
    if ((uVar9 & 0xffffffff) == 0) goto LAB_8264d2b8;
    uVar2 = puVar7[1];
    param_5 = 0;
    if (uVar2 != 0) {
      puVar5 = puVar7;
      do {
        uVar4 = puVar5[3];
        uVar9 = uVar9 - 1;
        bVar1 = uVar9 == 0;
        puVar12[1] = uVar16 | 0xc0013f00;
        uVar3 = puVar5[2];
        puVar12[2] = uVar4;
        puVar12 = puVar12 + 3;
        *puVar12 = uVar3 & 0xffffff;
        if (bVar1) break;
        param_5 = param_5 + 1;
        puVar5 = puVar5 + 2;
      } while ((param_5 & 0xffffffff) < (unsigned __int64)uVar2);
    }
  }
  uVar17 = uVar9;
  uVar6 = uVar9 & 0xffffffff;
  while (uVar6 != 0) {
    puVar12[1] = 0x80000000;
    puVar12[2] = 0x80000000;
    puVar12 = puVar12 + 3;
    *puVar12 = 0x80000000;
    uVar17 = uVar17 - 1;
    uVar6 = uVar17;
  }
LAB_8264d2b8:
  if ((param_3 & 0xffffffff) != 0) {
    uVar16 = *(unsigned int *)(uVar8 + 0x78);
    if (((unsigned __int64)uVar16 != 0) && ((unsigned int *)puVar11[3] != (unsigned int *)0x0)) {
      *(unsigned int *)puVar11[3] = uVar16;
    }
    uVar6 = (unsigned __int64)*puVar11;
    lVar10 = param_3 + 8;
    uVar17 = (unsigned __int64)uVar16;
    do {
      puVar12 = (unsigned int *)lVar10;
      uVar16 = *puVar12;
      uVar14 = (unsigned __int64)uVar16;
      uVar13 = uVar6;
      if (uVar14 != 0) {
        if (uVar6 == 0) break;
        bVar1 = uVar6 == uVar14;
        if ((__int64)(uVar6 - uVar14) < 1) {
          uVar13 = uVar14;
        }
      }
      uVar17 = uVar13;
      if (uVar13 == uVar14) break;
      do {
        uVar2 = *puVar12;
        uVar9 = (unsigned __int64)uVar2;
        if (uVar2 != uVar16) {
          if (in_RESERVE != '\0') {
            uVar4 = storeWordConditionalIndexed(uVar9,0,lVar10);
            *puVar12 = uVar4;
            bVar1 = true;
          }
          break;
        }
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(uVar13,0,lVar10);
          *puVar12 = uVar4;
          bVar1 = true;
        }
      } while (!bVar1);
      param_5 = in_MSR;
      uVar17 = uVar9;
    } while (uVar16 != uVar2);
    if (*(int *)(uVar8 + 0x70) != 0) {
      fn_8264C9D0(uVar6,*(int *)(uVar8 + 0x70),param_4,(unsigned int)param_4,param_5,uVar9,lVar10,uVar17);
    }
  }
  sync(0);
  *(unsigned int *)(iVar15 + 0x6c) = 0xffffffff;
  sync(0);
  return;
}

