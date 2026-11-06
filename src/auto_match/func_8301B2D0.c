extern int fn_82FF22B8();
void fn_8301B2D0(int *param_1, unsigned int param_2)
{
  int *it; int *end; int *cur; int res;
  it = (int *)*param_1; end = (int *)param_1[1];
  if (it != end) {
    cur = it;
    do { if (*cur == param_2) break; cur = cur + 3; } while (cur != end);
    it = cur;
    if (it != end) fn_82FF22B8(&res, param_1, &it);
  }
}
