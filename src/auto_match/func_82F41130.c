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
//BODY
extern int fn_82F41C68(void *, int, int, void *);
extern char lbl_820E975C[];

int fn_82F41130(int unused, unsigned int a, int *b, unsigned int c, unsigned int d, int e, void *f, int *g)
{
  int hr = 0;
  if (a == 0 || b == 0 || c == 0 || f == 0 || g == 0) {
    hr = 0x8000ffff;
  } else if (*b == 1 && d == 0) {
    hr = fn_82F41C68(lbl_820E975C, 2, e, f);
    if (hr >= 0) {
      *g = 1;
    }
  }
  return hr;
}
