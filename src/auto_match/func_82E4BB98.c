extern int fn_82F65350();

void fn_82E4BB98(int unused, char *buf, int *pos)
{
  int i;
  int n = fn_82F65350() & 3;
  for (i = 0; i < n; i++) {
    buf[*pos + i] = 0;
  }
  *pos += n;
}
