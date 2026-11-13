extern int fn_82FFE0F0();


unsigned int fn_82FFA230(__int64 param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82FFE0F0(param_1 + 0x41c);
  if (puVar1 != (unsigned int *)0x0) {
    return *puVar1;
  }
  return 0;
}

