extern int fn_827E38B0();
extern int fn_827E4148();
extern int fn_82811438();
extern unsigned int lbl_83156AA0;


unsigned __int64 fn_827E42E8(int *param_1,unsigned int *param_2)

{
  unsigned int auStack_40 [4];
  unsigned char auStack_30 [24];
  
  fn_827E38B0(param_1[1]);
  (*(int (**)())(*param_1 + 0x3c))(param_1,*param_2);
  fn_827E4148(*param_2,0);
  auStack_40[0] = 3;
  fn_82811438(auStack_30,auStack_40,0x10);
  (*(int (**)())(*(int *)lbl_83156AA0 + 0x18))(lbl_83156AA0,*param_2,auStack_30);
  return 0;
}

