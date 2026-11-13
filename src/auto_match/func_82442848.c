#define _uStack00000030 ((*(unsigned __int64*)&uStack00000030))
#define _uStack00000038 ((*(unsigned __int64*)&uStack00000038))
extern int fn_82441D38();
extern unsigned int uStack00000030;
extern unsigned int uStack00000034;
extern unsigned int uStack00000038;


void fn_82442848(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int uStack00000030;
  unsigned int uStack00000034;
  unsigned int uStack00000038;
  
  _uStack00000030 = param_3;
  _uStack00000038 = param_4;
  fn_82441D38();
  iVar1 = *(int *)(param_1 + 0x14);
  *(unsigned int *)(iVar1 + 0x60) = uStack00000030;
  *(unsigned int *)(iVar1 + 100) = uStack00000034;
  *(unsigned int *)(iVar1 + 0x68) = uStack00000038;
  (**(int (***)())(*(int *)(*(int *)(param_1 + 0x14) + 0xdc) + 4))
            (*(int *)(param_1 + 0x14) + 0xdc,param_2,param_3,param_4 & 0xffffffff00000000);
  return;
}

