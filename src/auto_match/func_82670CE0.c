extern int fn_822315A0();
extern int fn_8256E1D8();
extern int fn_8265C9E0();
extern unsigned int lbl_82002C4C;


void fn_82670CE0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x14);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[3] = (int)param_2;
    puVar1[1] = 1;
    *puVar1 = &lbl_82002C4C;
    puVar1[2] = 1;
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  param_1[1] = puVar1;
  *param_1 = (int)param_2;
  if ((param_2 & 0xffffffff) != 0) {
    fn_8256E1D8(param_2 + 4,param_2,puVar1);
  }
  return;
}

