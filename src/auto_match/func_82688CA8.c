extern int fn_8267B890();
extern unsigned int lbl_82005BAC;
extern unsigned int lbl_831E7E64;


unsigned int * fn_82688CA8(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *allocated;

  
  param_1[1] = 1;
  *param_1 = &lbl_82005BAC;
  param_1[2] = 0x13;
  allocated = (unsigned int *)fn_8267B890(lbl_831E7E64,0xc,0);
  if (allocated != 0) {
    puVar1 = allocated;
    allocated[0] = 0;
    allocated[1] = 0;
    allocated[2] = 0;
  } else { puVar1 = 0; }
  param_1[3] = puVar1;
  return param_1;
}

