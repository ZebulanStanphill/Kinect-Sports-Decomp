extern int fn_82359C18();
extern int fn_8265CA20();
extern unsigned int lbl_821C0648;


unsigned int * fn_824C2AA8(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  fn_82359C18(param_1 + 4);
  puVar1 = (unsigned int *)param_1[2];
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  *param_1 = &lbl_821C0648;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

