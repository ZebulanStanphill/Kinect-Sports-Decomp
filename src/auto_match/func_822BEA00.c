extern int fn_82320BE0();
extern int fn_82536008();
extern int fn_82536288();
extern int fn_82575DF0();
extern int fn_82F63108();
extern unsigned int ltcg_pool_0_0f;


void fn_822BEA00(int param_1)

{
  int iVar1;
  
  *(unsigned int *)(param_1 + 0x7b0) = 0;
  *(unsigned int *)(param_1 + 0x7a4) = 0;
  *(unsigned int *)(param_1 + 0x7a0) = 0;
  *(unsigned int *)(param_1 + 0x7bc) = 0;
  iVar1 = *(int *)(param_1 + 0x6d0);
  *(unsigned int *)(param_1 + 0x5c4) = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x5c0) = 0;
  *(unsigned int *)(param_1 + 0x720) = 0;
  *(unsigned int *)(iVar1 + 0x100) = 0;
  if (*(int *)(iVar1 + 0xf8) != 0) {
    fn_82575DF0(*(unsigned int *)(*(int *)(iVar1 + 0xfc) + 0x93c));
    *(unsigned int *)(iVar1 + 0xf8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x6d8);
  *(unsigned int *)(iVar1 + 0x100) = 0;
  if (*(int *)(iVar1 + 0xf8) != 0) {
    fn_82575DF0(*(unsigned int *)(*(int *)(iVar1 + 0xfc) + 0x93c));
    *(unsigned int *)(iVar1 + 0xf8) = 0;
  }
  if (*(int *)(param_1 + 0x6e0) != 0) {
    fn_82536008();
    fn_82536288((unsigned int *)(param_1 + 0x6e0));
    *(unsigned int *)(param_1 + 0x6e0) = 0;
  }
  if (*(int *)(param_1 + 0x718) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  (**(int (***)())(**(int **)(param_1 + 0x718) + 4))(*(int **)(param_1 + 0x718),1);
  if (*(int *)(param_1 + 0x7d4) != 0) {
    fn_82320BE0(*(int *)(param_1 + 0x7d4),1);
  }
  return;
}

