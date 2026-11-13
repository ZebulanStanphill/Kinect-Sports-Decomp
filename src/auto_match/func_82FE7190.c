extern int fn_82FF85F0(void *p, float value, char level);
extern char *lbl_832642F0;

int fn_82FE7190(float value, char level)
{
  int result = 2;

  if (lbl_832642F0 != 0) {
    result = fn_82FF85F0(lbl_832642F0 + 4, value, level);
  }
  return result;
}
