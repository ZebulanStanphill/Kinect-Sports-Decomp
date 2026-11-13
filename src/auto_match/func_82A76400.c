extern int fn_82A4F4E0();
extern int fn_82A761F8();


void fn_82A76400(unsigned int *param_1)

{
  (*(int (**)())(*param_1 + 8))();
  param_1[10] = 1;
  if (param_1[9] == 0) {
    fn_82A761F8(param_1);
    fn_82A4F4E0(param_1);
  }
  else {
    (*(int (**)())(*param_1 + 0x14))(param_1);
  }
  return;
}

