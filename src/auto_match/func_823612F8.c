extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B9BC8;


unsigned int * fn_823612F8(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 1;
    *puVar1 = &lbl_821AD588;
    puVar1[2] = 1;
    if (puVar1 + 3 != (unsigned int *)0x0) {
      puVar1[4] = param_3;
      puVar1[3] = &lbl_821B9BC8;
      puVar1[6] = 0;
    }
  }
  param_1[1] = puVar1;
  *param_1 = puVar1 + 3;
  return param_1;
}

