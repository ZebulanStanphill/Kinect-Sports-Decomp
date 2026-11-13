extern int fn_822315A0();
extern int fn_82242A30();
extern int fn_822442F0();
extern int fn_8234FB60();
extern int fn_82356690();
extern int fn_823569A8();
extern int fn_8249ABC0();
extern int fn_8251FA58();
extern int fn_8262FEC8();
extern int fn_8265CA20();
extern int (*lbl_8327677C)();
extern unsigned int lbl_8329759C;


void fn_8234FC08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  fn_82356690();
  fn_823569A8(param_1);
  iVar2 = fn_8249ABC0();
  *(unsigned int *)(iVar2 + 0x20) = 0;
  if (*(int *)(param_1 + 0x3e4) != 0) {
    if (lbl_8327677C != (int (**)())0x0) {
      (*lbl_8327677C)(0xffffffff821b1ffc,0xffffffff821b1fb8,0x1a4);
    }
    *(unsigned int *)(param_1 + 0x3e4) = 0;
  }
  if (*(int *)(param_1 + 0x3f4) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x3f4) + 0x80) = 0;
    *(unsigned int *)(param_1 + 0x3f4) = 0;
  }
  if (lbl_8329759C == 0) {
    fn_822442F0();
  }
  fn_82242A30();
  piVar1 = *(int **)(param_1 + 0x90);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      fn_8251FA58();
      *piVar1 = 0;
    }
    fn_8265CA20(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x94);
  *(unsigned int *)(param_1 + 0x90) = 0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      fn_8251FA58();
      *piVar1 = 0;
    }
    fn_8265CA20(piVar1);
  }
  *(unsigned int *)(param_1 + 0x94) = 0;
  if (*(int *)(param_1 + 0x2c0) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x2c0) = 0;
  }
  if (*(int *)(param_1 + 0x2c4) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x2c4) = 0;
  }
  if (*(int *)(param_1 + 0x230) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x230) = 0;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 0x3e0) != 0) {
    fn_8265CA20();
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (*(int *)(iVar2 + 0x6c8) != 0) {
    fn_8262FEC8();
    *(unsigned int *)(iVar2 + 0x6c8) = 0;
  }
  if (*(int *)(iVar2 + 0x6cc) != 0) {
    fn_8262FEC8();
    *(unsigned int *)(iVar2 + 0x6cc) = 0;
  }
  if (*(int *)(iVar2 + 0x6c4) != 0) {
    fn_8262FEC8();
    *(unsigned int *)(iVar2 + 0x6c4) = 0;
  }
  if (*(int *)(param_1 + 0x3d0) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_1 + 0x38c) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_1 + 0x28c) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_1 + 0x280) != 0) {
    fn_822315A0();
  }
  fn_8234FB60(param_1 + 0x40);
  return;
}

