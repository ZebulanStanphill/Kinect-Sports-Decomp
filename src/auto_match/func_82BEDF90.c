typedef int (*code)();
extern int fn_82BECA88();
extern int fn_82BEDE38();


void fn_82BEDF90(int param_1)

{
  int *piVar1;
  int lVar2;
  
  if ((*(int *)(param_1 + 0x50) != 2) && (*(int **)(param_1 + 0x34) != 0)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x34) + 0x10);
    if (piVar1 != 0) {
      if ((*(code *)(*piVar1 + 8))(piVar1) == 0) {
        return;
      }
      (*(code *)(*piVar1 + 0xc))(piVar1);
      lVar2 = (*(code *)(*piVar1 + 0x14))(piVar1);
      if (lVar2 != 0) {
        fn_82BEDE38(param_1, lVar2);
      }
    }
    fn_82BECA88(param_1);
  }
  return;
}
