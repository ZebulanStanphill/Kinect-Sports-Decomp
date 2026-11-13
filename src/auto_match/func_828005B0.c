extern int fn_82817C98();
extern int fn_828182C0();

int fn_828005B0(void ***param_1, int param_2, int param_3, int param_4)
{
  void *out;

  if (*param_1 != 0 && (*param_1)[param_2 + 0xe] != 0) {
    fn_828182C0((*param_1)[param_2 + 0xe], param_3, 0, &out);
    if (out != 0) {
      fn_82817C98(out, param_4);
      return 1;
    }
  }
  return 0;
}
