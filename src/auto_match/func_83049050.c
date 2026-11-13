extern int fn_82FA52E0();
extern int fn_8304D648();
extern int fn_8307DE78();
extern int fn_8307E5A8();
extern int fn_8307E6E0();
extern unsigned int lbl_831BC770;


void fn_83049050(int *param_1)

{
  (**(int (***)())(*param_1 + 8))();
  if (param_1[10] != 0) {
    fn_8307DE78(param_1[10]);
    fn_8307E6E0(param_1[10]);
    fn_8307E5A8(param_1[10]);
    param_1[10] = 0;
  }
  if (param_1[0xe] != 0) {
    fn_82FA52E0(lbl_831BC770);
    param_1[0xe] = 0;
  }
  fn_8304D648(param_1);
  return;
}
