extern int fn_82AA3400();
extern int fn_82AA3680();


unsigned __int64
fn_82AA3AA8(unsigned __int64 param_1,int param_2,int param_3,unsigned int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,int param_8)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_4 < 0x24) {
    uVar1 = 0xffffffff80070057;
  }
  iVar2 = *(int *)((param_8 + 3) * 8 + param_3);
  if ((iVar2 != 0) && (iVar2 = iVar2 + param_3, -1 < (int)uVar1)) {
    if (param_2 == 0) {
      uVar1 = fn_82AA3400(iVar2,param_7,param_5,param_6,param_1);
    }
    else if (param_2 == 1) {
      uVar1 = fn_82AA3680(iVar2,param_7,param_5,param_6,param_1);
    }
    else {
      uVar1 = 0xffffffff80070057;
    }
  }
  return uVar1;
}

