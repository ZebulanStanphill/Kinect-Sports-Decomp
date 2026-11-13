extern int fn_82E50F00();
extern int fn_82E51028();


int fn_82E52208(int param_1, int *param_2)
{
  int hr;
  unsigned int i;
  int off;
  int a;

  fn_82E50F00(param_1 + 4, 1);
  hr = (*(int (**)())(*param_2 + 0x50))(param_2);
  if (hr >= 0 && (i = 0, *(unsigned int *)(param_1 + 0x48) > 0)) {
    off = 0;
    do {
      a = *(int *)(param_1 + 0x40) + off;
      hr = (*(int (**)())(*param_2 + 0x48))(param_2, a, a + 0x10);
      if (hr < 0) break;
      i++;
      off += 0x20;
    } while (i < *(unsigned int *)(param_1 + 0x48));
  }
  fn_82E51028(param_1 + 4, 1);
  return hr;
}
