extern int fn_823412E8();
extern int fn_824CD030();
extern int fn_82F50D88();
extern unsigned int lbl_821CA460;


void fn_823426F8(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x40) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x44) = 0;
  fn_823412E8();
  iVar1 = *(int *)(**(int **)(param_1 + 0xc) + 0x24);
  if (iVar1 != 0) {
    (*(int **)(param_1 + 0xc))[4] = 2;
    iVar2 = fn_824CD030(iVar1);
    if (iVar2 != 0) {
      (**(int (***)())(*(int *)**(unsigned int **)(iVar1 + 0xfc) + 0x24))();
      *(unsigned int *)(*(int *)(**(int **)(iVar1 + 0xfc) + 0x3c) + 0x78) = 0;
    }
    *(unsigned int *)(*(int *)(iVar1 + 0xfc) + 100) = 2;
  }
  iVar1 = *(int *)(**(int **)(param_1 + 0xc) + 0x24);
  if (iVar1 != 0) {
    fn_82F50D88((double)lbl_821CA460,(double)lbl_821CA460,*(unsigned int *)(iVar1 + 0x20));
  }
  return;
}

