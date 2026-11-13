extern int fn_8267C8D8();
extern int fn_8267CF60();
extern int fn_8267D9C0();


unsigned int fn_8267E528(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x18;
  fn_8267C8D8(iVar2);
  if (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x14)) {
    do {
      fn_8267CF60(param_1 + 0x2c,iVar2,0xffffffffffffffff);
    } while (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x14));
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  uVar1 = *(unsigned int *)(param_1 + 0x14);
  fn_8267D9C0(iVar2);
  return uVar1;
}

