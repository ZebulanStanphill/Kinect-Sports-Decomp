extern int fn_82293818();
extern int fn_8229AAF8();
extern int fn_822ABA88();
extern int fn_8241AFD0();
extern int fn_8241F6A8();
extern unsigned int ltcg_pool_0_0f;


void fn_82335158(int param_1)

{
  int *piVar1;
  int *piVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int *piVar7;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x230) + 0x238);
  iVar6 = *piVar1;
  if ((*(float *)(iVar6 + 0xad4) < *(float *)(param_1 + 0x22c)) ||
     (*(float *)(param_1 + 0x228) <= *(float *)(iVar6 + 0xad4))) {
    if ((*(float *)(iVar6 + 0xad8) < *(float *)(param_1 + 0x22c)) ||
       (*(float *)(param_1 + 0x228) <= *(float *)(iVar6 + 0xad8))) {
      if (*(float *)(iVar6 + 0xadc) < *(float *)(param_1 + 0x228)) {
        *(unsigned int *)(*(int *)(param_1 + 0x230) + 0x29c) = 8;
        *(unsigned int *)(param_1 + 0x224) = 1;
        uVar3 = ltcg_pool_0_0f;
        *(unsigned int *)(param_1 + 0x228) = ltcg_pool_0_0f;
        *(unsigned int *)(param_1 + 0x22c) = uVar3;
      }
    }
    else if (piVar1 == *(int **)(iVar6 + 0x2b20)) {
      fn_8229AAF8(*(unsigned int *)(iVar6 + 0xd4));
    }
  }
  else {
    fn_8241AFD0(piVar1,*(unsigned int *)(param_1 + 0x25c),*(unsigned int *)(param_1 + 0x264),0);
    piVar7 = (int *)(piVar1[6] * 0x1ac + piVar1[2]);
    if (piVar7[8] == 0) {
      uVar5 = 0;
      if (*(int *)(param_1 + 0x25c) == 9) {
        uVar5 = 2;
      }
      else if (*(int *)(param_1 + 0x25c) == 10) {
        uVar5 = 1;
      }
      iVar6 = *piVar1;
      piVar2 = *(int **)(**(int **)(iVar6 + 8) + *piVar7 * 4);
      if (piVar1 == *(int **)(iVar6 + 0x2b20)) {
        lVar4 = fn_822ABA88((double)*(float *)(iVar6 + 0x658),(double)*(float *)(iVar6 + 0x65c),
                             *(unsigned int *)(piVar2[4] * 4 + *piVar2),0,
                             *(unsigned int *)(param_1 + 0x260),piVar7[5],uVar5);
        fn_82293818(*(unsigned int *)(iVar6 + 0xd4),lVar4 + 0x30);
      }
    }
    else {
      fn_8241F6A8(piVar1,piVar7[0xc]);
    }
  }
  return;
}

