extern int *_errno(void);

int fn_826E96C8(void)
{
  if (*_errno() == 2) {
    return 0x1001;
  }
  if (*_errno() == 0xd || *_errno() == 1) {
    return 0x1002;
  }
  return (*_errno() == 0x1c) + 0x1003;
}
