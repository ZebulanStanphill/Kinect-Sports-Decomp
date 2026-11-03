extern int XexGetProcedureAddress(int, int, unsigned *);
extern void fn_82A31F28(int);

unsigned fn_82A1F380(int param_1, int param_2)
{
  int hr;
  unsigned addr;
  hr = XexGetProcedureAddress(param_1, param_2, &addr);
  if (hr >= 0) {
    if (addr == *(unsigned *)(param_1 + 0x18)) {
      addr = 0;
      hr = 0xc0000263;
    }
  }
  if (hr < 0) {
    fn_82A31F28(hr);
    return 0;
  }
  return addr;
}
