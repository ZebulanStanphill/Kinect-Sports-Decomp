extern char lbl_82013B44[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_82751DA8();
extern unsigned int lbl_82013BD0;
extern unsigned int lbl_82013BD4;
extern unsigned int lbl_82013C30;


unsigned int * fn_82751E38(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_82751DA8();
  *param_1 = &lbl_82013BD4;
  param_1[4] = &lbl_82013C30;
  param_1[0xf] = &lbl_82013BD0;
  auStack_20[0] = 0;
  fn_826BF638(param_1 + 0xf,param_1,param_2,lbl_82013B44,auStack_20);
  return param_1;
}

