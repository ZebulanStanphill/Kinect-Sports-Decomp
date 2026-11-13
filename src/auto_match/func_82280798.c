extern int fn_82279DA8();
extern int fn_82280B40();
extern unsigned int ltcg_pool_0_0f;


void fn_82280798(int param_1,unsigned int *param_2,unsigned int *param_3,char param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)(param_1 + 100);
  if (*(int *)(param_1 + 100) == 0) {
    *(unsigned int *)(param_1 + 0x68) = 0;
  }
  else {
    fn_82280B40(puVar2);
  }
  *(unsigned int *)(param_1 + 0x6c) = 1;
  *puVar2 = *param_2;
  *(unsigned int *)(param_1 + 0x68) = param_2[1];
  uVar1 = ltcg_pool_0_0f;
  if (param_3 == (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0x74) = ltcg_pool_0_0f;
    *(unsigned int *)(param_1 + 0x70) = uVar1;
    *(unsigned char *)(param_1 + 0x78) = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0x70) = *param_3;
    *(unsigned int *)(param_1 + 0x74) = param_3[1];
    *(unsigned char *)(param_1 + 0x78) = 1;
  }
  *(char *)(param_1 + 0x79) = param_4;
  fn_82279DA8(*puVar2,0);
  if (param_4 != '\0') {
    *(unsigned int *)(param_1 + 0x50) = 0;
    *(unsigned int *)(param_1 + 0x58) = 0;
  }
  return;
}

