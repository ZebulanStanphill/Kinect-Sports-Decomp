extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8280D8E0();
extern int fn_8280DD50();
extern int fn_8280DF98();
extern int fn_8280E418();
extern int fn_828105C8();
extern int fn_82810B78();
extern int fn_8281E528();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8281E7B8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  double dVar1;
  unsigned char auStack_70 [1];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  fn_8280DD50(auStack_40);
  dVar1 = (double)lbl_821AAD20;
  fn_828105C8(dVar1,(double)lbl_82002AE0,dVar1,auStack_50);
  fn_828105C8(dVar1,dVar1,(double)lbl_8200133C,auStack_60);
  fn_8281E528(param_1,auStack_60,param_2);
  fn_8280DF98(param_1,auStack_50,auStack_70);
  fn_82810B78(auStack_70,auStack_70);
  fn_8281E528(auStack_40,auStack_70,param_3);
  fn_8280D8E0(auStack_40,param_1,param_1);
  fn_8280E418(param_1,param_1);
  return;
}

