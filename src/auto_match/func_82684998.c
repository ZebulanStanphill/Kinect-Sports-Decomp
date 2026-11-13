extern unsigned int *auStack_20;
extern int fn_82684068();
extern int fn_82684460();
extern int fn_82684580();
extern unsigned int lbl_8200593C;


unsigned int *
fn_82684998(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char auStack_20 [16];
  
  *param_1 = &lbl_8200593C;
  fn_82684068(auStack_20,0,param_2,param_3,param_4);
  fn_82684580(param_1,auStack_20);
  fn_82684460(auStack_20);
  return param_1;
}

