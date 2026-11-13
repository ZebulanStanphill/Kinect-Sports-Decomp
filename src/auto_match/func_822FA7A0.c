extern int fn_82539560();
extern unsigned int lbl_82191F78;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_822FA7A0(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = (int)*(float *)(*(int *)((*(int **)**(unsigned int **)(iVar1 + 8))[4] * 4 +
                                  **(int **)**(unsigned int **)(iVar1 + 8)) + 0x20);
  if (*(int *)(iVar1 + 0x178) == 1) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0x2d8) + 0x15c) + iVar2;
  }
  dVar3 = (double)ltcg_pool_0_0f;
  if (*(int *)(*(int *)(param_1 + 4) + 0x1e4) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82539560((double)(__int64)iVar2,dVar3,(double)*(unsigned int *)(*(int *)(iVar1 + 0x2d8) + 0x160),
                 dVar3,(double)lbl_821CA460);
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = (int)*(float *)(*(int *)((*(int **)**(unsigned int **)(iVar1 + 8))[4] * 4 +
                                  **(int **)**(unsigned int **)(iVar1 + 8)) + 0x20);
  if (*(int *)(iVar1 + 0x178) == 1) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0x2d8) + 0x15c) + iVar2;
  }
                    /* WARNING: Subroutine does not return */
  fn_82539560((double)(__int64)iVar2,dVar3,(double)*(unsigned int *)(*(int *)(iVar1 + 0x2d8) + 0x160),
               dVar3,(double)lbl_82191F78);
}

