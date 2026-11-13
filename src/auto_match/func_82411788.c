extern int fn_8240E9B8();
extern int fn_82416D20();
extern int fn_8252AF80();
extern int fn_82573988();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82411788(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  __int64 lVar4;
  unsigned int uVar5;
  double dVar6;
  
  fVar1 = (float)((double)*(float *)(param_2 + 0x94) - param_1);
  *(float *)(param_2 + 0x94) = fVar1;
  if (ltcg_pool_0_0f <= fVar1) {
    iVar3 = **(int **)(param_2 + 0x24);
    if (*(int *)(iVar3 + 0xcb8) == 0) {
      fVar2 = *(float *)(iVar3 + 0x2b8);
    }
    else {
      fVar2 = *(float *)(iVar3 + 0x2b4);
    }
    dVar6 = (double)(fVar1 / fVar2);
    fn_8252AF80(dVar6,*(unsigned int *)(param_2 + 0x28),0);
    uVar5 = *(unsigned int *)(*(int *)(param_2 + 0x28) + 0x1e0);
    if ((double)lbl_821CA460 <= dVar6) {
      uVar5 = uVar5 & 0xffffffdf;
    }
    else {
      uVar5 = uVar5 | 0x20;
    }
    *(unsigned int *)(*(int *)(param_2 + 0x28) + 0x1e0) = uVar5;
    if (*(int *)(param_2 + 600) != 0) {
      fn_82573988(*(unsigned int *)(param_2 + 0x28),param_2 + 0x1f0);
    }
  }
  else {
    fn_8252AF80((double)lbl_821CA460,*(unsigned int *)(param_2 + 0x28),0);
    *(unsigned int *)(*(int *)(param_2 + 0x28) + 0x1e0) =
         *(unsigned int *)(*(int *)(param_2 + 0x28) + 0x1e0) & 0xffffffdf;
    fn_8240E9B8(param_2);
    lVar4 = (unsigned __int64)*(unsigned int *)(param_2 + 0x24) + 0xa0;
    if (*(int *)(param_2 + 0x30) != 0) {
      lVar4 = (unsigned __int64)*(unsigned int *)(param_2 + 0x24) + 0x110;
    }
    fn_82416D20(lVar4,param_2);
  }
  return;
}

