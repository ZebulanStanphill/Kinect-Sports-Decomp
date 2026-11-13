extern int fn_822315A0();
extern int fn_8265C9E0();
extern unsigned int lbl_8202678C;


unsigned int * fn_828BAB20(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = (unsigned int *)fn_8265C9E0(0x10);
  puVar2 = (unsigned int *)0x0;
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[3] = param_2;
    puVar1[1] = 1;
    *puVar1 = &lbl_8202678C;
    puVar1[2] = 1;
    puVar2 = puVar1;
  }
  if (param_1[1] != 0) {
    fn_822315A0(param_1[1]);
  }
  param_1[1] = puVar2;
  *param_1 = param_2;
  return param_1;
}

