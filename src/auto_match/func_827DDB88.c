extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82811438();
extern unsigned int lbl_83156AA0;


void fn_827DDB88(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int auStack_40 [4];
  unsigned char auStack_30 [24];
  
  auStack_40[0] = 0;
  fn_82811438(auStack_30,auStack_40,0x10);
  (*(int (**)())(*(int *)lbl_83156AA0 + 4))(lbl_83156AA0,param_2,auStack_30,param_1);
  return;
}

