extern int fn_82BA02A8();
extern int fn_82E871A0();
extern int fn_82F65E20();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;


void fn_82E87E90(int param_1)

{
  __int64 lVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  double dVar4;
  
  if ((*(int *)(param_1 + 0x6f98) != 0) && (*(int *)(param_1 + 0x75c8) != 0)) {
    piVar2 = (int *)(param_1 + 0x72e4);
    lVar1 = 0x49;
    uVar3 = lbl_82002C40;
    dVar4 = lbl_82005710;
    do {
      if ((double)(__int64)*piVar2 / (double)(__int64)*(int *)(param_1 + 0x75c8) != dVar4) {
        fn_82F65E20();
        fn_82F65E20(uVar3);
      }
      lVar1 = lVar1 + -1;
      piVar2 = piVar2 + 1;
    } while (lVar1 != 0);
  }
  fn_82E871A0(param_1);
  fn_82BA02A8(param_1 + 0x7688);
  fn_82BA02A8(param_1 + 0x7664);
  return;
}

