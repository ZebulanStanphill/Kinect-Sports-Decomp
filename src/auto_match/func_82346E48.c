extern int fn_823412E8();
extern int fn_825300A8();
extern int fn_827F57E8();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8327F844;


void fn_82346E48(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  
  iVar1 = *(int *)(**(int **)(param_1 + 0xc) + 0x118);
  uVar5 = fn_827F57E8((double)ltcg_pool_0_0f,(double)lbl_8218E8FC,*(unsigned int *)(iVar1 + 0x10))
  ;
  uVar4 = lbl_821CA460;
  puVar2 = *(unsigned int **)(param_1 + 0x10);
  uVar6 = 0;
  iVar1 = *(int *)(iVar1 + 0x10);
  *(unsigned int *)(iVar1 + 0x108) = *(unsigned int *)(iVar1 + 0x10c);
  *puVar2 = uVar4;
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 8) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x48) = 0;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x2c) != 0) {
    if (lbl_8327F844 != 0) {
      uVar3 = *(unsigned int *)(**(int **)(param_1 + 0xc) + 0x2c);
      uVar6 = 0;
      fn_825300A8((double)*(float *)(*(int *)(param_1 + 0x10) + 0x34),uVar5,
                   (unsigned __int64)uVar3 +
                   ((__int64)((int)uVar3 >> 1) + (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 1) != 0) &
                   0x7fffffff) * -2);
    }
    *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x2c) = uVar6;
  }
  fn_823412E8(param_1);
  return;
}

