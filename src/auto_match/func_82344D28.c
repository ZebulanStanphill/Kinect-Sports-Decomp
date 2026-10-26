extern void fn_822315A0(void *);
extern void fn_82349F18(void *);
extern void fn_8265CA20(void *);
extern char lbl_821B1A70[];
void fn_82344D28(void **param_1)
{
  *param_1 = lbl_821B1A70;
  fn_8265CA20(param_1[7]);
  if (param_1[6] != 0) {
    fn_822315A0(param_1[6]);
  }
  fn_82349F18(param_1);
}
