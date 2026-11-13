extern unsigned int lbl_82193E50;
extern unsigned int ltcg_pool_0_0f;


void fn_82449898(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar3 = ltcg_pool_0_0f;
  uVar1 = lbl_82193E50;
  if (*(int *)(((param_4 & 0xff) + 0xc) * 0x30 + *(int *)(param_2 + 0x40)) == 0) {
    *param_1 = ltcg_pool_0_0f;
    param_1[1] = uVar1;
  }
  else {
    iVar2 = (param_4 & 0xff) * 0x30 + *(int *)(param_2 + 0x40);
    uVar1 = *(unsigned int *)(iVar2 + 0x264);
    uVar3 = *(unsigned int *)(iVar2 + 0x268);
    *param_1 = *(unsigned int *)(iVar2 + 0x260);
    param_1[1] = uVar1;
  }
  param_1[2] = uVar3;
  return;
}

