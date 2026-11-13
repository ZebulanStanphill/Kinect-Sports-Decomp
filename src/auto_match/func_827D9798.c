extern unsigned int *auStack_60;
extern unsigned int *auStack_a0;
extern int fn_8256D3A8();
extern int fn_8256D798();


unsigned int * fn_827D9798(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 *param_3,int *param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_a0 [64];
  unsigned char auStack_60 [96];
  
  uVar2 = *param_3;
  param_1[5] = 0;
  *(unsigned __int64 *)(param_1 + 2) = uVar2;
  fn_8256D3A8(auStack_a0);
  uVar1 = (**(int (***)())(*param_4 + 4))(param_4,auStack_a0);
  *param_1 = uVar1;
  fn_8256D798(auStack_a0,1,0);
  fn_8256D3A8(auStack_60,param_2);
  uVar1 = (**(int (***)())(*param_4 + 8))(param_4,auStack_60);
  param_1[4] = uVar1;
  fn_8256D798(auStack_60,1,0);
  return param_1;
}

