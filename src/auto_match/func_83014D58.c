extern int fn_82FAB9C0();
extern int fn_82FFF5C8();
extern int fn_8300FF80();
extern int fn_83014BF8();
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642E4;


unsigned __int64 fn_83014D58(int param_1)

{
  int *piVar1;
  unsigned int lVar2;
  
  if (*(unsigned int *)(param_1 + 0x78) != 0) {
    lVar2 = *(unsigned int *)(param_1 + 0x78) - 1;
    *(int *)(param_1 + 0x78) = (int)lVar2;
    if (lVar2 == 0) {
      if (*(int *)(param_1 + 0x38) != 1) {
        fn_83014BF8();
      }
      fn_8300FF80(lbl_832642E4,*(unsigned int *)(param_1 + 0x50));
      if ((*(void **)(param_1 + 0x60) != 0) &&
         (piVar1 = (int *)fn_82FAB9C0(lbl_832642E0 + 4,*(void **)(param_1 + 0x60)), piVar1 != (int *)0x0)) {
        fn_82FFF5C8(piVar1,*(unsigned int *)(param_1 + 0x3c),*(unsigned int *)(param_1 + 0x50));
        (*(int (**)())(*piVar1 + 8))(piVar1);
      }
      if ((*(void **)(param_1 + 0x6c) != 0) &&
         (piVar1 = (int *)fn_82FAB9C0(lbl_832642E0 + 4,*(void **)(param_1 + 0x6c)), piVar1 != (int *)0x0)) {
        fn_82FFF5C8(piVar1,*(unsigned int *)(param_1 + 0x3c),*(unsigned int *)(param_1 + 0x50));
        (*(int (**)())(*piVar1 + 8))(piVar1);
      }
    }
  }
  return 1;
}

