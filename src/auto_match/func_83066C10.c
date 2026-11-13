extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82810280();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_82810530();
extern int fn_82810558();
extern int fn_83066788();
extern unsigned int lbl_8200133C;


unsigned __int64
fn_83066C10(double param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  unsigned char auStack_60 [1];
  unsigned char auStack_50 [16];

  fn_82810328(param_4,param_3,auStack_60);
  dVar3 = (double)fn_82810308(auStack_60);
  if ((double)(float)(param_1 * param_1) < dVar3) {
    iVar1 = fn_83066788(param_1,param_2,param_3);
    iVar2 = fn_83066788(param_1,param_2,param_4);
    if (((iVar1 != iVar2) && (iVar1 != 2)) && (iVar2 != 2)) {
      fn_82810280(auStack_60,param_2);
      if (param_5 != 0) {
        if (iVar1 != 1) {
          fn_82810530(auStack_60,auStack_60);
          param_3 = param_4;
        }
        dVar3 = (double)fn_82810280(auStack_60,param_2);
        fn_82810328(param_3,param_2 + 0xc,auStack_50);
        dVar4 = (double)fn_82810280(param_2,auStack_50);
        fn_82810558((double)(float)(dVar4 * (double)(float)((double)lbl_8200133C / dVar3)),
                     auStack_60,param_3);
      }
      return 1;
    }
  }
  return 0;
}
