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
extern int fn_82F70238(unsigned short *, unsigned int);


int fn_82E49B68(unsigned short *dst, unsigned int n)
{
  unsigned short zero = 0;
  int hr = zero;
  unsigned int m;
  unsigned int len;
  if (n == 0) {
    hr = 0x80070057;
  } else {
    m = n - 1;
    len = fn_82F70238(dst, m);
    if (((int)len < 0) || (m < len)) {
      hr = 0x8007007a;
      dst[m] = zero;
    } else if (len == m) {
      dst[m] = zero;
    }
  }
  return hr;
}
