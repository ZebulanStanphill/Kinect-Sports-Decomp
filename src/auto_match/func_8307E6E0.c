#define true 1
#define TBLr 0
extern int fn_8307DF10();
extern int fn_8307E3C8();
extern unsigned int lbl_7FEA1804;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_8307E6E0(unsigned int *param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  int iVar4;
  unsigned __int64 uVar3;
  
  lVar1 = TBLr;
  iVar4 = fn_8307DF10();
  while( true ) {
    if (iVar4 != 0) {
      return 0;
    }
    lVar2 = TBLr;
    uVar3 = KeQueryPerformanceFrequency();
    if (uVar3 >> 3 < (unsigned __int64)(lVar2 - lVar1)) break;
    iVar4 = fn_8307DF10(param_1);
  }
  uVar3 = 0;
  enforceInOrderExecutionIO();
  lbl_7FEA1804 = 0x3000000;
  enforceInOrderExecutionIO();
  fn_8307DF10(param_1);
  if (*param_1 != 0) {
    do {
      fn_8307E3C8(param_1,uVar3);
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)*param_1);
  }
  param_1[1] = param_1[1] | 0x80000;
  return 1;
}

