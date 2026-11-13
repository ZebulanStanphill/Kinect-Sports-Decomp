extern int fn_82297C28();
extern int fn_8265CA20();
extern unsigned int lbl_821AA8A0;


void fn_822947B8(unsigned int *param_1)

{
  *param_1 = &lbl_821AA8A0;
  if ((param_1[0x10] & 1) != 0) {
    fn_8265CA20(*(unsigned int *)param_1[4]);
  }
  *(unsigned int *)param_1[4] = 0;
  *(unsigned int *)param_1[8] = 0;
  *(unsigned int *)param_1[0xc] = 0;
  *(unsigned int *)param_1[5] = 0;
  *(unsigned int *)param_1[9] = 0;
  *(unsigned int *)param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_1[0x10] & 0xfffffffe;
  fn_82297C28(param_1);
  return;
}

