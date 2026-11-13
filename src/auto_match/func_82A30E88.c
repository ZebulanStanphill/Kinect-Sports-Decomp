extern int fn_82A30A08();
extern int memset();


unsigned __int64 fn_82A30E88(int param_1)

{
  unsigned __int64 uVar1;
  int in_r8;
  unsigned int uVar2;

  if (*(char *)(param_1 + 0xce) == '\0') {
    return 0xffffffffc00002ea;
  }
  uVar2 = *(unsigned int *)(in_r8 + 0x44);
  if (uVar2 == 0xffffffff) {
    uVar2 = *(unsigned int *)(param_1 + 0x54);
    uVar1 = fn_82A30A08(param_1,param_1 + 0x38,(unsigned __int64)uVar2 + 0x1000,0);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  else if (0x3fff80 < uVar2) {
    return 0xffffffffc00002ea;
  }
  *(unsigned int *)(in_r8 + 0x40) = uVar2;
                    /* WARNING: Subroutine does not return */
  memset(in_r8,0,0x40);
}
