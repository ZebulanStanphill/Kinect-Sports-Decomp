extern int fn_82A1BFA8();


unsigned int  fn_82E1F980(void)

{
  int iVar1;
  unsigned int uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = fn_82A1BFA8(uVar2);
    if (iVar1 != 0) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((uVar2 & 0xffffffff) < 4);
  return 0xffffffffffffffff;
}

