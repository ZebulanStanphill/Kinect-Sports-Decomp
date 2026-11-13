extern int fn_82A5C208();
extern int fn_82A77458();
extern int fn_82A77490();
extern int fn_82A77C10();
extern int fn_82A783F8();
extern int fn_82A78518();
extern int fn_82A78648();
extern int fn_82A786C8();


unsigned __int64 fn_82A5B750(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  if (7 < iVar1 - 5U) {
    uVar2 = fn_82A5C208();
    return uVar2;
  }
  if (iVar1 != 6) {
    if (iVar1 == 7) {
      fn_82A77C10(*(unsigned int *)(param_1 + 0x90));
      return 0;
    }
    if (iVar1 == 8) {
      fn_82A77458(*(unsigned int *)(param_1 + 0x90));
      return 0;
    }
    if (iVar1 == 9) {
      fn_82A77490(*(unsigned int *)(param_1 + 0x90));
      return 0;
    }
    if (iVar1 == 10) {
      uVar2 = fn_82A783F8(*(unsigned int *)(param_1 + 0x90),*(unsigned int *)(param_2 + 0x10));
      return uVar2;
    }
    if (iVar1 == 0xb) {
      uVar2 = fn_82A78518(*(unsigned int *)(param_1 + 0x90),*(unsigned int *)(param_2 + 0x10));
      return uVar2;
    }
    if (iVar1 != 5) {
      uVar2 = fn_82A78648(*(unsigned int *)(param_1 + 0x90),*(unsigned int *)(param_2 + 0x10));
      return uVar2;
    }
  }
  uVar2 = fn_82A786C8(*(unsigned int *)(param_1 + 0x90),*(unsigned int *)(param_2 + 0x10));
  return uVar2;
}

