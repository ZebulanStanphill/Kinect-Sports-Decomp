extern int fn_82A3F758();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57AA0();
extern int fn_82F64CE0();


unsigned __int64 fn_82E57F48(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  if (*(unsigned int *)(param_1 + 0xb0) < 0xffff) {
    lVar2 = fn_82F64CE0(param_2);
    if ((lVar2 + 1U & 0x7fffffff) << 1 < 0x100) {
      lVar2 = fn_82F64CE0(param_2);
      uVar3 = fn_82E50BE8((lVar2 + 1U & 0x7f) << 1,0,0,0,0);
      if (uVar3 == 0) {
        uVar5 = 0xffffffff8007000e;
      }
      else {
        uVar1 = lVar2 + 1U & 0x7f;
        if (uVar1 < 0x80000000) {
          uVar5 = fn_82A3F758(uVar3,uVar1,param_2);
        }
        else {
          uVar5 = 0xffffffff80070057;
        }
        if (-1 < (int)uVar5) {
          iVar4 = fn_82E57AA0(param_1 + 0x48,uVar3,0);
          if (iVar4 == 0) {
            uVar5 = 0xffffffff8007000e;
          }
          else {
            uVar3 = 0;
          }
        }
        if ((uVar3 & 0xffffffff) != 0) {
          fn_82E4FE40(uVar3);
        }
      }
    }
    else {
      uVar5 = 0xffffffff80070057;
    }
  }
  else {
    uVar5 = 0xffffffffc00d3a9a;
  }
  return uVar5;
}

