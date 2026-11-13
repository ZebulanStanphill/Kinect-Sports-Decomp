extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82809558();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_827EE3C0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  float *param_5)

{
  float fVar1;
  unsigned __int64 uVar2;
  double dVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned char auStack_60 [1];
  unsigned char auStack_50 [80];
  
  uVar2 = fn_82F6A548();
  dVar3 = extraout_f1;
  fn_82810328(param_3,uVar2,auStack_50);
  fn_82810328(param_4,param_3,auStack_60);
  dVar4 = (double)fn_82810280(auStack_60,auStack_60);
  dVar5 = (double)fn_82810280(auStack_50,auStack_50);
  dVar7 = (double)lbl_821AAD20;
  if (dVar4 == dVar7) {
    if (dVar5 <= (double)(float)(dVar3 * dVar3)) {
      *param_5 = lbl_821AAD20;
LAB_827ee4b0:
      uVar2 = 1;
      goto LAB_827ee4b4;
    }
  }
  else {
    dVar6 = (double)fn_82810280(auStack_50,auStack_60);
    dVar3 = -(double)(float)(dVar3 * dVar3 - dVar5);
    if (((dVar3 <= dVar7) || (dVar6 <= dVar7)) &&
       (dVar7 <= (double)(float)(dVar6 * dVar6 - (double)(float)(dVar3 * dVar4)))) {
      dVar3 = (double)fn_82809558();
      dVar5 = (double)lbl_82002AE0;
      fVar1 = (float)((double)(float)(-dVar6 - dVar3) / dVar4);
      dVar3 = (double)fVar1;
      *param_5 = fVar1;
      if (dVar3 <= dVar5) {
        if (dVar3 < 0.0) {
          dVar3 = dVar7;
        }
        *param_5 = (float)dVar3;
        goto LAB_827ee4b0;
      }
    }
  }
  uVar2 = 0;
LAB_827ee4b4:
  fn_82F6A594(uVar2);
  return;
}

