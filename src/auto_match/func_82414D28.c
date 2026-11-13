typedef unsigned char bool;
#define NAN(x) ((x) != (x))
extern int fn_8254EDB0();
extern int fn_8254EEB8();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_82414D28(int *param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
                  int param_6)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  unsigned __int64 uVar7;
  bool bVar8;
  
  fVar2 = ltcg_pool_0_0f;
  fVar6 = lbl_82005748;
  if (param_1[0x31] == 0) {
    fn_8254EDB0(*param_1);
  }
  else {
    if (param_5 == 0) {
      uVar7 = param_2 + 0x3d;
      if (param_6 == 0) {
        uVar7 = param_2 + 0x33;
      }
      fVar2 = *(float *)((int)((uVar7 & 0xffffffff) << 2) + (int)param_1);
      param_1[0x43] = (int)fVar2;
      fVar3 = ltcg_pool_0_0f;
      fVar6 = lbl_82005748;
      bVar1 = NAN(ltcg_pool_0_0f);
      bVar8 = fVar2 < ltcg_pool_0_0f;
      param_1[0x45] = (int)ltcg_pool_0_0f;
      if (*(float *)(&lbl_821954D8 + ((unsigned int)(unsigned char)(bVar8 << 2) | (unsigned int)(NAN(fVar2) || bVar1) << 2))
          < 0.0) {
        fVar2 = fVar3;
      }
      fVar5 = fVar2 - fVar6;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar5 < fVar3) << 2) | (unsigned int)(NAN(fVar5) || NAN(fVar3)) << 2)) <
          0.0) {
        fVar6 = fVar2;
      }
      param_1[0x44] = (int)fVar6;
    }
    else {
      iVar4 = (int)((param_2 + 0x38U & 0xffffffff) << 2);
      fVar3 = *(float *)(iVar4 + (int)param_1) + (float)param_1[0x44];
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar3 = ltcg_pool_0_0f;
      }
      fVar5 = lbl_82005748;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 - lbl_82005748 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar3 - lbl_82005748) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar5 = fVar3;
      }
      param_1[0x44] = (int)fVar5;
      fVar3 = *(float *)(iVar4 + (int)param_1) + (float)param_1[0x43];
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 < fVar2) << 2) | (unsigned int)(NAN(fVar3) || NAN(fVar2)) << 2)) <
          0.0) {
        fVar3 = fVar2;
      }
      fVar5 = fVar3 - fVar6;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar5 < fVar2) << 2) | (unsigned int)(NAN(fVar5) || NAN(fVar2)) << 2)) <
          0.0) {
        fVar6 = fVar3;
      }
    }
    param_1[0x43] = (int)fVar6;
    if (*(int *)(*param_1 + 4) != 0) {
      fn_8254EEB8(*param_1,(int)fVar6);
    }
  }
  return;
}

