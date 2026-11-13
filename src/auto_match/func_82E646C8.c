extern int fn_82E64618();


unsigned int  fn_82E646C8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int auStack_20 [4];
  
  auStack_20[0] = 0;
  if (param_1 == (unsigned int *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar1 = fn_82E64618(auStack_20);
    if ((int)uVar1 >= 0) {
      *param_1 = auStack_20[0];
    }
  }
  return uVar1;
}

