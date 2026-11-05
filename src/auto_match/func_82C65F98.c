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


void fn_82C65F98(signed char *p, int k)
{
  int c = p[0];
  if (c < -k) {
    p[0] = c + k * 2;
  } else if (c >= k) {
    p[0] = c - k * 2;
  }
  c = p[1];
  if (c < -k) {
    p[1] = c + k * 2;
    return;
  }
  if (c < k) {
    return;
  }
  p[1] = c - k * 2;
}
