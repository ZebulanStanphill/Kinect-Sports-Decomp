extern int fn_8251FA58();
extern int fn_82529320();


void fn_825699D0(int param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 * 0x30;
  iVar1 = *(int *)(param_2 + *(int *)(param_1 + 0xd8) + 0x10);
  if (iVar1 != 0) {
    fn_82529320(iVar1,0);
    iVar1 = *(int *)(param_2 + *(int *)(param_1 + 0xd8) + 0x28);
    if (iVar1 != 0) {
      fn_82529320(iVar1,0);
      *(unsigned int *)(param_2 + *(int *)(param_1 + 0xd8) + 0x28) = 0;
    }
    *(unsigned int *)(param_2 + *(int *)(param_1 + 0xd8) + 0x10) = 0;
  }
  if (*(int *)(param_2 + *(int *)(param_1 + 0xd8) + 0x14) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_2 + *(int *)(param_1 + 0xd8) + 0x14) = 0;
  }
  return;
}

