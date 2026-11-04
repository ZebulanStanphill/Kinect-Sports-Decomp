typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
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
