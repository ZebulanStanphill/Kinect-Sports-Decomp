extern unsigned char fn_827C6168(int, int, int);

unsigned char fn_827C6280(int param_1)
{
  if (!fn_827C6168(param_1, 0x7f, 7)) {
    return 0;
  }
  *(int *)(param_1 + 8) = 0;
  *(int *)(param_1 + 0xc) = 0;
  return 1;
}
