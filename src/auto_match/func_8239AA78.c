extern unsigned int fStack_8;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8239AA78(int param_1,int param_2)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  float afStack_10 [2];
  float fStack_8;
  
  if (((*(int *)(param_2 + 0xa8) != 0) && (*(int *)(param_2 + 0x154) != 0)) &&
     (*(int *)(param_2 + 0x114) != 0)) {
    fVar1 = *(float *)(param_2 + 0x40);
    puVar2 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (unsigned int *)((int)afStack_10 + in_r0 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    if (((fVar1 <= afStack_10[0]) && (afStack_10[0] < *(float *)(param_2 + 0x50))) &&
       ((*(float *)(param_2 + 0x48) <= fStack_8 && (fStack_8 < *(float *)(param_2 + 0x58))))) {
      if (*(int *)(param_1 + 0x178) != 2) {
        return 1;
      }
      puVar2 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (unsigned int *)((int)afStack_10 + in_r0 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
      if (fStack_8 < ltcg_pool_0_0f) {
        return 1;
      }
    }
  }
  return 0;
}

