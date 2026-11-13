extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810558();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_8306B110(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  double dVar2;
  double dVar3;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  uVar1 = 2;
  fn_82810328(param_3,param_2,auStack_50);
  fn_82810328(param_1,param_2,auStack_40);
  dVar2 = (double)fn_82810280(auStack_40,auStack_50);
  dVar3 = (double)fn_82810280(auStack_50,auStack_50);
  dVar2 = (double)(float)(dVar2 / dVar3);
  if ((double)lbl_821AAD20 < dVar2) {
    if ((double)lbl_82002AE0 <= dVar2) {
      uVar1 = 1;
      dVar2 = (double)lbl_82002AE0;
    }
  }
  else {
    uVar1 = 0;
    dVar2 = (double)lbl_821AAD20;
  }
  fn_82810558(dVar2,auStack_50,param_2);
  return uVar1;
}

