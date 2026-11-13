extern int fn_82359698();
extern int fn_82372A58();
extern int fn_8238DA08();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8238D968(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  iVar2 = *(int *)(param_2 + 8);
  fn_8238DA08();
  if (*(float *)(param_2 + 0xc) <= *(float *)(iVar2 + 0x9a0)) {
    fVar1 = lbl_821CA460 / *(float *)(iVar2 + 0x9a0);
    *(float *)(iVar2 + 0x9a8) = lbl_821CA460;
    *(float *)(iVar2 + 0x9a4) = fVar1;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0xc) - param_1);
  *(float *)(param_2 + 0xc) = fVar1;
  if (fVar1 <= ltcg_pool_0_0f) {
    uVar3 = fn_82372A58(*(unsigned int *)(param_2 + 8));
    fn_82359698(iVar2,uVar3);
  }
  return;
}

