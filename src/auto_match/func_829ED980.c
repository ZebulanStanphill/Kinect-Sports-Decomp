extern int fn_829ECB08();
extern int fn_829ECD48();
extern int fn_82A28568();
extern unsigned int lbl_832179FC;


unsigned __int64 fn_829ED980(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  __int64 lVar3;
  
  if (((param_2 & 0xffffffff) == 0) || (0xffffffff < param_3)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    iVar2 = fn_829ECB08(param_1,param_2,param_3 & 0xffffffff,0);
    if (iVar2 != 0) {
      uVar1 = fn_829ECD48(param_1);
      *(int *)(param_1 + 0xc) = (int)uVar1;
      if ((uVar1 & 0xffffffff) != 0) {
        lVar3 = (uVar1 & 0x3fffffff) << 2;
        if (0x3fffffff < (uVar1 & 0xffffffff)) {
          lVar3 = -1;
        }
        lVar3 = fn_82A28568(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,lVar3);
        *(int *)(param_1 + 8) = (int)lVar3;
        return -(unsigned __int64)(lVar3 == 0) & 0xffffffff8007000e;
      }
    }
    uVar1 = 0xffffffff80004005;
  }
  return uVar1;
}

