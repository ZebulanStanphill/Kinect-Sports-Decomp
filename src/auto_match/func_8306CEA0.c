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
extern unsigned char lbl_8322344C;
extern int fn_8306CD18(unsigned int, unsigned int, unsigned int *);

int fn_8306CEA0(unsigned int a, unsigned int b, unsigned int *out)
{
  int r;
  unsigned int tmp = 0;

  if (lbl_8322344C == 0) {
    r = 0x8000ffff;
  } else if (out == 0 || a == 0 || ((unsigned char)b != 1 && (unsigned char)b != 2 && (unsigned char)b != 0)) {
    r = 0x80070057;
  } else {
    r = fn_8306CD18(a, b, &tmp);
  }
  if (out != 0) {
    *out = tmp != 0 ? tmp + 8 : 0;
  }
  return r;
}
