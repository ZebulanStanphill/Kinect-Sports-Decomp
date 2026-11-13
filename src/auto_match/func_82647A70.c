#define TBLr 0
extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern unsigned int uRam7fc86110;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82647A70(unsigned __int64 param_1)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar7;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  
  iVar7 = KeGetCurrentProcessType();
  piVar1 = __imp__VdGlobalDevice;
  if (iVar7 == 2) {
    piVar1 = __imp__VdGlobalXamDevice;
  }
  iVar7 = *piVar1;
  uVar5 = KfAcquireSpinLock(iVar7 + 0x4220);
  uVar9 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x550c);
  uVar12 = (param_1 & 0xffffffff) >> 8 & 0xf;
  *(int *)(iVar7 + 0x418c) = *(int *)(iVar7 + 0x418c) + 1;
  uVar4 = param_1 & 0xfffff000;
  if (uVar9 == 0) {
    uVar9 = 0x3c;
  }
  uVar10 = TBLr;
  uVar2 = *(unsigned int *)(iVar7 + 0x417c);
  uVar6 = KeQueryPerformanceFrequency();
  uVar6 = (uVar6 & 0xffffffff) / uVar9;
  trapWord(6,uVar9,0);
  trapWord(6,uVar6,0);
  uVar9 = (((uVar10 & 0xffffffff) - (unsigned __int64)uVar2) * 100 & 0xffffffff) / uVar6 + 1;
  if (100 < (uVar9 & 0xffffffff)) {
    uVar9 = 100;
  }
  uVar2 = *(unsigned int *)(iVar7 + 0x4178);
  uVar10 = *(unsigned int *)(iVar7 + 0x4180) + uVar12;
  uVar11 = (unsigned int)uVar10;
  if ((((uVar10 & 0xffffffff) <= (unsigned __int64)uVar2) && (uVar11 = uVar2, uVar12 != 0)) &&
     ((param_1 & 0xff) < (uVar9 & 0xffffffff))) {
    uVar11 = uVar2 + 1;
  }
  if (*(int (***)())(iVar7 + 0x4170) != (int (**)())0x0) {
    stack_pair_60.second = *(unsigned int *)(iVar7 + 0x418c);
    stack_pair_60.first = (unsigned int)(uVar4 != 0);
    uStack_50 = (unsigned int)uVar9;
    uStack_58 = uVar2;
    uStack_54 = *(unsigned int *)(iVar7 + 0x4180);
    uStack_4c = uVar11;
    (**(int (***)())(iVar7 + 0x4170))(&stack_pair_60.first);
    uVar11 = uStack_4c;
  }
  *(unsigned int *)(iVar7 + 0x4180) = uVar11;
  if ((uVar11 == *(unsigned int *)(iVar7 + 0x4178)) || (*(int *)(iVar7 + 0x418c) == 1)) {
    *(int *)(iVar7 + 0x4190) = *(int *)(iVar7 + 0x4190) + 1;
    if (uVar4 == 0) {
      *(unsigned int *)(*(int *)(iVar7 + 0x2a94) + 4) = 0;
    }
    else {
      enforceInOrderExecutionIO();
      sync(0);
      uRam7fc86110 = (int)uVar4;
    }
    uVar3 = TBLr;
    *(int *)(iVar7 + 0x5c2c) = (int)uVar3;
  }
  else {
    iVar8 = (*(unsigned int *)(iVar7 + 0x4218) & 0xf) * 8 + iVar7;
    *(unsigned int *)(iVar8 + 0x4198) = uVar11;
    *(int *)(iVar8 + 0x4194) = (int)uVar4;
    *(int *)(iVar7 + 0x4218) = *(int *)(iVar7 + 0x4218) + 1;
  }
  KfReleaseSpinLock(iVar7 + 0x4220,uVar5);
  return;
}

