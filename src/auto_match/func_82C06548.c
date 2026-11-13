extern int fn_82A1F470();

unsigned int fn_82C06548(void)

{
  unsigned int uVar1;
  
  uVar1 = fn_82A1F470();
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  return uVar1;
}

