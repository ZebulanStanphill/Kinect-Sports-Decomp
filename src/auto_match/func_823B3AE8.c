extern int fn_8265C9E0();
extern unsigned int lbl_821B5A7C;
extern unsigned int lbl_821B5A8C;


unsigned int * fn_823B3AE8(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 1;
    puVar1[2] = 1;
    *puVar1 = &lbl_821B5A7C;
    if (puVar1 + 3 != (unsigned int *)0x0) {
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
  }
  param_1[1] = puVar1;
  *param_1 = puVar1 + 3;
  puVar1 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 1;
    puVar1[2] = 1;
    *puVar1 = &lbl_821B5A8C;
    if (puVar1 + 3 != (unsigned int *)0x0) {
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
  }
  param_1[3] = puVar1;
  param_1[2] = puVar1 + 3;
  return param_1;
}

