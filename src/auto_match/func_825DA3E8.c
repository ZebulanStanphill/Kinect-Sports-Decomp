extern int fn_8252D970();
extern int fn_827F6210();
extern int fn_827F6308();
extern int fn_827F6310();
extern int fn_827F6370();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_825DA3E8(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  if ((*(int *)(param_1 + 400) != 0) &&
     (iVar2 = *(int *)(**(int **)(*(int *)(param_1 + 400) + 400) + 0x110), iVar2 != 0)) {
    fn_827F6308(iVar2,1);
  }
  fn_8252D970((double)*(float *)(param_2 + 0x5bc),param_1);
  dVar4 = (double)ltcg_pool_0_0f;
  if ((*(int *)(param_1 + 400) != 0) &&
     (*(int *)(**(int **)(*(int *)(param_1 + 400) + 400) + 0x110) != 0)) {
    if (dVar4 < ABS((double)*(float *)(param_2 + 0x5c0))) {
      fn_827F6370();
    }
    else {
      fn_827F6210((double)lbl_821CA460);
    }
  }
  fVar1 = *(float *)(param_2 + 0x5c0);
  iVar2 = *(int *)(param_1 + 400);
  if (iVar2 != 0) {
    if (*(int *)(**(int **)(iVar2 + 400) + 0x114) == 0) {
      dVar3 = (double)lbl_821CA460;
    }
    else {
      dVar3 = (double)fn_827F6310();
    }
    dVar3 = ABS(dVar3);
    if ((double)fVar1 < dVar4) {
      dVar3 = (double)(float)(dVar3 * (double)lbl_82192734);
    }
    if (*(int *)(**(int **)(iVar2 + 400) + 0x110) != 0) {
      fn_827F6210(dVar3);
    }
  }
  *(unsigned int *)(param_1 + 0xb60) = *(unsigned int *)(param_2 + 0x5c4);
  return 1;
}

