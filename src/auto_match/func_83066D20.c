extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82809CB0();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810558();
extern int fn_82810B78();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_8201DCB8;


unsigned __int64 fn_83066D20(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned __int64 uVar1;
  double dVar2;
  double dVar3;
  unsigned char auStack_50 [1];
  unsigned char auStack_40 [16];

  dVar2 = (double)fn_82810280(param_3,param_1);
  fn_82810B78(param_3,auStack_50);
  fn_82810280(auStack_50,param_1);
  dVar3 = (double)fn_82809CB0();
  if ((double)lbl_8201DCB8 < dVar3) {
    if (param_4 != 0) {
      fn_82810328(param_2,param_1 + 0xc,auStack_40);
      dVar3 = (double)fn_82810280(param_1,auStack_40);
      fn_82810558((double)(float)(dVar3 * (double)(float)((double)lbl_8200133C / dVar2)),param_3,
                   param_2);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
