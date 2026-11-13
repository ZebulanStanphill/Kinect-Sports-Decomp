extern int fn_8265CA20();
extern int fn_82893C48();
extern int fn_828AA8F8();
extern unsigned int lbl_820244C8;


unsigned int * fn_828AAC68(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820244C8;
  fn_828AA8F8();
  fn_82893C48(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

