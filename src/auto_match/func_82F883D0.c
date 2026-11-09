extern int fn_82F88248(const unsigned short *path, int oflag, int shflag, int pmode, int *pfh, int secure);

int fn_82F883D0(int *pfh, const unsigned short *path, int oflag, int shflag, int pmode)
{
  return fn_82F88248(path, oflag, shflag, pmode, pfh, 1);
}
