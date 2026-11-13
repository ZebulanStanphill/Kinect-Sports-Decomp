extern int fn_8267C8D8();
extern int fn_8267CF60();
extern int fn_8267D9C0();


void fn_826D63C8(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 8;
  fn_8267C8D8(iVar1);
  if (*(char *)(param_1 + 0x20) == '\0') {
    do {
      fn_8267CF60(param_1 + 0x1c,iVar1,0xffffffffffffffff);
    } while (*(char *)(param_1 + 0x20) == '\0');
  }
  fn_8267D9C0(iVar1);
  return;
}

