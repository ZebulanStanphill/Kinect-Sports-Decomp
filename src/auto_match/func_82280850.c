extern int fn_82280B40();
extern unsigned int ltcg_pool_0_0f;


void fn_82280850(int param_1)

{
  unsigned int uVar1;
  
  if (*(int *)(param_1 + 100) == 0) {
    *(unsigned int *)(param_1 + 0x68) = 0;
  }
  else {
    fn_82280B40((unsigned int *)(param_1 + 100));
  }
  *(unsigned int *)(param_1 + 0x68) = 0;
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned int *)(param_1 + 0x6c) = 1;
  uVar1 = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x74) = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x70) = uVar1;
  *(unsigned char *)(param_1 + 0x78) = 0;
  *(unsigned char *)(param_1 + 0x79) = 1;
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x58) = 0;
  return;
}

