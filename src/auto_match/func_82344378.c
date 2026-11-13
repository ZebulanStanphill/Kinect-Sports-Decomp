extern unsigned int *auStack_20;
extern int fn_8233EB88();
extern int fn_82348C30();
extern unsigned int ltcg_pool_0_0f;


void fn_82344378(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char auStack_20 [16];
  
  fn_82348C30();
  uVar2 = ltcg_pool_0_0f;
  **(unsigned int **)(param_1 + 0x14) = 0xffffffff;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 4) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 8) = uVar2;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x10) = uVar2;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x18) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x20) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x48) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x24) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x28) = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  fn_8233EB88(auStack_20,iVar1 + 0x4c,*(unsigned int *)(iVar1 + 0x4c),*(unsigned int *)(iVar1 + 0x50))
  ;
  return;
}

