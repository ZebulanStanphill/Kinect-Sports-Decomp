extern int fn_82818BC8();
extern int fn_8281C4B0();


void fn_82819430(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    fn_8281C4B0(0xffffffff8201e798,param_1);
  }
  fn_82818BC8(param_1);
  if ((*(unsigned int *)(param_1 + 0xc) & 0x10) != 0) {
    fn_8281C4B0(0xffffffff8201e7e8,param_1);
  }
  return;
}

