extern int fn_82B7BEB0();
extern unsigned int lbl_820E0214;


int fn_82BB6528(unsigned int param_1,unsigned int param_2)

{
  *(unsigned char ***)(param_1 + 0x14) = &lbl_820E0214;
  *(unsigned char ***)(param_1 + 8) = &lbl_820E0214;
  if (((param_2 & 1) != 0) && (param_1 > 0)) {
    fn_82B7BEB0(*(unsigned int *)(param_1 + -4),param_1 + -4);
  }
  return param_1;
}

