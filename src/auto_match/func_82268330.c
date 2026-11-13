extern int fn_82230300();
extern int fn_82267130();
extern int fn_82268238();
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_8265CA20();
extern int fn_82A1C0F0();
extern int fn_82A1E658();


void fn_82268330(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  __int64 lVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x6e0) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x6e0) = 0;
  }
  if (*(int *)(param_1 + 0x6e4) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x6e4) = 0;
  }
  piVar4 = (int *)(param_1 + 0x61c);
  lVar3 = 3;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      if (piVar1[8] != 0) {
        if (*piVar1 == 0x3e5) {
          fn_82A1C0F0(piVar1);
        }
        fn_82522ED8(piVar1[8]);
      }
      fn_82A1E658(piVar1[3]);
      if (piVar1[9] != 0) {
        fn_8265CA20();
      }
      piVar1[9] = 0;
      piVar1[10] = 0;
      piVar1[0xb] = 0;
      fn_8265CA20(piVar1);
      *piVar4 = 0;
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 1;
  } while (lVar3 != 0);
  if (*(int *)(param_1 + 0x5c0) != 0) {
    fn_82267130();
  }
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6e8);
  if (uVar5 != 0) {
    uVar2 = *(unsigned int *)(param_1 + 0x6ec);
    for (; (uVar5 & 0xffffffff) != (unsigned __int64)uVar2; uVar5 = uVar5 + 0x38) {
      fn_82230300(uVar5 + 8,1,0);
    }
    fn_8265CA20(*(unsigned int *)(param_1 + 0x6e8));
  }
  *(unsigned int *)(param_1 + 0x6e8) = 0;
  *(unsigned int *)(param_1 + 0x6ec) = 0;
  lVar3 = 2;
  *(unsigned int *)(param_1 + 0x6f0) = 0;
  iVar6 = param_1 + 0x6e8;
  do {
    iVar6 = iVar6 + -0x38;
    fn_82230300(iVar6,1,0);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  fn_82268238(param_1 + 0x5dc);
  return;
}

