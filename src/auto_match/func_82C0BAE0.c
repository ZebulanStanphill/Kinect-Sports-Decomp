extern int fn_8265C990();
extern void fn_82C12D00(void *);
extern unsigned int lbl_820ECD78;


unsigned int * fn_82C0BAE0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820ECD78;
  fn_82C12D00(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x208c8037);
  }
  return param_1;
}

