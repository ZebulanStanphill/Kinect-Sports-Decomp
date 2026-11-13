extern int fn_8288CBD8();
extern unsigned int stack0x0000001c;


void fn_828E36E8(int *param_1,int *param_2)

{
  int iVar1;
  int *piStack0000001c;
  
  param_2[1] = param_1[1];
  piStack0000001c = param_2;
  (**(int (***)())(*param_2 + 0xc))(param_2);
  iVar1 = (**(int (***)())(*param_1 + 0xc))(param_1);
  param_2[0xc] = iVar1;
  fn_8288CBD8(param_1 + 6,&stack0x0000001c);
  return;
}

