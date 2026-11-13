extern unsigned int *auStack_38;
extern int fn_824FAC80();
extern int fn_8251F720();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F2D60();
extern unsigned int iStack_3c;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_40;


void fn_824FAB98(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  double dVar3;
  unsigned int uStack_40;
  int iStack_3c;
  unsigned char auStack_38 [56];
  
  uStack_40 = *(unsigned int *)((*(int *)(param_1 + 0x210) + 0x84) * 4 + param_1);
  iVar1 = *(int *)((*(int *)(param_1 + 0x210) + 0x89) * 4 + param_1);
  iStack_3c = iVar1;
  fn_8255F880(auStack_38,&uStack_40);
  dVar3 = (double)ltcg_pool_0_0f;
  uVar2 = fn_8255F8D0(dVar3,(double)lbl_821CA460,auStack_38);
  *(unsigned int *)(param_1 + 0x208) = uVar2;
  if (*(int *)(param_1 + 0x20c) == 0) {
    if (iVar1 == 0) {
      *(unsigned int *)(param_1 + 0x20c) = 0;
    }
    else {
      uVar2 = fn_8251F720(&iStack_3c,0);
      *(unsigned int *)(param_1 + 0x20c) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x208) != 0) {
    fn_827F2D60(dVar3,*(unsigned int *)(param_1 + 0x204));
  }
  fn_824FAC80(dVar3,param_1);
  *(unsigned int *)(param_1 + 0x70) = 2;
  return;
}

