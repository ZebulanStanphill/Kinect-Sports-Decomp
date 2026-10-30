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
extern void fn_82880390(void *);
extern int fn_82881A08(int);
extern void fn_828846A0(void *, int);
extern unsigned int lbl_832129F4;
extern unsigned int lbl_83212A00[];

int fn_82884B20(void)
{
  int hr = -1;
  char buf[80];
  if (lbl_83212A00[2] < lbl_832129F4) {
    hr = fn_82881A08(-1);
    if (hr >= 0) {
      fn_82880390(buf);
      fn_828846A0(buf, hr);
    }
  }
  return hr;
}
