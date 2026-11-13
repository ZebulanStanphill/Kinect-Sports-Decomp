extern int fn_82637C50();
extern int fn_82637CE0();
extern unsigned int ltcg_pool_0_0f;


void fn_825427C0(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  fn_82637C50(*param_1,6);
  fn_82637CE0(*param_1,7);
  uVar2 = ltcg_pool_0_0f;
  iVar1 = *param_1;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffb;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
  iVar1 = *param_1;
  *(unsigned int *)(iVar1 + 0x2904) = uVar2;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x8000000;
  return;
}

