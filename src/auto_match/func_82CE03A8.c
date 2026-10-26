extern unsigned int fn_82CE0340(int which, int *a, int *b);

void fn_82CE03A8(int *out)
{
  int v[2];
  if (fn_82CE0340(2, &v[0], &v[1]) == 0) {
    *out = v[0] == 0 && v[1] == 0;
  }
}
