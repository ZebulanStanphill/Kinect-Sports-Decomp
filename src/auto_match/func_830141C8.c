extern int fn_83013C30();
void fn_830141C8(int *param_1, unsigned int param_2)
{
  int *it; int *end; int *cur; int res;
  it = (int *)*param_1; end = (int *)param_1[1];
  if (it != end) {
    cur = it;
    do { if (*cur == param_2) break; cur = cur + 10; } while (cur != end);
    it = cur;
    if (it != end) fn_83013C30(&res, param_1, &it);
  }
}
