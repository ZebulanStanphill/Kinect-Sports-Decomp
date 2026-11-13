extern int fn_8267B890();
extern int fn_8267C4F0();
extern unsigned int lbl_82005FD0;
extern unsigned int lbl_82006020;
extern unsigned int lbl_831E7E64;


unsigned int * fn_826937E0(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = &lbl_82006020;
  puVar1 = (unsigned int *)fn_8267B890(lbl_831E7E64,8,0);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 1;
    *puVar1 = &lbl_82005FD0;
  }
  if (param_1[2] != 0) {
    fn_8267C4F0();
  }
  param_1[2] = puVar1;
  return param_1;
}

