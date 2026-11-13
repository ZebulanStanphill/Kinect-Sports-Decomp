typedef unsigned char bool;
#define true 1
extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern int fn_82645110();
extern int fn_826452A8();
extern int fn_82A1BB18();
extern unsigned __int64 storeDoubleWordConditionalIndexed();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_8262F8D8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5,unsigned __int64 param_6,__int64 param_7,unsigned __int64 param_8)

{
  bool bVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  __int64 lVar8;
  unsigned __int64 *puVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  char in_RESERVE;
  unsigned char bVar16;
  unsigned int in_stack_00000054;
  
  puVar4 = (unsigned int *)param_1;
  uVar14 = param_1;
  if ((((*puVar4 & 0xf) == 4) && ((*puVar4 & 0x40000000) != 0)) && ((unsigned __int64)puVar4[6] != 0)) {
    uVar14 = (unsigned __int64)puVar4[6];
  }
  bVar1 = (param_8 & 0x1010) == 0;
  bVar16 = bVar1 << 1;
  if (bVar1) {
    iVar6 = *(int *)((int)uVar14 + 8);
  }
  else {
    iVar6 = *(int *)((int)uVar14 + 0xc);
  }
  if (iVar6 != 0) {
    iVar5 = KeGetCurrentProcessType();
    puVar2 = __imp__VdGlobalDevice;
    if (iVar5 == 2) {
      puVar2 = __imp__VdGlobalXamDevice;
    }
    fn_826452A8(*puVar2,iVar6,param_2,0);
  }
  do {
    if (in_RESERVE != '\0') {
      uVar12 = storeWordConditionalIndexed((unsigned __int64)*puVar4 + 0x100,0,param_1);
      *puVar4 = uVar12;
      bVar16 = 2;
    }
  } while (!(bool)(bVar16 >> 1 & 1));
  sync(1);
  if ((param_8 & 0x12) == 0) {
    iVar6 = KeGetCurrentProcessType();
    puVar2 = __imp__VdGlobalDevice;
    if (iVar6 == 2) {
      puVar2 = __imp__VdGlobalXamDevice;
    }
    uVar12 = *puVar2;
    uVar15 = (((param_6 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (param_6 & 0x1fffffff);
    uVar14 = uVar15 + param_7;
    iVar6 = fn_82A1BB18();
    if (*(int *)(uVar12 + 0x2a88) == iVar6) {
      uVar7 = *(unsigned int *)(uVar12 + 0x30);
      if (*(unsigned int *)(uVar12 + 0x38) < uVar7) {
        uVar7 = fn_82645110((unsigned __int64)uVar12);
      }
      *(unsigned int *)(uVar7 + 4) = 0xa31;
      uVar3 = (unsigned int)uVar15 & 0xfffff000;
      *(unsigned int *)(uVar7 + 8) = in_stack_00000054;
      *(unsigned int *)(uVar7 + 0xc) = 0x10a2f;
      *(unsigned int *)(uVar7 + 0x10) = ((int)uVar14 + 0xfffU & 0xfffff000) - uVar3;
      *(unsigned int *)(uVar7 + 0x14) = uVar3;
      *(unsigned int *)(uVar7 + 0x18) = 0xc0043c00;
      *(unsigned int *)(uVar7 + 0x1c) = 3;
      *(unsigned int *)(uVar7 + 0x20) = 0xa31;
      *(unsigned int *)(uVar7 + 0x24) = 0;
      *(unsigned int *)(uVar7 + 0x28) = 0x80000000;
      *(unsigned int *)(uVar7 + 0x2c) = 8;
      *(unsigned int **)(uVar12 + 0x30) = (unsigned int *)(uVar7 + 0x2c);
    }
    else {
      lVar8 = (unsigned __int64)uVar12 + 12000;
      while( true ) {
        puVar9 = (unsigned __int64 *)lVar8;
        uVar13 = *puVar9;
        uVar11 = uVar13 & 0xffffffff;
        if (uVar15 < (uVar13 & 0xffffffff)) {
          uVar11 = uVar15;
        }
        uVar10 = uVar13 >> 0x20;
        if (uVar13 >> 0x20 < (uVar14 & 0xffffffff)) {
          uVar10 = uVar14;
        }
        if (*puVar9 == uVar13) break;
        uVar11 = storeDoubleWordConditionalIndexed(*puVar9,0,lVar8);
        *puVar9 = uVar11;
      }
      uVar14 = storeDoubleWordConditionalIndexed(uVar10 << 0x20 | uVar11,0,lVar8);
      *puVar9 = uVar14;
    }
  }
  if (((param_8 & 0x10) != 0) || ((*puVar4 & 0x200000) != 0)) {
    if ((param_8 & 1) == 0) {
      if ((param_3 == 0) || ((param_5 & 0xffffffff) == 0)) {
        puVar4 = puVar4 + 5;
      }
      else {
        puVar4 = puVar4 + 6;
        param_4 = param_5;
      }
      uVar15 = param_6 - (param_4 & 0xffffff80);
      uVar12 = *puVar4;
      uVar14 = (uVar15 & 0xffffffff) >> 7;
      uVar15 = (uVar15 + param_7 + 0x7f & 0xffffffff) >> 7;
      uVar11 = (unsigned __int64)(uVar12 >> 0x10);
      uVar13 = (unsigned __int64)uVar12 & 0xffff;
      if ((uVar12 >> 0x10 & 0x8000) != 0) {
        uVar11 = (uVar11 & 0x7fff) << 4;
      }
      if ((uVar12 & 0x8000) != 0) {
        uVar13 = ((unsigned __int64)uVar12 & 0x7fff) << 4;
      }
      if (uVar13 < uVar15) {
        uVar13 = uVar15;
      }
      uVar12 = (unsigned int)uVar13;
      if (uVar14 < uVar11) {
        uVar11 = uVar14;
      }
      if (0x7ffe < uVar11) {
        uVar11 = uVar11 + 0x80000 >> 4;
      }
      if (0x7ffe < uVar13) {
        uVar12 = uVar12 + 0x8000f >> 4;
      }
      *puVar4 = (unsigned int)(uVar11 << 0x10) | uVar12;
    }
    if ((param_8 & 0x10) != 0) {
      param_6 = ((((param_6 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (param_6 & 0x1fffffff)) -
                0x40000000;
    }
  }
  return param_6;
}

