extern char lbl_832992B8[];
extern void fn_82358FD8(void *src, unsigned short *buf, int n, const char *name);

char *fn_823AB360(void *self, void *src)
{
  unsigned short buf[0x40];
  fn_82358FD8(src, buf, 0x40, "tabletennisrallyobjective");
  return lbl_832992B8;
}
