extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_8252CAF8();
extern int fn_8252CBF8();
extern int fn_82552F88();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82448720(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  struct { float first; float second; } stack_pair_30;

  float fStack_28;
  
  if (param_2 < 0) {
    return;
  }
  uVar5 = 0xffffffffffffffff;
  iVar2 = *(int *)(((*(int **)(param_1 + 0x48))[7] * (param_3 & 0xff) + param_2) * 4 +
                  **(int **)(param_1 + 0x48));
  if (param_4 == 0) {
    uVar5 = 0xff00ff;
    fn_8252CAF8(iVar2,0,0);
LAB_824487b0:
    if (param_4 == 0) {
      return;
    }
  }
  else {
    if (param_4 == 1) {
      uVar5 = 0xffffffffff800000;
      uVar4 = 2;
    }
    else {
      if (2 < param_4) goto LAB_824487b0;
      uVar5 = 0xff0000;
      uVar4 = 1;
    }
    uVar5 = uVar5 | 0xff;
    fn_8252CAF8(iVar2,0,uVar4);
  }
  iVar1 = *(int *)(iVar2 + 0x8c0);
  if (iVar1 != 0) {
    fn_82552F88(uVar5,&stack_pair_30.first);
    stack_pair_30.first = stack_pair_30.first * lbl_8218E8FC;
    stack_pair_30.second = stack_pair_30.second * lbl_8218E8FC;
    fStack_28 = fStack_28 * lbl_8218E8FC;
    fn_8252CBF8((double)lbl_821CA460,iVar2,&stack_pair_30.first);
    fVar3 = ltcg_pool_0_0f;
    if (*(float *)(iVar1 + 0x68) == ltcg_pool_0_0f) {
      *(float *)(iVar1 + 0x6c) = ltcg_pool_0_0f;
    }
    *(float *)(iVar1 + 0x74) = fVar3;
    *(unsigned int *)(iVar1 + 0x70) = 0;
    *(unsigned int *)(iVar1 + 0x78) = 1;
    *(unsigned int *)(iVar1 + 0x68) = lbl_82191FCC;
  }
  return;
}

