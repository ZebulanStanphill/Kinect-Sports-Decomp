#define NAN(x) ((x) != (x))
extern unsigned int *auStack_1030;
extern unsigned int *auStack_830;
extern int fn_8229AAF8();
extern int fn_8229D4E8();
extern int fn_82358FD8();
extern int fn_82417F58();
extern int fn_82528EE0();
extern int fn_82536590();
extern unsigned int lbl_82193A00;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8241E988(double param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  __int64 lVar5;
  int iVar6;
  int *piVar7;
  unsigned char auStack_1030 [2048];
  unsigned char auStack_830 [2096];
  
  fVar4 = ltcg_pool_0_0f;
  uVar1 = param_2[0xb3];
  if (uVar1 == 0) {
    piVar7 = (int *)(param_2[6] * 0x1ac + param_2[2]);
    if (piVar7[10] == 0) {
      return;
    }
    iVar6 = fn_82417F58(param_2);
    if (((((param_2 == *(unsigned int **)(*param_2 + 0x2b20)) && (iVar6 != 0)) &&
         (*(int *)(iVar6 + 0x24) != 0)) &&
        (piVar7 = *(int **)(**(int **)(*param_2 + 8) + *piVar7 * 4),
        *(unsigned int *)(*(int *)(piVar7[4] * 4 + *piVar7) + 0x1c) = 1, *(int *)(iVar6 + 0x74) != 0))
       && ((*(int *)(*param_2 + 0xa0) == 0 || (*(int *)(*(int *)(*param_2 + 0xa0) + 0x40) != 1)))) {
      param_2[0xb3] = 2;
      param_2[0xb5] = *(unsigned int *)(param_2[6] * 0x1ac + param_2[2] + 0x30);
    }
    *(unsigned int *)(param_2[6] * 0x1ac + param_2[2] + 0x28) = 0;
    return;
  }
  if (uVar1 == 1) {
    fVar2 = -(float)((double)(float)param_2[0xb4] - param_1);
    fVar3 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar3 = (float)((double)(float)param_2[0xb4] - param_1);
    }
    param_2[0xb4] = (unsigned int)fVar3;
    if (fVar3 != fVar4) {
      return;
    }
    lVar5 = fn_82417F58(param_2);
    if (lVar5 != 0) {
      uVar1 = param_2[0xb5];
      if (param_2 == *(unsigned int **)(*param_2 + 0x2b20)) {
        iVar6 = *(int *)(*param_2 + 0xd4);
        fn_82358FD8(*(unsigned int *)(iVar6 + 0x1c),auStack_830,0x400,
                          lbl_82193A00);
        fn_82528EE0(auStack_1030,0x400,0xffffffff821aa638,uVar1);
        fn_8229D4E8(*(unsigned int *)(iVar6 + 0x14),lVar5 + 0x30,auStack_830,auStack_1030);
      }
    }
    fn_82536590((unsigned __int64)*param_2 + 0x1494,0);
    fn_82536590((unsigned __int64)*param_2 + 0xe38,0);
    param_2[0xb3] = 3;
    uVar1 = *(unsigned int *)(*param_2 + 0x708);
  }
  else if (uVar1 < 3) {
    uVar1 = *param_2;
    if (((*(int *)(uVar1 + 0xc14) != 0) &&
        ((*(int *)(uVar1 + 0x2bb0) != 3 || (*(float *)(uVar1 + 0x2b34) != ltcg_pool_0_0f)))) &&
       (*(int *)(uVar1 + 0x2b3c) != 0)) {
      return;
    }
    if (*(int *)(uVar1 + 0x2b30) != 0) {
      fVar4 = *(float *)(uVar1 + 0x614);
    }
    if (fVar4 < *(float *)(uVar1 + 0x2bb8)) {
      return;
    }
    if (ltcg_pool_0_0f < *(float *)(uVar1 + 0x2b24)) {
      return;
    }
    if (param_2[0x9f] != 0) {
      return;
    }
    if (*(int *)(uVar1 + 0x2b40) != 0) {
      return;
    }
    param_2[0xb3] = 1;
    uVar1 = *(unsigned int *)(uVar1 + 0x704);
  }
  else {
    if (uVar1 != 3) {
      if (4 < uVar1) {
        return;
      }
      fVar2 = -(float)((double)(float)param_2[0xb4] - param_1);
      fVar3 = ltcg_pool_0_0f;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar3 = (float)((double)(float)param_2[0xb4] - param_1);
      }
      param_2[0xb4] = (unsigned int)fVar3;
      if (fVar3 != fVar4) {
        return;
      }
      param_2[0xb3] = 0;
      return;
    }
    fVar2 = -(float)((double)(float)param_2[0xb4] - param_1);
    fVar3 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar3 = (float)((double)(float)param_2[0xb4] - param_1);
    }
    param_2[0xb4] = (unsigned int)fVar3;
    if (fVar3 != fVar4) {
      return;
    }
    if (param_2 == *(unsigned int **)(*param_2 + 0x2b20)) {
      fn_8229AAF8(*(unsigned int *)(*param_2 + 0xd4));
    }
    param_2[0xb3] = 4;
    uVar1 = *(unsigned int *)(*param_2 + 0x70c);
  }
  param_2[0xb4] = uVar1;
  return;
}

