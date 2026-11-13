extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_827EB978();
extern int fn_82810328();
extern int fn_82810530();
extern int fn_8281C9E8();


void fn_827EBDF8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [32];
  
  fn_82810328(param_4,param_1,auStack_70);
  fn_8281C9E8(param_3,param_6,auStack_50);
  fn_82810530(param_2,auStack_60);
  fn_827EB978(auStack_60,param_2,auStack_70,param_5,auStack_50);
  return;
}

