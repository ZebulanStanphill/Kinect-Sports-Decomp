extern int fn_82368C30();
extern int fn_8236A928();
extern int fn_8236BA88();
extern unsigned int lbl_82193B00;


void fn_822B16F8(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
  iVar2 = fn_82368C30(uVar3);
  if ((iVar2 != 0) &&
     (*(int *)(iVar2 + 0x2c) ==
      *(int *)(*(int *)((*(int **)(param_1 + 0xc))[4] * 4 + **(int **)(param_1 + 0xc)) + 0x10))) {
    iVar1 = *(int *)((int)uVar3 + 0x41c);
    if ((0 < iVar1) &&
       (((iVar1 < 3 || (iVar1 == 10)) && (*(float *)((int)uVar3 + 0x428) < lbl_82193B00)))) {
      fn_8236A928(uVar3,iVar2,4);
      return;
    }
  }
  fn_8236BA88(*(unsigned int *)(param_1 + 0xc));
  return;
}

