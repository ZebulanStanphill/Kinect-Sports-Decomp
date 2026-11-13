extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82810240();
extern int fn_82810328();
extern int fn_82810B78();
extern int fn_83066658();


void fn_8305FFB8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  
  fn_82810328(param_4,param_3,auStack_30);
  fn_82810240(auStack_30,param_2,auStack_40);
  fn_82810B78(auStack_40,auStack_40);
  fn_83066658(param_5,auStack_40,param_3);
  return;
}

