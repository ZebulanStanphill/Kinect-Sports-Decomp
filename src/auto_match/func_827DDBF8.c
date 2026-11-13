extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82811438();
extern unsigned int lbl_83156AA0;


void fn_827DDBF8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int auStack_40 [4];
  unsigned char auStack_30 [32];
  
  auStack_40[0] = 3;
  fn_82811438(auStack_30,auStack_40,0x10);
  (*(int (**)())(*(int *)lbl_83156AA0 + 0x18))(lbl_83156AA0,param_2,auStack_30);
  return;
}

