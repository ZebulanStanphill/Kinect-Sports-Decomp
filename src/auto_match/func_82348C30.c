extern int fn_823412E8();
extern int fn_8234E808();
extern int fn_825300A8();
extern unsigned int lbl_821917D4;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8327F844;


void fn_82348C30(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  float *pfVar5;
  
  uVar3 = ltcg_pool_0_0f;
  uVar4 = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 8) = ltcg_pool_0_0f;
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x34) = uVar3;
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0xa0) = uVar3;
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x58) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x5c) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x60) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0xb4) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 200) = uVar3;
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0xd4) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0xb8) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 100) = 0;
  if ((*(int *)(**(int **)(param_1 + 0xc) + 0x24) != 0) && (lbl_8327F844 != 0)) {
    uVar1 = *(unsigned int *)(**(int **)(param_1 + 0xc) + 0x2c);
    uVar4 = 0;
    fn_825300A8((double)lbl_821917D4,param_1,
                 (unsigned __int64)uVar1 +
                 ((__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0) &
                 0x7fffffff) * -2);
  }
  *(unsigned int *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1a0) + 0x20) = uVar4;
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x68);
  if (iVar2 != 0) {
    for (pfVar5 = (float *)(iVar2 + 0x18); pfVar5 != (float *)(iVar2 + 0x60); pfVar5 = pfVar5 + 3) {
      pfVar5[2] = (pfVar5[1] - *pfVar5) + *pfVar5;
    }
    fn_8234E808();
  }
  fn_823412E8(param_1);
  return;
}

