extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_827ED650();
extern int fn_82810328();
extern int fn_828104E8();
extern int fn_8281D780();


void fn_827EDC08(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [32];
  
  fn_828104E8(param_2,param_1,auStack_70);
  fn_82810328(param_2,auStack_70,auStack_60);
  fn_8281D780(auStack_50);
  fn_827ED650(auStack_70,auStack_60,auStack_50,param_3,param_4,param_5);
  return;
}

