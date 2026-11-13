extern int fn_8229ACA0();
extern int fn_8229F758();
extern int fn_8242C1B8();
extern unsigned int ltcg_pool_0_0f;


void fn_82437A38(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  double dVar3;
  
  iVar1 = *(int *)(**(int **)(param_1 + 0x40) + 0xa0);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x40) != 1)) {
    fn_8229ACA0(*(unsigned int *)(**(int **)(param_1 + 0x40) + 0xd4),0);
    uVar2 = **(unsigned int **)(param_1 + 0x40);
    if ((*(unsigned int **)(param_1 + 0x40))[0x3e] != 0) {
                    /* WARNING: Subroutine does not return */
      fn_8242C1B8(uVar2);
    }
                    /* WARNING: Subroutine does not return */
    fn_8242C1B8(uVar2);
  }
  fn_8229ACA0(*(unsigned int *)(**(int **)(param_1 + 0x40) + 0xd4),
                    *(unsigned int *)(**(int **)(param_1 + 0x40) + 0xd0));
  if ((*(int **)(param_1 + 0x40))[0x3e] != 0) {
    iVar1 = **(int **)(param_1 + 0x40);
    uVar2 = *(unsigned int *)(*(int *)(iVar1 + 0xd4) + 0xc);
    if (*(int *)(*(int *)(iVar1 + 0x174) + 0xc4) == 0) {
      dVar3 = (double)ltcg_pool_0_0f;
    }
    else {
      dVar3 = (double)ltcg_pool_0_0f;
      fn_8229F758(dVar3,dVar3,dVar3,uVar2);
      uVar2 = *(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc);
    }
    fn_8229F758(dVar3,dVar3,dVar3,uVar2);
  }
  if ((*(unsigned int **)(param_1 + 0x40))[0x3e] == 0) {
                    /* WARNING: Subroutine does not return */
    fn_8242C1B8(**(unsigned int **)(param_1 + 0x40));
  }
  *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x1cc) = 1;
  return;
}

