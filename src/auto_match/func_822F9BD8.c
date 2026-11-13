extern int fn_822F9E08();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CCAC0;
extern unsigned int lbl_831CCAC8;
extern unsigned int lbl_831CCACC;
extern unsigned int lbl_831CCAD0;
extern unsigned int lbl_831CCAD4;
extern unsigned int lbl_831CCAD8;
extern unsigned int lbl_831CCAE0;
extern unsigned int lbl_831CCAE4;
extern unsigned int lbl_83265A28;


unsigned __int64 fn_822F9BD8(double param_1,unsigned __int64 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  unsigned __int64 uVar7;
  unsigned char *puVar8;
  
  piVar4 = (int *)param_2;
  fVar2 = (float)piVar4[9];
  fVar1 = (float)(param_1 + (double)(float)piVar4[8]);
  piVar4[8] = (int)fVar1;
  piVar4[9] = (int)(float)(param_1 + (double)fVar2);
  fVar6 = ltcg_pool_0_0f;
  if (piVar4[0xb] == 0) {
    if (fVar1 <= (float)piVar4[10]) goto LAB_822f9df0;
    piVar4[0xb] = 1;
    piVar4[8] = (int)ltcg_pool_0_0f;
    uVar7 = fn_822F9E08(param_2);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar5 = (*(int *)(*(int *)param_2 + 0x844) * 6 + (int)uVar7) * 0xc;
    fVar1 = (*(float *)(&lbl_831CCAE4 + iVar5) - *(float *)(&lbl_831CCAE0 + iVar5)) *
            ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) +
            *(float *)(&lbl_831CCAE0 + iVar5);
  }
  else {
    puVar8 = &lbl_831CCAC0;
    if (lbl_831CCAD0 < fVar1) {
      fVar3 = ltcg_pool_0_0f;
      if (*(int *)(*piVar4 + 0x1e4) != 0) {
        fVar3 = *(float *)(*(int *)(*piVar4 + 0x1e4) + 0x178);
      }
      if ((lbl_831CCAD4 < fVar3) && (lbl_831CCAD8 < (float)(param_1 + (double)fVar2))) {
        piVar4[8] = (int)ltcg_pool_0_0f;
        piVar4[9] = (int)fVar6;
        piVar4[0xb] = 0;
        uVar7 = 1;
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        fVar1 = (lbl_831CCACC - lbl_831CCAC8) *
                ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + lbl_831CCAC8;
        goto LAB_822f9cc0;
      }
    }
    if (fVar1 <= (float)piVar4[10]) {
LAB_822f9df0:
      return (unsigned __int64)(unsigned int)piVar4[5];
    }
    piVar4[8] = (int)ltcg_pool_0_0f;
    uVar7 = fn_822F9E08(param_2);
    iVar5 = (*(int *)(*(int *)param_2 + 0x844) * 6 + (int)uVar7) * 0xc;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = (*(float *)(puVar8 + iVar5 + 0x24) - *(float *)(puVar8 + iVar5 + 0x20)) *
            ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) +
            *(float *)(puVar8 + iVar5 + 0x20);
  }
LAB_822f9cc0:
  *(float *)((int)param_2 + 0x28) = fVar1;
  return uVar7;
}

