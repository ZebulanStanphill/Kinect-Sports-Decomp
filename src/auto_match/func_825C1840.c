#define NAN(x) ((x) != (x))
extern int fn_825C1C70();
extern int fn_825C2240();
extern int fn_82611068();
extern int fn_82F6DA1C();
extern int fn_82F6DCB4();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_825C1840(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,__int64 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 extraout_f1;
  unsigned __int64 uVar7;
  
  iVar5 = fn_82F6DA1C();
  fVar4 = ltcg_pool_0_0f;
  if (*(int *)(iVar5 + 0x14) != 0) {
    fVar1 = *(float *)(iVar5 + 0x14) - *(float *)((int)param_2 + 0xb3c);
    fVar3 = -fVar1;
    fVar2 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar2 = fVar1;
    }
    *(float *)(iVar5 + 0x14) = fVar2;
  }
  uVar7 = extraout_f1;
  if ((int)param_8 == 0) {
    if ((0 < *(int *)(iVar5 + 0x10)) ||
       (*(int *)(*(int *)(*(int *)((int)param_2 + 0x4c) + 0x844) + 0x358) != 0)) {
      param_8 = 1;
    }
    if (*(float *)(iVar5 + 0x14) <= fVar4 && param_8 == 0) {
      uVar6 = 0;
      fn_825C1C70(iVar5,param_2,param_3,param_4,param_7);
      goto LAB_825c1944;
    }
  }
  uVar6 = 1;
LAB_825c1944:
  fn_825C2240(iVar5,param_2,param_3,param_4,uVar6,param_7);
  fn_82611068(uVar7,iVar5 + 0x1c,param_5);
  *(unsigned int *)(iVar5 + 0x18) = (unsigned int)LZCOUNT(uVar6) >> 5;
  fn_82F6DCB4();
  return;
}

