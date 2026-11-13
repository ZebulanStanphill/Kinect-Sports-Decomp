extern int fn_8242E560();
extern int fn_824CCFC8();
extern int fn_827F57E8();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82341BF0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_8242E560(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1a0) + 0xc));
  iVar3 = **(int **)(param_1 + 0xc);
  fVar1 = ltcg_pool_0_0f;
  if (iVar2 == 0) {
    if (*(int *)(iVar3 + 0x24) == 0) {
      return;
    }
    iVar2 = fn_824CCFC8();
    iVar3 = **(int **)(param_1 + 0xc);
    fVar1 = ltcg_pool_0_0f;
    if (iVar2 != 0) {
      fVar1 = lbl_821CA460;
    }
  }
  iVar3 = *(int *)(iVar3 + 0x118);
  fn_827F57E8((double)fVar1,(double)lbl_8218E8FC,*(unsigned int *)(iVar3 + 0x10));
  iVar3 = *(int *)(iVar3 + 0x10);
  *(unsigned int *)(iVar3 + 0x108) = *(unsigned int *)(iVar3 + 0x10c);
  return;
}

