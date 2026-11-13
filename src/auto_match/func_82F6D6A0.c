extern int fn_82F6D750();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000034;


void fn_82F6D6A0(__int64 param_1,__int64 param_2,int param_3,int (**param_4)(),unsigned int param_5)

{
  int iVar1;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000034;
  
  uStack0000001c = (unsigned int)param_2;
  uStack00000014 = (unsigned int)param_1;
  uStack00000034 = param_5;
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
    (*param_4)(param_1);
    param_1 = param_1 + param_2;
    uStack00000014 = (unsigned int)param_1;
  }
  fn_82F6D750();
  return;
}

