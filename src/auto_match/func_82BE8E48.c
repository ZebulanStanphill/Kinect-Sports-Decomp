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
extern unsigned short *fn_82BE56B0(int);
extern unsigned short *lbl_8322B228;

unsigned short *fn_82BE8E48(void)
{
  unsigned short *p;
  if (lbl_8322B228 == 0) {
    p = fn_82BE56B0(8);
    if (p != 0) {
      *p = 0;
    } else {
      p = 0;
    }
    lbl_8322B228 = p;
    return p;
  }
  return lbl_8322B228;
}
