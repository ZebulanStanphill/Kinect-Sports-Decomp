extern int fn_82C494E8();
extern int fn_82C562F0();
extern int fn_82C563B0();
extern int fn_82F68CC0();


unsigned __int64
fn_82C7BE90(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  
  if (((param_4 & 0xffffffff) != 0) || (param_5 == 0)) {
    lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6070) + 8;
    uVar1 = fn_82C562F0(lVar3,*(unsigned int *)(param_1 + 0x55f8) + param_4,0xffffffff82196582);
    if ((uVar1 & 0xffffffff) == 0) {
      return 0xfffffffffffffff7;
    }
    if (0 < *(int *)(param_1 + 0x55f8)) {
      fn_82F68CC0(uVar1,*(unsigned int *)(param_1 + 0x55fc));
      fn_82C563B0(lVar3,*(unsigned int *)(param_1 + 0x55fc));
    }
    if (*(int *)(param_1 + 0x55f8) == 0) {
      if (param_5 == 0) {
        uVar2 = 3;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 2;
      if (param_5 != 0) {
        uVar2 = 0;
      }
    }
    fn_82C494E8(param_1,param_2,param_3,param_4,uVar2);
    fn_82F68CC0(*(unsigned int *)(param_1 + 0x55f8) + uVar1,param_3,param_4);
    *(int *)(param_1 + 0x55fc) = (int)uVar1;
    *(int *)(param_1 + 0x55f8) = *(int *)(param_1 + 0x55f8) + (int)param_4;
    if (param_5 == 0) {
      fn_82C563B0(lVar3,uVar1);
      *(unsigned int *)(param_1 + 0x55f8) = 0;
      *(unsigned int *)(param_1 + 0x55fc) = 0;
    }
  }
  return 0;
}

