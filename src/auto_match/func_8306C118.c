extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82811080();
extern int fn_82811438();


extern char lbl_832116F8[];
void fn_8306C118(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int auStack_40 [4];
  unsigned char auStack_30 [32];
  
  auStack_40[0] = 0;
  fn_82811438(auStack_30,auStack_40,0x10);
  fn_82811080(lbl_832116F8,param_2,auStack_30);
  return;
}

