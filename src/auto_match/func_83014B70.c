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
extern unsigned fn_82FA5060(unsigned, int);
extern unsigned fn_83014568(unsigned, int, int);
extern void fn_83015E68(int, unsigned);
extern unsigned lbl_831BC768;
extern int lbl_832642E0;

unsigned fn_83014B70(int a, int b)
{
  unsigned h = fn_82FA5060(lbl_831BC768, 0x80);
  unsigned o;
  if (h != 0) {
    o = fn_83014568(h, a, b);
    if (o != 0) fn_83015E68(lbl_832642E0 + 0x1304, o);
  } else {
    o = 0;
  }
  return o;
}
