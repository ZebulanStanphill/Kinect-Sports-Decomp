extern int free();
extern int fn_82F64698();
extern int fn_82F71CD0();
extern unsigned int lbl_8326338C;
extern unsigned int *lbl_83263390;


void fn_82F645F0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  fn_82F71CD0(0xe);
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&lbl_8326338C;
    do {
      piVar2 = piVar1;
      if (lbl_83263390 == (int *)0x0) goto LAB_82f64664;
      piVar1 = lbl_83263390;
    } while (*lbl_83263390 != *(int *)(param_1 + 4));
    piVar2[1] = lbl_83263390[1];
    free();
LAB_82f64664:
    free(*(unsigned int *)(param_1 + 4));
    *(unsigned int *)(param_1 + 4) = 0;
  }
  fn_82F64698();
  return;
}

