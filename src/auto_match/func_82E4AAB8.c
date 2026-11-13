extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64
fn_82E4AAB8(int param_1,int param_2,__int64 param_3,unsigned __int64 param_4,unsigned __int64 *param_5)

{
  unsigned __int64 uVar1;
  
  fn_82E50CB8(param_1 + 0x58);
  if (param_5 == (unsigned __int64 *)0x0) {
LAB_82e4aae8:
    uVar1 = 0xffffffff80070057;
  }
  else {
    if (*(int *)(param_1 + 0x9c) == -1) {
      uVar1 = 0xffffffffc00d36b2;
      goto LAB_82e4aaf0;
    }
    if (param_2 == 0) {
      *(__int64 *)(param_1 + 200) = param_3;
    }
    else {
      if (param_2 != 1) goto LAB_82e4aae8;
      *(__int64 *)(param_1 + 200) = *(__int64 *)(param_1 + 200) + param_3;
    }
    uVar1 = 0;
    *param_5 = *(unsigned __int64 *)(param_1 + 200);
  }
LAB_82e4aaf0:
  fn_82E50F10(param_1 + 0x58);
  return uVar1;
}

