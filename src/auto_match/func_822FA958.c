extern int fn_82539560();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_822FA958(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = (unsigned int)*(float *)(*(int *)((*(int **)**(unsigned int **)(iVar1 + 8))[4] * 4 +
                                   **(int **)**(unsigned int **)(iVar1 + 8)) + 0x20);
  if (*(int *)(iVar1 + 0x178) == 1) {
    uVar2 = *(int *)(*(int *)(iVar1 + 0x2d8) + 0x15c) + uVar2;
  }
                    /* WARNING: Subroutine does not return */
  fn_82539560((double)uVar2,(double)ltcg_pool_0_0f,(double)*(unsigned int *)(*(int *)(iVar1 + 0x2d8) + 0x160)
               ,(double)ltcg_pool_0_0f,(double)lbl_821CA460);
}

