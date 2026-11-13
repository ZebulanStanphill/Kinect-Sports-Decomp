extern int fn_83057318();
extern int fn_8305B1F8();
extern int fn_8305B968();
extern int fn_8305BB70();


void fn_830587D8(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
  if (uVar1 != 0) {
    fn_8305B968(uVar1 + 0xc);
    fn_8305BB70(uVar1);
    fn_83057318(uVar1);
  }
  fn_8305B1F8(param_1);
  return;
}

