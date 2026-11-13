extern int fn_8239E110();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;


unsigned int * fn_8239CE10(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x2f0);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 1;
    *puVar1 = &lbl_821A8D8C;
    puVar1[2] = 1;
    if (puVar1 + 4 != (unsigned int *)0x0) {
      fn_8239E110(puVar1 + 4,param_2,param_3,*(unsigned int *)(param_2 + 0x84c),
                      *(unsigned int *)(param_2 + 0x850),*(unsigned int *)(param_2 + 0x854),
                      *(unsigned int *)(param_2 + 0x858),*(unsigned int *)(param_2 + 0x85c));
    }
  }
  param_1[1] = puVar1;
  *param_1 = puVar1 + 4;
  return param_1;
}

