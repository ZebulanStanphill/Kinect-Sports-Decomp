extern int fn_82F68CC0();
extern unsigned int lbl_82192734;
extern unsigned int ltcg_pool_0_0f;


void fn_822BCAB0(int param_1,__int64 param_2,float *param_3)

{
  unsigned int *puVar1;
  float fVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  fVar2 = ltcg_pool_0_0f;
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x24) == 0) {
    puVar1 = (unsigned int *)(param_1 + 0x250U & 0xfffffff0);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    param_3[9] = ltcg_pool_0_0f;
    param_3[10] = fVar2;
    param_3[8] = fVar2;
    puVar1 = (unsigned int *)(in_r0 + (int)param_3 & 0xfffffff0);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (unsigned int *)((unsigned int)(param_3 + 4) & 0xfffffff0);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
  }
  else {
    fn_82F68CC0(param_3,param_2 * 0x1c10 + (unsigned __int64)*(unsigned int *)(param_1 + 0x24) + 0x440,0x30);
    fVar2 = lbl_82192734;
    *param_3 = *param_3 * lbl_82192734;
    param_3[2] = param_3[2] * fVar2;
    param_3[4] = param_3[4] * fVar2;
    param_3[6] = param_3[6] * fVar2;
  }
  return;
}

