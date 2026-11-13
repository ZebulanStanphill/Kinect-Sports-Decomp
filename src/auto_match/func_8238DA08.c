#define NAN(x) ((x) != (x))
extern int fn_8234B0C8();
extern int fn_823735F0();
extern int fn_823807F0();
extern int fn_824A5DE0();
extern int fn_824C97F0();
extern int fn_824CCFC8();
extern unsigned int lbl_82192754;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8238DA08(double param_1,int param_2)

{
  float fVar1;
  unsigned int *puVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  
  fVar6 = ltcg_pool_0_0f;
  if (*(int *)(param_2 + 0x14) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x14) - param_1);
    fVar5 = -fVar1;
    fVar4 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar5 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar5) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar4 = fVar1;
    }
    *(float *)(param_2 + 0x14) = fVar4;
  }
  if (*(float *)(param_2 + 0x14) <= fVar6) {
    iVar7 = fn_823735F0(*(unsigned int *)(param_2 + 8));
    if (iVar7 != 0) {
      uVar8 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x24);
      if ((((uVar8 != 0) && (*(int *)(*(unsigned int *)(iVar7 + 0x24) + 0x158) != 0)) &&
          (iVar7 = fn_824A5DE0(), iVar7 != 0)) && (iVar7 = fn_824CCFC8(uVar8), iVar7 != 0)
         ) {
        if (*(int *)(param_2 + 0x10) != 0) {
          return;
        }
        fn_823807F0(*(unsigned int *)(*(int *)(param_2 + 8) + 0x664),7);
        *(unsigned int *)(param_2 + 0x10) = 1;
        *(unsigned int *)(param_2 + 0x14) = lbl_821CA460;
        iVar7 = fn_823735F0(*(unsigned int *)(param_2 + 8));
        if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != 0)) {
          fn_8234B0C8((double)lbl_82192754,(unsigned __int64)*(unsigned int *)(iVar7 + 0x118) + 0x2c0,
                            0xffffffff821b442c);
        }
        puVar2 = *(unsigned int **)(*(int *)(param_2 + 8) + 0xa8);
        piVar3 = (int *)puVar2[1];
        for (piVar9 = (int *)*puVar2; piVar9 != piVar3; piVar9 = piVar9 + 2) {
          fn_824C97F0(*(unsigned int *)(*piVar9 + 0x28),0xffffffff821b4420);
        }
        return;
      }
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      fn_823807F0(*(unsigned int *)(*(int *)(param_2 + 8) + 0x664),6);
      *(unsigned int *)(param_2 + 0x10) = 0;
      *(unsigned int *)(param_2 + 0x14) = lbl_821CA460;
      iVar7 = fn_823735F0(*(unsigned int *)(param_2 + 8));
      if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != 0)) {
        fn_8234B0C8((double)lbl_82192754,(unsigned __int64)*(unsigned int *)(iVar7 + 0x118) + 0x2c0,
                          0xffffffff821b0c44);
      }
    }
  }
  return;
}

