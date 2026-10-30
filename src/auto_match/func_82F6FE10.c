extern int fn_8306C468(const char *path, int b);
extern unsigned long fn_82A1F470(void);
extern void fn_82F682B0(unsigned long err);

int fn_82F6FE10(const char *path)
{
  unsigned long err;
  if (!fn_8306C468(path, 0))
    err = fn_82A1F470();
  else
    err = 0;
  if (err) {
    fn_82F682B0(err);
    return -1;
  }
  return 0;
}
