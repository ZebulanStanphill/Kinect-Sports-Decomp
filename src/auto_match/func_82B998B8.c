extern void fn_8265CA20(void *);
extern void fn_82B8F6A0(void *);
extern void fn_82B98348(void *);
extern char lbl_820DC948[];
void fn_82B998B8(void **param_1)
{
  *param_1 = lbl_820DC948;
  fn_82B98348(param_1);
  if (param_1[0x20] != 0) {
    fn_8265CA20(param_1[0x20]);
  }
  fn_82B8F6A0(param_1);
}
