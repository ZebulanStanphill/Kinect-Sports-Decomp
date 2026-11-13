extern int fn_822ABA88();
extern int fn_82359698();
extern int fn_823693A0();
extern int fn_8236B008();
extern int fn_8236B4F0();
extern int fn_8236B8B0();
extern int fn_823CC298();
extern int fn_82508078();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_823D1440(int param_1,char param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_3 * 4 + **(int **)(param_1 + 8));
  uVar3 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),param_4);
  fn_823693A0(param_1,uVar3);
  uVar1 = lbl_8218E8E8;
  iVar4 = param_3 * 0x84 + *(int *)(param_1 + 0x4bc);
  *(int *)(iVar4 + 0x4c) = *(int *)(iVar4 + 0x4c) + 1;
  *(unsigned int *)(param_1 + 0x1024) = uVar1;
  *(unsigned int *)(param_1 + 0x1028) = 0;
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_82508078(*(unsigned int *)(param_1 + 0xa4),0xffffffff821b61dc,0);
  }
  fn_823CC298(*(unsigned int *)(param_1 + 0x4b8),1);
  piVar2 = *(int **)(((unsigned int)LZCOUNT(param_3) >> 3 & 4) + **(int **)(param_1 + 8));
  iVar4 = *(int *)(piVar2[4] * 4 + *piVar2);
  if (param_2 == '\0') {
    fn_8236B008(param_1,*(unsigned int *)(iVar4 + 0x10));
    uVar3 = 9;
  }
  else {
    uVar1 = *(unsigned int *)(iVar4 + 0x10);
    uVar3 = 10;
    *(unsigned int *)(param_1 + 0xee4) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xee0) = uVar1;
  }
  fn_82359698(param_1,uVar3);
  fn_8236B8B0(param_1,param_3,8);
  *(unsigned int *)(param_1 + 0xef4) = ltcg_pool_0_0f;
  if (*(int *)(*(int *)(param_1 + 0x4b0) + 0xd4) == 0) {
    fn_8236B4F0((double)lbl_821CA460,param_1);
  }
  return;
}

