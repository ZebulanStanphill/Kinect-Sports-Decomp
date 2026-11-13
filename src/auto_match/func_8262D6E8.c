extern unsigned int *auStack_10;
extern unsigned int fStack_c;
extern unsigned int lbl_82191EAC;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8262D6E8(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_10 [4];
  float fStack_c;
  
  uVar1 = *(unsigned int *)(param_2 + 8);
  if (uVar1 == 5) {
    if (ltcg_pool_0_0f < *(float *)(param_1 + 0x184)) {
      return 1;
    }
  }
  else if (uVar1 == 0) {
    puVar2 = (unsigned int *)(param_1 + 0x40U & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    if (ltcg_pool_0_0f <= fStack_c) {
      return 1;
    }
  }
  else if (uVar1 == 1) {
    puVar2 = (unsigned int *)(param_1 + 0x40U & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    if (lbl_82191EAC <= fStack_c) {
      return 1;
    }
  }
  else {
    if (uVar1 < 3) {
      if ((((*(float *)(param_1 + 0xd0) == ltcg_pool_0_0f) &&
           (*(float *)(param_1 + 0xd4) == ltcg_pool_0_0f)) &&
          (*(float *)(param_1 + 0xd8) == ltcg_pool_0_0f)) &&
         ((*(float *)(param_1 + 0xdc) == ltcg_pool_0_0f &&
          (*(float *)(param_1 + 0xe0) == ltcg_pool_0_0f)))) {
        return 0;
      }
      return 1;
    }
    if (uVar1 == 3) {
      return ((~(unsigned __int64)*(unsigned int *)(param_1 + 0xa4) & 0xffffffff) >> 0x1f) +
             (unsigned __int64)(2 < (unsigned __int64)*(unsigned int *)(param_1 + 0xa4)) & 1;
    }
    if (uVar1 < 5) {
      return (unsigned __int64)(*(int *)(param_1 + 0xa4) == 0);
    }
  }
  return 0;
}

