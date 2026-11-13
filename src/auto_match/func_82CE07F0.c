extern int NetDll_WSAStartup(int, int, int);
extern unsigned int XamGetSystemVersion(void);
extern int XexGetModuleHandle(const char *, unsigned int *);
extern int XexGetProcedureAddress(unsigned int, unsigned int, unsigned int *);

void fn_82CE07F0(int param_1, int param_2, int param_3)
{
  unsigned int fp;
  unsigned int mod;
  unsigned int ver;
  int hr;

  fp = 0;
  ver = XamGetSystemVersion();
  if (ver >= 0x200a3200 && (hr = XexGetModuleHandle("xam.xex", &mod)) >= 0) {
    hr = XexGetProcedureAddress(mod, 0x24, &fp);
    fp = (((unsigned int)hr >> 0x1f) - 1) & fp;
  }
  if (fp != 0) {
    ((int (*)(int, int, int, unsigned int))fp)(param_1, param_2, param_3, 0x202dff03);
  } else {
    NetDll_WSAStartup(param_1, param_2, param_3);
  }
}
