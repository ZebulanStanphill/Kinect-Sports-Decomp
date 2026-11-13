#define true 1
extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern int fn_82645110();
extern int fn_82A1BB18();
extern unsigned __int64 storeDoubleWordConditionalIndexed();


void fn_82630B08(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  __int64 lVar6;
  unsigned __int64 *puVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int *puVar2;
  
  iVar4 = KeGetCurrentProcessType();
  puVar2 = __imp__VdGlobalDevice;
  if (iVar4 == 2) {
    puVar2 = __imp__VdGlobalXamDevice;
  }
  uVar1 = *puVar2;
  uVar12 = (((param_2 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (param_2 & 0x1fffffff);
  uVar11 = uVar12 + param_3;
  iVar4 = fn_82A1BB18();
  if (*(int *)(uVar1 + 0x2a88) == iVar4) {
    uVar5 = *(unsigned int *)(uVar1 + 0x30);
    if (*(unsigned int *)(uVar1 + 0x38) < uVar5) {
      uVar5 = fn_82645110((unsigned __int64)uVar1);
    }
    *(unsigned int *)(uVar5 + 4) = 0xa31;
    uVar3 = (unsigned int)uVar12 & 0xfffff000;
    *(unsigned int *)(uVar5 + 8) = 0x3000000;
    *(unsigned int *)(uVar5 + 0xc) = 0x10a2f;
    *(unsigned int *)(uVar5 + 0x10) = ((int)uVar11 + 0xfffU & 0xfffff000) - uVar3;
    *(unsigned int *)(uVar5 + 0x14) = uVar3;
    *(unsigned int *)(uVar5 + 0x18) = 0xc0043c00;
    *(unsigned int *)(uVar5 + 0x1c) = 3;
    *(unsigned int *)(uVar5 + 0x20) = 0xa31;
    *(unsigned int *)(uVar5 + 0x24) = 0;
    *(unsigned int *)(uVar5 + 0x28) = 0x80000000;
    *(unsigned int *)(uVar5 + 0x2c) = 8;
    *(unsigned int **)(uVar1 + 0x30) = (unsigned int *)(uVar5 + 0x2c);
  }
  else {
    lVar6 = (unsigned __int64)uVar1 + 12000;
    while( true ) {
      puVar7 = (unsigned __int64 *)lVar6;
      uVar10 = *puVar7;
      uVar9 = uVar10 & 0xffffffff;
      if (uVar12 < (uVar10 & 0xffffffff)) {
        uVar9 = uVar12;
      }
      uVar8 = uVar10 >> 0x20;
      if (uVar10 >> 0x20 < (uVar11 & 0xffffffff)) {
        uVar8 = uVar11;
      }
      if (*puVar7 == uVar10) break;
      uVar9 = storeDoubleWordConditionalIndexed(*puVar7,0,lVar6);
      *puVar7 = uVar9;
    }
    uVar11 = storeDoubleWordConditionalIndexed(uVar8 << 0x20 | uVar9,0,lVar6);
    *puVar7 = uVar11;
  }
  return;
}

