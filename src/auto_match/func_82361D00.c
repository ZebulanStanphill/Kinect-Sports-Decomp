extern int fn_8227AD00();
extern int fn_82A1EFC0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AC05C;


unsigned int *
fn_82361D00(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned int *param_5,unsigned int *param_6)

{
  unsigned int *puVar1;
  
  param_1[1] = 1;
  *param_1 = &lbl_821A8D8C;
  puVar1 = param_1 + 4;
  param_1[2] = 1;
  if (puVar1 != (unsigned int *)0x0) {
    fn_8227AD00(puVar1,param_3,*param_4,*param_5,*param_2,0,1,*param_6);
    param_1[0x802] = 1;
    *puVar1 = &lbl_821AC05C;
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(param_1 + 0x466,0,0xe70);
  }
  return param_1;
}

