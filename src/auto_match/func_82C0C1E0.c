extern int fn_8265C990();
extern int fn_82C06390();
extern int fn_82C0BB48();
extern unsigned int lbl_820ECDE0;


unsigned int * fn_82C0C1E0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820ECDE0;
  fn_82C0BB48();
  fn_82C06390(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x208c800e);
  }
  return param_1;
}

