extern int fn_829AB0F0();


unsigned int  fn_829B9AF0(unsigned __int64 param_1,unsigned char *param_2)

{
  unsigned int uVar1;
  
  uVar1 = (((unsigned __int64)*param_2 * 0x100 + (unsigned __int64)param_2[1]) * 0x100 + (unsigned __int64)param_2[2]) *
          0x100 + (unsigned __int64)param_2[3];
  if (0x7fffffff < uVar1) {
    fn_829AB0F0(param_1,"PNG unsigned integer out of range.\n");
  }
  return uVar1;
}

