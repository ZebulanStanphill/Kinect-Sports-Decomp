extern int fn_82A2B760();
extern unsigned int lbl_8315D3D0;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64
fn_82A2A108(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned int *param_5)

{
  unsigned __int64 uVar1;
  int iVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  struct { unsigned int first; unsigned int second; } stack_pair_38;


  if (param_4 != (unsigned int *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (unsigned int *)0x0) {
    stack_pair_38.second = param_5[2];
    stack_pair_38.first = param_5[3];
    *param_5 = 0x103;
    uVar1 = (**(int (***)())(lbl_8315D3D0 + 0x10))
                      (param_1,param_5[4],0,-(unsigned int)((param_5[4] & 1) == 0) & (unsigned int)param_5,param_5,
                       param_2,param_3,&stack_pair_38.first);
    iVar2 = (int)uVar1;
    if ((-1 < iVar2) && (iVar2 != 0x103)) {
      if (param_4 != (unsigned int *)0x0) {
        *param_4 = param_5[1];
      }
      return 1;
    }
    if ((iVar2 == -0x3fffffef) && (uVar1 = 0xffffffffc0000011, param_4 != (unsigned int *)0x0)) {
      *param_4 = 0;
    }
    goto LAB_82a2a274;
  }
  uVar1 = (**(int (***)())(lbl_8315D3D0 + 0x10))(param_1,0,0,0,&stack_pair_40.first,param_2,param_3,0);
  if ((int)uVar1 == 0x103) {
    uVar1 = NtWaitForSingleObjectEx(param_1,1,0,0);
    if (-1 < (int)uVar1) {
      uVar1 = (unsigned __int64)stack_pair_40.first;
      goto LAB_82a2a228;
    }
  }
  else {
LAB_82a2a228:
    if (-1 < (int)uVar1) {
      *param_4 = stack_pair_40.second;
      return 1;
    }
  }
  if ((int)uVar1 == -0x3fffffef) {
    *param_4 = 0;
    return 1;
  }
  if ((uVar1 & 0xc0000000) == 0x80000000) {
    *param_4 = stack_pair_40.second;
  }
LAB_82a2a274:
  fn_82A2B760(uVar1);
  return 0;
}
