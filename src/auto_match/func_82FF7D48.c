extern int fn_82FF5F30();
void fn_82FF7D48(int *param_1, unsigned int param_2)
{
  int *it; int *end; int *cur; int res;
  it = (int *)*param_1; end = (int *)param_1[1];
  if (it != end) {
    cur = it;
    do { if (*cur == param_2) break; cur = cur + 4; } while (cur != end);
    it = cur;
    if (it != end) fn_82FF5F30(&res, param_1, &it);
  }
}
