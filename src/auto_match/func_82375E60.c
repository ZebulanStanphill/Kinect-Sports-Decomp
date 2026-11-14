extern int fn_822AEA70();
extern int fn_82373840();
extern int fn_82373B70();
extern int XMemSet();
extern unsigned int lbl_821B37CC;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_82375E60(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  float fVar3;
  unsigned int uVar4;
  double dVar5;
  unsigned char **appuStack_30 [4];
  unsigned char ***pppuStack_20;
  
  fVar3 = ltcg_pool_0_0f;
  dVar5 = (double)ltcg_pool_0_0f;
  *(float *)(*(int *)((*(int **)**(unsigned int **)(param_1 + 8))[4] * 4 +
                     **(int **)**(unsigned int **)(param_1 + 8)) + 0x20) = ltcg_pool_0_0f;
  piVar1 = *(int **)(**(int **)(param_1 + 8) + 4);
  *(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20) = fVar3;
  fn_82373B70();
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x260) + 0x154);
  *(unsigned int *)(param_1 + 0x264) = 0;
  *(unsigned int *)(param_1 + 0x268) = 0;
  *(unsigned int *)(param_1 + 0x26c) = 0;
  *(unsigned int *)(param_1 + 0x218) = uVar2;
  uVar4 = *(unsigned int *)(*(int *)(param_1 + 0x260) + 0x158);
  if (1 < uVar4) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar4 = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
  }
  *(unsigned int *)(param_1 + 0x1e4) = (unsigned int)(uVar4 != 0);
  uVar4 = *(unsigned int *)(*(int *)(param_1 + 0x260) + 0x15c);
  if (uVar4 < 2) {
    *(unsigned int *)(param_1 + 0x1e8) = uVar4;
  }
  else {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    *(unsigned int *)(param_1 + 0x1e8) = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
  }
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x260) + 0x160);
  *(float *)(param_1 + 0x210) = (float)dVar5;
  *(unsigned int *)(param_1 + 0x1f0) = 8;
  *(unsigned int *)(param_1 + 500) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x1ec) = uVar2;
  fn_82373840(param_1);
  pppuStack_20 = appuStack_30;
  appuStack_30[0] = &lbl_821B37CC;
  fn_822AEA70(*(unsigned int *)(param_1 + 8),appuStack_30);
                    /* WARNING: Subroutine does not return */
  XMemSet(*(unsigned int *)(param_1 + 0x7dc),0,0x30);
}

