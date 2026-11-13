extern int fn_8265CA20();
extern unsigned int lbl_821C7E88;
extern unsigned int lbl_821C8494;


unsigned int * fn_825B5A50(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)param_1[2];
  *param_1 = &lbl_821C8494;
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
    param_1[2] = 0;
  }
  *param_1 = &lbl_821C7E88;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

