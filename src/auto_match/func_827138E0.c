extern char lbl_8200F14C[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_82713850();
extern unsigned int lbl_8200F254;
extern unsigned int lbl_8200F278;
extern unsigned int lbl_8200F280;


unsigned int * fn_827138E0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_82713850();
  *param_1 = &lbl_8200F254;
  param_1[4] = &lbl_8200F280;
  param_1[0x10] = &lbl_8200F278;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0x10,param_1,param_2,lbl_8200F14C,auStack_20);
  return param_1;
}

