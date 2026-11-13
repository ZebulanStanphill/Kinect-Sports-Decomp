extern int fn_8263AB38();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82A94F88(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  fn_8263AB38(param_1,&uStack_20,&uStack_1c);
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = uStack_20;
  }
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = uStack_1c;
  }
  return;
}

