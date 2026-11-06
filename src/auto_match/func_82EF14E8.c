extern int fn_82EF1198(int, unsigned *, int *, char *);
int fn_82EF14E8(int self, unsigned key, int *out)
{
  int v;
  char tmp[8];
  v = 0;
  if (key != 0 && out != 0) {
    if (fn_82EF1198(self + 0x94, &key, &v, tmp) != 0) { *out = v; return 0; }
    return 1;
  }
  return 0x80070057;
}
