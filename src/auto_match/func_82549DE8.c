extern int fn_82555C00();
extern int fn_82809868();
extern int fn_8284EF60();
extern unsigned int lbl_82193E2C;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8329618C;


void fn_82549DE8(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  float fVar1;
  int *piVar2;
  int iVar4;
  unsigned __int64 uVar3;
  
  if (*(int *)(param_2 + 0x78) == 0) {
    *(unsigned int *)(param_2 + 0x70) = 0;
    fVar1 = ltcg_pool_0_0f;
    *(float *)(param_2 + 0x68) = ltcg_pool_0_0f;
    *(float *)(param_2 + 100) = fVar1;
  }
  else {
    if (*(int *)(param_2 + 0x70) != 0) {
      fVar1 = (float)((double)(lbl_821CA460 / *(float *)(param_2 + 0x74)) * param_1 +
                     (double)*(float *)(param_2 + 0x6c));
      if (lbl_821CA460 <= fVar1) {
        fVar1 = ltcg_pool_0_0f;
      }
      *(float *)(param_2 + 0x6c) = fVar1;
                    /* WARNING: Subroutine does not return */
      fn_82809868((double)(fVar1 * lbl_82193E2C));
    }
    *(unsigned int *)(param_2 + 100) = *(unsigned int *)(param_2 + 0x68);
    if (0 < *(int *)(param_2 + 0x78)) {
      *(int *)(param_2 + 0x78) = *(int *)(param_2 + 0x78) + -1;
    }
  }
  if (*(int *)(*(int *)(param_2 + 0x1c4) + 0xc) != 0) {
    fn_8284EF60(param_1);
  }
  if (lbl_8329618C == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lbl_8329618C + 4);
  }
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x93c) != 0)) {
    piVar2 = *(int **)(param_2 + 0x130);
    uVar3 = (unsigned __int64)*(unsigned int *)(param_2 + 0x138);
    if (piVar2 != (int *)0x0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        if (*piVar2 != 0) {
          *(int *)(*piVar2 + 0xe4) = (int)param_3;
        }
        piVar2 = piVar2 + 1;
      }
    }
  }
  fn_82555C00(param_1,param_2 + 0x98,param_3,param_4,param_5);
  return;
}

