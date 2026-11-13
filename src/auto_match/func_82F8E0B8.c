extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


void fn_82F8E0B8(int *param_1,unsigned int param_2,unsigned int param_3)

{
  int *piStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  
  piStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  (**(int (***)())(*param_1 + 0x24))(param_1,0,0,param_2,param_3);
  return;
}

