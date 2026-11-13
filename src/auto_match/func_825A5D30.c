extern unsigned int *auStack_28;
extern int fn_82A1EFC0();
extern unsigned int ltcg_pool_0_0f;


void fn_825A5D30(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned char auStack_28 [40];
  
  uVar1 = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned int *)(param_1 + 0x40) = uVar1;
  *(unsigned int *)(param_3 + 0x194) = *(unsigned int *)(param_1 + 0x48);
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_28,0,4);
}

