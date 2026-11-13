extern int fn_8265C9E0();
extern int fn_828A82B8();
extern unsigned int lbl_821968A8;


unsigned int * fn_825162B8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x308);
  if (puVar1 != (unsigned int *)0x0) {
    fn_828A82B8(puVar1,param_1,param_2,param_3);
    *puVar1 = &lbl_821968A8;
    return puVar1;
  }
  return 0;
}

