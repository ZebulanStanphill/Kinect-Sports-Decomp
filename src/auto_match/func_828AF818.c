extern void fn_8265CA20(void *);
extern void fn_8289FB00(void *, void *);
extern void fn_8289FB58(void *);
extern void fn_828CA5B0(void *, void *);
extern void *fn_828CB310(void);
extern unsigned int lbl_82024C08;

void fn_828AF818(void **param_1)
{
  *param_1 = &lbl_82024C08;
  fn_828CA5B0(fn_828CB310(), param_1);
  fn_8289FB00(param_1[0x14], param_1);
  if (param_1[0x27] != 0) {
    fn_8265CA20(param_1[0x27]);
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  fn_8289FB58(param_1);
}
