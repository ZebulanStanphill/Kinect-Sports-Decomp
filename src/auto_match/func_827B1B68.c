extern int fn_827B19D8();


unsigned int fn_827B1B68(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned char abStack_20 [1];
  
  if ((param_2 & 0xffffffff) <= 0x7f) {
    abStack_20[0] = (unsigned char)((param_2 & 0x7f) << 1);
    fn_827B19D8(*param_1,abStack_20);
    uVar1 = 1;
  }
  else {
    abStack_20[0] = (unsigned char)((param_2 & 0x7f) << 1) | 1;
    fn_827B19D8(*param_1,abStack_20);
    abStack_20[0] = (unsigned char)((param_2 & 0xffffffff) >> 7);
    fn_827B19D8(*param_1,abStack_20);
    uVar1 = 2;
  }
  return uVar1;
}

