extern int fn_82A49BE0();
extern int fn_82A59718();
extern int fn_82A598F0();
extern int fn_82A761A0();
extern int fn_82A773C0();
extern int fn_82A77860();
extern int fn_82A81840();


unsigned __int64
fn_82A78340(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5
             )

{
  unsigned __int64 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (((int)param_3 == 0) || (uVar1 = fn_82A81840(param_1,param_3), -1 < (int)uVar1)) {
    if ((param_4 & 0xffffffff) != 0) {
      uVar1 = fn_82A773C0(param_1,param_4);
    }
    if (-1 < (int)uVar1) {
      iVar2 = fn_82A49BE0(param_2);
      *(int *)(param_1 + 0x78) = iVar2;
      if (iVar2 != 0) {
        uVar1 = fn_82A59718(*(unsigned int *)(param_1 + 4),param_5);
        iVar2 = fn_82A598F0(param_1 + 0x38,uVar1);
        if (iVar2 != 0) {
          fn_82A761A0(uVar1);
          uVar1 = fn_82A77860(param_1);
          return uVar1;
        }
      }
      uVar1 = 0xffffffff8007000e;
    }
  }
  return uVar1;
}

