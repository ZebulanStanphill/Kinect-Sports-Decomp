extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82A1E968();
extern unsigned int lbl_832767D8;


void fn_8260D8C0(int param_1)

{
  int iVar1;
  __int64 alStack_20 [2];
  
  fn_82A1BB18();
  iVar1 = fn_8259A230();
  param_1 = iVar1 * 0x60 + param_1;
  iVar1 = *(int *)(param_1 + 100) + 1;
  *(int *)(param_1 + 100) = iVar1;
  if (iVar1 == 1) {
    fn_82A1E968(alStack_20);
    *(__int64 *)(param_1 + 0x28) = alStack_20[0] - lbl_832767D8;
  }
  return;
}

