extern int fn_82539560();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


double fn_822F5830(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x2e0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x844);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(int (***)())(*piVar1 + 0x3c))();
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x83c);
                    /* WARNING: Subroutine does not return */
    fn_82539560((double)*(float *)(param_2 + 0x26c),(double)*(float *)(iVar3 + 0x1a4),
                 (double)lbl_821CA460,(double)ltcg_pool_0_0f,
                 (double)*(float *)((iVar2 + 0x6a) * 4 + iVar3));
  }
  iVar3 = iVar2 + 0x6f;
  if (*(int *)(param_2 + 0x188) == 0) {
    iVar3 = iVar2 + 0x74;
  }
  return (double)*(float *)(iVar3 * 4 + *(int *)(*(int *)(param_1 + 0x10) + 0x83c));
}

