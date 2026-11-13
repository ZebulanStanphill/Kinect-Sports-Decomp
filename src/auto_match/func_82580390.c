extern int fn_8265CA20();
extern unsigned int lbl_821AC4A4;
extern unsigned int lbl_821C558C;


unsigned int * fn_82580390(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)param_1[3];
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  param_1[1] = &lbl_821AC4A4;
  *param_1 = &lbl_821C558C;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

