extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82465038(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = ltcg_pool_0_0f;
  if ((*(int *)(param_1 + 4) == 7) && (param_2 != 0xb)) {
    *(unsigned int *)(param_1 + 0x10) = ltcg_pool_0_0f;
  }
  uVar1 = lbl_821CA460;
  if ((param_2 == 7) || (uVar1 = uVar2, param_2 == 0xc)) {
    *(unsigned int *)(param_1 + 0x10) = uVar1;
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

