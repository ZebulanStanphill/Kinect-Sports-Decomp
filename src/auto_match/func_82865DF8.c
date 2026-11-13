extern int fn_82865CC8();
extern unsigned int uStack_10;


void fn_82865DF8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char uStack_10;
  
  puVar1 = param_1;
  if (7 < (unsigned int)param_1[5]) {
    puVar1 = (unsigned int *)*param_1;
  }
  puVar2 = param_1;
  if (7 < (unsigned int)param_1[5]) {
    puVar2 = (unsigned int *)*param_1;
  }
  fn_82865CC8(param_1,puVar2,param_1[4] * 2 + (int)puVar1,param_2,param_3,uStack_10);
  return;
}

