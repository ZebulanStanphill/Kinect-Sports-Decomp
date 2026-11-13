extern int fn_82E50338();
extern int fn_82E50F00();
extern int fn_82E51028();


unsigned __int64 fn_82E63320(int param_1,unsigned int param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  uVar3 = 0;
  fn_82E50F00(param_1 + 4,1);
  if (param_2 < *(unsigned int *)(param_1 + 0x48)) {
    iVar2 = param_2 * 0x20;
    iVar1 = *(int *)(param_1 + 0x40) + iVar2;
    *param_3 = *(unsigned int *)(*(int *)(param_1 + 0x40) + iVar2);
    param_3[1] = *(unsigned int *)(iVar1 + 4);
    param_3[2] = *(unsigned int *)(iVar1 + 8);
    param_3[3] = *(unsigned int *)(iVar1 + 0xc);
    if ((param_4 & 0xffffffff) != 0) {
      uVar3 = fn_82E50338(param_4,*(int *)(param_1 + 0x40) + iVar2 + 0x10);
    }
  }
  else {
    uVar3 = 0xffffffff80070057;
  }
  fn_82E51028(param_1 + 4,1);
  return uVar3;
}

