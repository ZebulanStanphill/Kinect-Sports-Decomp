extern int fn_8281C448();


void fn_82818738(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned char *param_4)

{
  if ((param_4 != (unsigned char *)0x0) && (*(int *)(param_4 + 0xc) != 0)) {
    fn_8281C448(0xffffffff8201e658,*(unsigned int *)(param_4 + 8));
  }
  fn_8281C448(0xffffffff8201e664,param_2,param_1,param_3);
  if (param_4 != (unsigned char *)0x0) {
    fn_8281C448(0xffffffff8201e678,*(unsigned int *)(param_4 + 4));
    fn_8281C448(0xffffffff8201e67c,*param_4,param_4[1],param_4[2],param_4[3]);
    fn_8281C448(0xffffffff8201e690,*(unsigned int *)(param_4 + 0x10));
  }
  fn_8281C448(0xffffffff8201e694);
  return;
}

