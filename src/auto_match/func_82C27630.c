extern int fn_82C10A40(int, const char *);
extern int fn_82C1DA78();
extern int fn_82C1E4A8();
extern int fn_82C1E668();
extern int fn_82C24370();
extern int fn_82C245B0();
extern int fn_82C24748();
extern int fn_82C270E0();

int fn_82C27630(int *p, void *unused, void **t)
{
  int r;
  if (*p == 1 || fn_82C10A40(p[1], "asf") != 0 || fn_82C10A40(p[1], "wmv") != 0 ||
      fn_82C10A40(p[1], "wma") != 0) {
    r = 0;
    t[1] = (void *)fn_82C1DA78;
    t[0] = (void *)fn_82C24370;
    t[2] = (void *)fn_82C270E0;
    t[3] = (void *)fn_82C245B0;
    t[4] = (void *)fn_82C24748;
    t[5] = (void *)fn_82C1E4A8;
    t[6] = (void *)fn_82C1E668;
    t[7] = 0;
  } else {
    r = 0x80500003;
  }
  return r;
}
