extern int fn_8249D600();
extern int fn_8249D878();
extern unsigned int lbl_8218E8E8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8327F894;


unsigned int fn_8249C0A0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if (*(int *)(param_1 + 8) == 0) {
    dVar5 = (double)ltcg_pool_0_0f;
    if ((*(unsigned int *)(param_2 + 0x24) & 2) == 0) {
      *(float *)(param_2 + 0x28) = ltcg_pool_0_0f;
    }
    else {
      fVar2 = *(float *)(param_2 + 0x28) + lbl_8327F894;
      if (fVar2 < lbl_8218E8E8) {
        *(float *)(param_2 + 0x28) = fVar2;
        *(unsigned int *)(param_2 + 0x24) = *(unsigned int *)(param_2 + 0x24) & 0xfffffffd;
      }
    }
    iVar3 = fn_8249D600(*(unsigned int *)(param_1 + 0x110),*(unsigned int *)(param_1 + 4));
    if (iVar3 == 0) {
      *(float *)(param_2 + 0x28) = (float)dVar5;
    }
    if ((*(unsigned int *)(param_2 + 0x24) & 8) == 0) {
      *(float *)(param_2 + 0x2c) = (float)dVar5;
    }
    else {
      fVar2 = *(float *)(param_2 + 0x2c) + lbl_8327F894;
      if (fVar2 < lbl_8218E8E8) {
        *(float *)(param_2 + 0x2c) = fVar2;
        *(unsigned int *)(param_2 + 0x24) = *(unsigned int *)(param_2 + 0x24) & 0xfffffff7;
      }
    }
    iVar3 = *(int *)(param_1 + 0x110);
    iVar4 = fn_8249D878(0);
    iVar1 = *(int *)(iVar3 + 0x14);
    if (*(int *)(iVar3 + 0x10) != iVar1) {
      iVar4 = *(int *)(iVar1 + -8);
    }
    if (iVar4 == 0) {
      *(float *)(param_2 + 0x2c) = (float)dVar5;
    }
  }
  return *(unsigned int *)(param_2 + 0x24);
}

