extern int fn_82E80A68();


unsigned __int64
fn_82E80DD0(int param_1,int param_2,__int64 param_3,unsigned __int64 param_4,unsigned __int64 *param_5)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  uVar2 = 0;
  if (param_5 == (unsigned __int64 *)0x0) {
    uVar2 = 0xffffffff80004003;
  }
  else {
    if (param_2 != 0) {
      param_3 = (unsigned __int64)*(unsigned int *)(param_1 + 8) + param_3;
    }
    if (param_3 < 0) {
      uVar2 = 0xffffffff80070057;
    }
    else {
      uVar3 = *(unsigned int *)(param_1 + 4);
      if (param_3 <= (__int64)(unsigned __int64)uVar3) {
        uVar3 = (unsigned int)param_3;
      }
      *(unsigned int *)(param_1 + 8) = uVar3;
      iVar1 = fn_82E80A68();
      *param_5 = (unsigned __int64)*(unsigned int *)(iVar1 + 8);
    }
  }
  return uVar2;
}

