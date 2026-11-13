extern int fn_822315A0();
extern int fn_8265C9E0();
extern unsigned int lbl_821B65AC;


unsigned int * fn_823D5B10(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *mem;
  
  *param_1 = 0;
  param_1[1] = 0;
  mem = (unsigned int *)fn_8265C9E0(0x10);
  if (mem != 0) {
    mem[3] = 0;
    mem[1] = 1;
    *mem = &lbl_821B65AC;
    mem[2] = 1;
    puVar1 = mem;
  } else puVar1 = 0;
  if (param_1[1] != 0) {
    fn_822315A0(param_1[1]);
  }
  param_1[1] = puVar1;
  *param_1 = 0;
  return param_1;
}

