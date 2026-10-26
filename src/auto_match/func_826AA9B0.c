extern void fn_8267C488(void *);
extern void fn_8267C4F0(void *);
extern void fn_826A27D8(void *);
extern char lbl_8200730C[];
void fn_826AA9B0(void **param_1)
{
  *param_1 = lbl_8200730C;
  fn_826A27D8(param_1 + 3);
  if (param_1[2] != 0) {
    fn_8267C4F0(param_1[2]);
  }
  fn_8267C488(param_1);
}
