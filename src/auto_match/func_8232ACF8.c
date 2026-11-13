extern int fn_82560100();
extern int fn_82575DF0();
extern unsigned int lbl_82192734;
extern unsigned int ltcg_pool_0_0f;


void fn_8232ACF8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != *(int *)(param_1 + 0x100)) {
    if (*(int *)(param_1 + 0xf8) != 0) {
      fn_82575DF0(*(unsigned int *)(*(int *)(param_1 + 0xfc) + 0x93c));
      *(unsigned int *)(param_1 + 0xf8) = 0;
    }
    if (param_2 == 0) {
      iVar3 = *(int *)(param_1 + 0xf4);
      iVar2 = param_1 + 0xf4;
    }
    else {
      iVar3 = param_2 * 0x18 + param_1;
      if (*(int *)(iVar3 + -0x14) != 0) {
        uVar1 = fn_82560100((double)lbl_82192734,*(unsigned int *)(param_1 + 0xfc),iVar3 + -0x14
                                  ,param_1 + 0x110,param_4,0,0,0,0);
        *(unsigned int *)(param_1 + 0xf8) = uVar1;
      }
      iVar3 = *(int *)(param_1 + 0xf0);
      iVar2 = param_1 + 0xf0;
    }
    if (iVar3 != 0) {
      fn_82560100((double)ltcg_pool_0_0f,*(unsigned int *)(param_1 + 0xfc),iVar2,param_1 + 0x110,
                        param_4,0,0,0,0);
    }
    *(int *)(param_1 + 0x100) = param_2;
  }
  return;
}

