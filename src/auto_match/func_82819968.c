extern int fn_82823080();
extern int fn_828230A8();
extern int iRam8320a5f4;
extern unsigned int iStack_30;
extern unsigned int lbl_8320A5F0;


unsigned __int64 fn_82819968(int param_1,__int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iStack_30;
  int aiStack_2c [11];
  
  lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14) - param_2;
  if (-1 < lVar3) {
    uVar1 = param_3 & 0xffff;
    uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) + param_4;
    if ((uVar1 - 1 & uVar4) != 0) {
      lVar3 = (uVar4 - ((uVar1 + uVar4) - 1 & ~(uVar1 - 1))) + lVar3;
    }
    iVar2 = (int)lVar3;
    if (-1 < iVar2) {
      if (((lbl_8320A5F0 == 0) || (iRam8320a5f4 < iVar2)) ||
         ((iVar2 == iRam8320a5f4 && (param_1 - 0x10U < lbl_8320A5F0)))) {
        lbl_8320A5F0 = param_1 - 0x10U;
        iRam8320a5f4 = iVar2;
      }
      fn_828230A8(param_1,&iStack_30);
      if (iStack_30 == 0) {
        return 1;
      }
      fn_82819968(iStack_30,param_2,param_3,param_4);
      return 1;
    }
  }
  fn_828230A8(param_1,&iStack_30);
  if ((iStack_30 != 0) && (iVar2 = fn_82819968(iStack_30,param_2,param_3,param_4), iVar2 != 0)) {
    return 1;
  }
  fn_82823080(param_1,aiStack_2c);
  if ((aiStack_2c[0] != 0) &&
     (iVar2 = fn_82819968(aiStack_2c[0],param_2,param_3,param_4), iVar2 != 0)) {
    return 1;
  }
  return 0;
}

