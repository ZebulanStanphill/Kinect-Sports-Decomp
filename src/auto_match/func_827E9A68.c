extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82809558();
extern int fn_82810280();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_820069B4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831F13B4;


void fn_827E9A68(unsigned __int64 param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,
                  float *param_9)

{
  unsigned __int64 uVar1;
  double dVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  unsigned char auStack_70 [1];
  unsigned char auStack_60 [16];

  uVar1 = fn_82F6A544();
  dVar5 = extraout_f1;
  fn_82810328(uVar1,param_5,auStack_60);
  fn_82810328(param_4,param_7,auStack_70);
  dVar3 = (double)fn_82810308(auStack_70);
  dVar4 = (double)fn_82810308(auStack_60);
  dVar5 = -(double)(float)(dVar5 * dVar5 - dVar4);
  if ((double)lbl_820069B4 <= dVar3) {
    dVar4 = (double)fn_82810280(auStack_60,auStack_70);
    dVar6 = (double)lbl_821AAD20;
    if ((((dVar4 <= dVar6) || (dVar5 <= dVar6)) &&
        (dVar5 = (double)(float)(dVar4 * dVar4 - (double)(float)(dVar5 * dVar3)), dVar6 <= dVar5))
       && ((dVar2 = (double)(float)(dVar3 * param_2 + dVar4), dVar6 <= dVar2 ||
           ((double)(float)(dVar2 * dVar2) <= dVar5)))) {
      dVar5 = (double)fn_82809558();
      dVar3 = -(double)(float)((double)(float)(dVar5 + dVar4) / dVar3);
      if ((lbl_831F13B4 == 0) || (dVar6 <= dVar3)) goto LAB_827e9b64;
    }
  }
  else {
    dVar3 = (double)lbl_821AAD20;
    if (dVar5 <= dVar3) {
LAB_827e9b64:
      *param_9 = (float)dVar3;
      uVar1 = 1;
      goto LAB_827e9b6c;
    }
  }
  uVar1 = 0;
LAB_827e9b6c:
  fn_82F6A590(uVar1);
  return;
}
