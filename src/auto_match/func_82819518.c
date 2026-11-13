extern int fn_82823080();
extern int fn_828230A8();
extern int iRam8320a5f4;
extern unsigned int iStack_30;
extern unsigned int lbl_8320A5F0;


unsigned __int64 fn_82819518(int param_1,__int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int iStack_30;
  int aiStack_2c [11];
  
  lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14) - param_2;
  if (-1 < lVar4) {
    uVar1 = param_3 & 0xffff;
    uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) + param_4;
    if ((uVar1 - 1 & uVar5) != 0) {
      lVar4 = (uVar5 - ((uVar1 + uVar5) - 1 & ~(uVar1 - 1))) + lVar4;
    }
    if (-1 < (int)lVar4) {
      lbl_8320A5F0 = param_1 + -0x10;
      iRam8320a5f4 = (int)lVar4;
      return 1;
    }
  }
  fn_828230A8(param_1,&iStack_30);
  if ((iStack_30 == 0) || (iVar3 = fn_82819518(iStack_30,param_2,param_3,param_4), iVar3 == 0)) {
    fn_82823080(param_1,aiStack_2c);
    if ((aiStack_2c[0] != 0) &&
       (iVar3 = fn_82819518(aiStack_2c[0],param_2,param_3,param_4), iVar3 != 0)) {
      return 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

