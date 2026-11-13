extern int fn_8267C8D8();
extern int fn_8267CF60();
extern int fn_8267D9C0();


unsigned char fn_8267E2B0(int param_1,unsigned __int64 param_2)

{
  unsigned char uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x14;
  fn_8267C8D8(iVar2);
  if (((param_2 & 0xffffffff) != 0) && (*(char *)(param_1 + 0x10) == '\0')) {
    if ((int)param_2 == -1) {
      do {
        fn_8267CF60(param_1 + 0x28,iVar2,0xffffffffffffffff);
      } while (*(char *)(param_1 + 0x10) == '\0');
    }
    else {
      fn_8267CF60(param_1 + 0x28,iVar2,param_2);
    }
  }
  uVar1 = *(unsigned char *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(unsigned char *)(param_1 + 0x11) = 0;
    *(unsigned char *)(param_1 + 0x10) = 0;
  }
  fn_8267D9C0(iVar2);
  return uVar1;
}

