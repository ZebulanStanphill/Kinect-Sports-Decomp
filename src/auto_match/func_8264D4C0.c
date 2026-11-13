typedef unsigned char bool;
extern int fn_8264D380();
extern int fn_8265C940();
extern int fn_8265C990();
extern unsigned int uRam83275b50;
extern unsigned __int64 storeWordConditionalIndexed();


__int64 fn_8264D4C0(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uVar9;
  __int64 lVar8;
  int iVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  char in_RESERVE;
  unsigned char bVar15;
  
  uVar13 = (unsigned __int64)uRam83275b50;
  if (uVar13 == 0) {
    uVar13 = fn_8265C940(0x324,0x64800000);
    bVar15 = (uVar13 == 0) << 1;
    if (uVar13 == 0) {
      return 0;
    }
    RtlInitializeCriticalSection(uVar13);
    *(unsigned int *)((int)uVar13 + 0x1c) = 0x1800;
    *(unsigned int *)((int)uVar13 + 800) = 0x55555555;
    do {
      uVar1 = uRam83275b50;
      if (uRam83275b50 != 0) {
        if (in_RESERVE != '\0') {
          uRam83275b50 = storeWordConditionalIndexed((unsigned __int64)uRam83275b50,0,0xffffffff83275b50);
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uRam83275b50 = storeWordConditionalIndexed(uVar13,0,0xffffffff83275b50);
        bVar15 = 2;
      }
    } while (!(bool)(bVar15 >> 1 & 1));
    if (uVar1 != 0) {
      fn_8265C990(uVar13,0x64800000);
      uVar13 = (unsigned __int64)uRam83275b50;
    }
  }
  RtlEnterCriticalSection(uVar13);
  uVar1 = *(unsigned int *)((int)uVar13 + 0x1c);
  lVar12 = -1;
  if ((param_1 & 0xffffffff) <= (unsigned __int64)uVar1) {
    uVar7 = 0;
    lVar14 = 0;
    uVar3 = 0xffffffffffffffff;
    uVar4 = uVar13 + 800;
    while (uVar11 = ((uVar7 & 0xffffffff) >> 3 & 0x1ffffffc) + uVar13 + 0x20,
          (uVar11 & 0xffffffff) != (uVar4 & 0xffffffff)) {
      uVar9 = *(unsigned int *)uVar11;
      lVar5 = LZCOUNT(0xffffffffU >> ((unsigned int)uVar7 & 0x1f) & ~uVar9);
      if (lVar5 == 0x20) {
        do {
          uVar11 = uVar11 + 4;
          uVar9 = *(unsigned int *)uVar11;
        } while (uVar9 == 0xffffffff);
        if ((uVar11 & 0xffffffff) == (uVar4 & 0xffffffff)) break;
        lVar5 = LZCOUNT(~uVar9);
      }
      lVar8 = LZCOUNT(0xffffffffU >> (int)lVar5 & uVar9);
      iVar2 = (int)uVar11;
      iVar6 = iVar2;
      if (lVar8 == 0x20) {
        uVar11 = uVar11 + 4;
        iVar10 = *(int *)(iVar2 + 4);
        while (iVar6 = (int)uVar11, iVar10 == 0) {
          uVar11 = uVar11 + 4;
          iVar10 = *(int *)uVar11;
        }
        if ((uVar11 & 0xffffffff) == (uVar4 & 0xffffffff)) {
          lVar8 = 0;
        }
        else {
          lVar8 = LZCOUNT(iVar10);
        }
      }
      iVar10 = (int)(uVar13 + 0x20);
      lVar5 = ((unsigned __int64)(unsigned int)(iVar2 - iVar10 >> 2) & 0x7ffffff) * 0x20 + lVar5;
      uVar7 = (((unsigned __int64)(unsigned int)(iVar6 - iVar10 >> 2) & 0x7ffffff) * 0x20 - lVar5) + lVar8;
      if (uVar7 == 0) break;
      if (((param_1 & 0xffffffff) <= (uVar7 & 0xffffffff)) &&
         ((uVar7 & 0xffffffff) < (uVar3 & 0xffffffff))) {
        uVar3 = uVar7;
        lVar14 = lVar5;
      }
      uVar7 = lVar5 + uVar7;
    }
    if ((int)uVar3 != -1) {
      *(unsigned int *)((int)uVar13 + 0x1c) = uVar1 - (int)param_1;
      fn_8264D380(uVar13,lVar14,lVar14 + param_1,1);
      lVar12 = lVar14;
    }
  }
  RtlLeaveCriticalSection(uVar13);
  lVar14 = -lVar12 + -1;
  *param_2 = (int)lVar12;
  return lVar14 + (-(unsigned __int64)(lVar14 == 0) - (-lVar12 + -2));
}

