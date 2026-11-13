extern int fn_822315A0();
extern int fn_82517A50();
extern unsigned int iStack0000001c;


void fn_827D9BC8(__int64 param_1,int param_2)

{
  int iStack0000001c;
  
  iStack0000001c = param_2;
  fn_82517A50(param_1 + 0x2c);
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

