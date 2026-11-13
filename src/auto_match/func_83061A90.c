extern int fn_83061548();
extern int fn_830619F8();
extern int fn_83065BA8();


void fn_83061A90(unsigned int *param_1)

{
  fn_83061548(param_1,0);
  if ((*(char *)(param_1 + 9) == '\0') && (*param_1 != 0)) {
    fn_83065BA8(*param_1);
  }
  fn_830619F8(param_1);
  return;
}

