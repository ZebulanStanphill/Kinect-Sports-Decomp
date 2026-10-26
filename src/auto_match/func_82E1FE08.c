extern int fn_82E1F980(void);
extern void fn_82E1FA90(int *p, int hr);
extern void fn_82E1FC40(int *p, int hr);

void fn_82E1FE08(int *p)
{
  int hr;

  *p = 0;
  hr = fn_82E1F980();
  if (hr < 0) {
    fn_82E1FC40(p, hr);
  } else {
    fn_82E1FA90(p, hr);
  }
}
