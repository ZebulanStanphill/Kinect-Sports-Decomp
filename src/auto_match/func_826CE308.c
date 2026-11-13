extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_826DF960();
extern int fn_8275C2C0();


void fn_826CE308(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x20) + 0xc))();
    if (*(int *)(param_1 + 0x20) != 0) {
      fn_8267C4F0();
    }
    *(unsigned int *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar2 = 0;
    do {
      fn_8275C2C0(*(unsigned int *)(iVar2 + *(int *)(param_1 + 0x14)));
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar1 < *(unsigned int *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_8267C4F0();
  }
  fn_8267BE38(*(unsigned int *)(param_1 + 0x14));
  fn_826DF960(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
  fn_8267BE38(*(unsigned int *)(param_1 + 8));
  return;
}

