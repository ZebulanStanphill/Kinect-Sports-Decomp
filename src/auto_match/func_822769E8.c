extern unsigned int *auStack_22e;
extern int fn_822C5B18();
extern int fn_82F691F0();
extern unsigned int ltcg_pool_0_0f;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822769E8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned char auStack_22e [558];
  
  fn_822C5B18(param_1,param_3);
  *(unsigned int *)(param_1 + 0x18) = 0;
  uVar1 = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x34) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x3c) = uVar1;
  *(unsigned int *)(param_1 + 0x38) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_22e,0,0x1fe);
}

