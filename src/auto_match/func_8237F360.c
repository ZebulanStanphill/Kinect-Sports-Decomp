#define NAN(x) ((x) != (x))
extern unsigned int *auStack_80;
extern int fn_8237F4A8();
extern int fn_8237F8E0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CB358;
extern unsigned int lbl_831CB35C;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


void fn_8237F360(unsigned __int64 param_1,int param_2,int param_3,int param_4)

{
  unsigned __int64 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned __int64 uStack_90;
  unsigned __int64 uStack_88;
  unsigned __int64 auStack_80 [16];
  
  uVar1 = fn_82F6A548();
  fn_8237F8E0(&uStack_90,uVar1);
  fn_8237F8E0(&uStack_88,uVar1);
  fn_8237F8E0(auStack_80,uVar1);
  dVar4 = (double)lbl_831CB35C;
  dVar7 = (double)lbl_831CB358;
  dVar2 = (double)fn_8237F4A8(dVar7,dVar4,uStack_90);
  dVar3 = (double)fn_8237F4A8(dVar7,dVar4,uStack_88);
  dVar5 = (double)ltcg_pool_0_0f;
  dVar6 = dVar5;
  if (param_3 != 0) {
    dVar5 = (double)fn_8237F4A8(dVar7,dVar4,auStack_80[0]);
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)(((double)(float)(dVar2 - dVar5) < dVar6) << 2) |
                (unsigned int)(NAN((double)(float)(dVar2 - dVar5)) || NAN(dVar6)) << 2)) < 0.0) {
    dVar2 = dVar5;
  }
  if (param_4 != 0) {
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)(((double)(float)(dVar2 - dVar3) < dVar6) << 2) |
                  (unsigned int)(NAN((double)(float)(dVar2 - dVar3)) || NAN(dVar6)) << 2)) < 0.0) {
      dVar2 = dVar3;
    }
  }
  fn_82F6A594((double)(float)((double)*(float *)(param_2 + 0x1c) * dVar2));
  return;
}

