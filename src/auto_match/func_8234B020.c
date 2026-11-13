extern int fn_82230360();
extern int fn_8234B0C8();
extern int fn_827F3580();
extern int fn_827F5708();
extern unsigned int ltcg_pool_0_0f;


void fn_8234B020(int param_1)

{
  unsigned int *puVar1;
  double dVar2;
  
  dVar2 = (double)ltcg_pool_0_0f;
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_827F5708(dVar2);
  }
  *(unsigned int *)(param_1 + 0x38) = 1;
  *(unsigned int *)(param_1 + 0x34) = 0;
  puVar1 = (unsigned int *)(param_1 + 4);
  fn_82230360(puVar1,0xffffffff821b1acc,7);
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_827F3580(dVar2,dVar2);
    *(unsigned int *)(param_1 + 0x2c) = 0;
    if (0xf < *(unsigned int *)(param_1 + 0x18)) {
      puVar1 = (unsigned int *)*puVar1;
    }
    fn_8234B0C8(dVar2,param_1,puVar1);
  }
  return;
}

