extern void XamResetInactivity(void);
extern int XamEnableInactivityProcessing(int, int);

unsigned fn_82A1F250(int enable)
{
  int hr;
  if (enable == 0) {
    XamResetInactivity();
  }
  hr = XamEnableInactivityProcessing(0, enable);
  if (hr >= 0) return 0;
  if ((hr & 0x1fff0000) == 0x70000) return hr & 0xffff;
  return 0x65b;
}
