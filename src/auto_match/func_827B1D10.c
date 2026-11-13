extern int fn_827B19D8();


unsigned __int64 fn_827B1D10(unsigned int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned char abStack_20 [8];
  
  if ((param_2 < -0x40) || (0x3f < param_2)) {
    abStack_20[0] = (char)param_2 << 1 | 1;
    fn_827B19D8(*param_1,abStack_20);
    abStack_20[0] = (unsigned char)(param_2 >> 7);
    fn_827B19D8(*param_1,abStack_20);
    uVar1 = 2;
  }
  else {
    abStack_20[0] = (char)param_2 << 1;
    fn_827B19D8(*param_1,abStack_20);
    uVar1 = 1;
  }
  return uVar1;
}

