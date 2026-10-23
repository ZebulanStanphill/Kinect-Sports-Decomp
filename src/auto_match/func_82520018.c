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
extern void *fn_82A1E6A0(int, int, int, int);
extern int fn_82A1E7D8(void *);
extern int fn_82BFE530(unsigned int, void **);
extern unsigned int lbl_832961CC;

void *fn_82520018(void)
{
  void *p;
  void *out;
  out = 0;
  p = fn_82BFE530(lbl_832961CC, &out) >= 0 ? out : 0;
  if (p == 0) {
    p = fn_82A1E6A0(0,0,0,0);
  }
  else {
    fn_82A1E7D8(p);
  }
  return p;
}
