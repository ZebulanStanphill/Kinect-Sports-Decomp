extern unsigned int *auStack_40;
extern int fn_82811080();
extern int fn_82811328();
extern int fn_82811400();


extern char lbl_832116F8[];
void fn_8306C1C8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char auStack_40 [16];
  
  fn_82811400(auStack_40,0x10);
  fn_82811328(auStack_40,param_2,param_3,param_4);
  fn_82811080(lbl_832116F8,param_1,auStack_40);
  return;
}

