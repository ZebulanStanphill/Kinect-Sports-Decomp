extern int fn_82839358();
extern int fn_82839E88();
extern int fn_8283CAD8();
extern unsigned int uStack0000001c;


void fn_8283F728(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int *puStack00000014;
  unsigned int uStack0000001c;
  
  uVar1 = *param_1;
  puStack00000014 = param_1;
  uStack0000001c = param_2;
  if (uVar1 == 0) {
    fn_82839358(param_2);
  }
  else if (uVar1 == 1) {
    fn_8283CAD8(param_2);
  }
  else if (uVar1 < 3) {
    fn_82839358(param_2);
  }
  else if (uVar1 == 3) {
    fn_82839E88(param_2);
  }
  return;
}

