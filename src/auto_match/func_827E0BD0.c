extern unsigned int *auStack_1c;
extern int fn_827DE2E0();
extern int fn_827E0760();
extern unsigned int uStack_20;


void fn_827E0BD0(unsigned int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uStack_20;
  unsigned char auStack_1c [4];
  
  uStack_20 = *param_3;
  fn_827DE2E0(auStack_1c,param_1,*param_1,param_1[1]);
  fn_827E0760(param_1,*param_1,param_2,&uStack_20);
  return;
}

