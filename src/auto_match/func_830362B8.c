extern int fn_830360F0();
void fn_830362B8(int *param_1, unsigned int param_2)
{
  int *it; int *end; int *cur; int res;
  it = (int *)*param_1; end = (int *)param_1[1];
  if (it != end) {
    cur = it;
    do { if (*cur == param_2) break; cur = cur + 6; } while (cur != end);
    it = cur;
    if (it != end) fn_830360F0(&res, param_1, &it);
  }
}
