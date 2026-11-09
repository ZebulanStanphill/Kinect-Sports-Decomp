extern int fn_82F83F78(const char *path, int oflag, int shflag, int pmode, int *pfh, int secure);

int fn_82F84100(int *pfh, const char *path, int oflag, int shflag, int pmode)
{
  return fn_82F83F78(path, oflag, shflag, pmode, pfh, 1);
}
