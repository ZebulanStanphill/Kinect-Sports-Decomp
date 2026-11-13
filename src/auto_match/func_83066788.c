extern unsigned int *auStack_30;
extern int fn_82809CB0();
extern int fn_82810280();
extern int fn_82810328();
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_83066788(double param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  double dVar2;
  double dVar3;
  unsigned char auStack_30 [1];
  
  fn_82810328(param_3,param_2 + 0xc,auStack_30);
  dVar2 = (double)fn_82810280(auStack_30,param_2);
  dVar3 = (double)fn_82809CB0();
  if (param_1 <= dVar3) {
    uVar1 = 1;
    if ((double)lbl_821AAD20 <= dVar2) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

