extern void fn_82880390(void *);
extern int fn_82881A08(int);
extern void fn_828846A0(void *, int);
extern unsigned int lbl_832129F4;
extern unsigned int lbl_83212A00[];

int fn_82884B20(void)
{
  int hr = -1;
  char buf[80];
  if (lbl_83212A00[2] < lbl_832129F4) {
    hr = fn_82881A08(-1);
    if (hr >= 0) {
      fn_82880390(buf);
      fn_828846A0(buf, hr);
    }
  }
  return hr;
}
