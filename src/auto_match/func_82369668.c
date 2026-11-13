extern int fn_82672C20();
extern unsigned int ltcg_pool_0_0f;


void fn_82369668(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != -1) {
    if (((*(int *)(param_1 + 0x41c) != 3) || (param_2 != *(int *)(param_1 + 0x420))) ||
       (param_3 != *(int *)(param_1 + 0x420))) {
      *(int *)(param_1 + 0x420) = param_2;
      *(int *)(param_1 + 0x424) = param_3;
      *(unsigned int *)(param_1 + 0x41c) = 3;
      *(unsigned int *)(param_1 + 0x428) = ltcg_pool_0_0f;
    }
    iVar1 = *(int *)(param_1 + 0x4b0);
    if (iVar1 != 0) {
      if (((*(int *)(iVar1 + 0x30) != 0) &&
          (iVar2 = *(int *)(iVar1 + 0x54), *(int *)(iVar2 + 0x34) != 0)) &&
         (*(int *)(iVar2 + 0x38) == 0)) {
        *(unsigned int *)(iVar2 + 0x38) = 1;
        fn_82672C20(*(unsigned int *)(iVar2 + 0x3c),0xffffffff821a8498,0,0);
      }
      *(unsigned int *)(iVar1 + 0x30) = 0;
    }
    return;
  }
  if ((*(int *)(param_1 + 0x41c) == 4) && (*(int *)(param_1 + 0x424) == *(int *)(param_1 + 0x420)))
  {
    return;
  }
  *(unsigned int *)(param_1 + 0x41c) = 4;
  *(unsigned int *)(param_1 + 0x428) = ltcg_pool_0_0f;
  return;
}

