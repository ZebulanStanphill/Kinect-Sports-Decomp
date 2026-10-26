extern void fn_822315A0(void *);
extern int fn_827D50B8(void *);
extern void fn_82A1E810(int);
extern int lbl_8326F874;
void fn_825B7728(void **param_1)
{
  if (fn_827D50B8(*param_1) == 0) {
    fn_82A1E810(lbl_8326F874);
  }
  if (param_1[1] != 0) {
    fn_822315A0(param_1[1]);
  }
}
