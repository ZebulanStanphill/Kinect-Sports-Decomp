extern int fn_8242C1B8();
extern int fn_82441EF0();


void fn_82452C58(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 9) {
LAB_82452ca8:
                    /* WARNING: Subroutine does not return */
    fn_8242C1B8(**(unsigned int **)(param_2 + 0x40));
  }
  if (iVar1 != 10) {
    if (iVar1 < 0xc) {
      return;
    }
    if (0xe < iVar1) {
      if (iVar1 != 0xf) {
        return;
      }
      goto LAB_82452ca8;
    }
  }
  fn_82441EF0(param_1,*(unsigned int *)(param_2 + 0x44),**(unsigned int **)(param_2 + 0x40));
  return;
}

