typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_90;
extern int fn_8253C430();
extern int fn_8255E2B0();
extern int fn_826009D8();
extern int fn_82CE6528();
extern int fn_82D80A40();
extern int fn_82D93168();
extern V16 vectorSubtractFloatingPoint();


void fn_825A1FF8(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned char in_vs32 [16];
  unsigned char in_vs33 [16];
  unsigned char auStack_90 [32];
  
  piVar1 = *(int **)(param_1 + 0x7b0);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x7b8) != 0)) {
    lVar5 = (unsigned __int64)*(unsigned int *)(*piVar1 + 4) - 1;
    if (-1 < lVar5) {
      lVar4 = lVar5 * 0x90;
      do {
        uVar2 = piVar1[1];
        iVar3 = *(int *)((int)lVar4 + uVar2);
        fn_82D80A40(*(unsigned int *)(iVar3 + 8));
        fn_82D93168(iVar3 + 0xe0);
        fn_82CE6528(auStack_90,lVar4 + (unsigned __int64)uVar2 + 0x50);
        lVar5 = lVar5 + -1;
        lVar4 = lVar4 + -0x90;
      } while (-1 < lVar5);
    }
    fn_826009D8(*(unsigned int *)(param_1 + 0x7b8));
    if (*(int *)(param_1 + 0x7bc) != 0) {
      fn_8255E2B0(param_1,*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x7b0) + 8) + 0x100));
      vectorSubtractFloatingPoint(in_vs32,in_vs33);
      fn_8253C430(param_1);
    }
  }
  return;
}

