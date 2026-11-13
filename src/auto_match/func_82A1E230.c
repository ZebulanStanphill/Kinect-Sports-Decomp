extern int ExGetXConfigSetting(int, int, void *, int, unsigned short *);
extern unsigned int XGetGameRegion(void);

int fn_82A1E230(void)
{
  unsigned short size;
  unsigned int val;
  int hr;
  unsigned int region;
  unsigned int r;
  size = 0;
  hr = ExGetXConfigSetting(3, 9, &val, 4, &size);
  val = (hr >= 0) ? val : 0;
  r = val;
  if (r == 0 || r > 0xc) {
    region = XGetGameRegion();
    if ((region & 0xff00) == 0x100) {
      if (region == 0x101) {
        return 2;
      }
      return 7;
    }
    return 1;
  }
  return r;
}
