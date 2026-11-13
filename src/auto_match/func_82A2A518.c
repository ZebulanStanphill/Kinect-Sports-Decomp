extern int fn_82A2B760();


int fn_82A2A518(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int uVar1;
  
  if (((param_3 & 0x8000) == 0) || (param_2 == 0)) {
    uVar1 = NtFreeVirtualMemory(&param_1,&param_2,param_3,0);
    if (uVar1 >= 0) {
      return 1;
    }
  }
  else {
    uVar1 = 0xc000000d;
  }
  fn_82A2B760(uVar1);
  return 0;
}

