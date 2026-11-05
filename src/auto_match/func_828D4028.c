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
typedef struct Obj_828D4028 { int pad; int a[4]; int b[4]; } Obj_828D4028;
extern unsigned char fn_828AD740(int);
extern unsigned char fn_828D34E0(void *, int);
extern void fn_828D38C0(void *);
extern void fn_828D3FC8(void *);

void fn_828D4028(char *p)
{
  if (fn_828AD740(*(int *)(p + 0x24)) != 0) {
    fn_828D3FC8(p + 4);
  } else {
    fn_828D3FC8(p + 4);
    if (fn_828D34E0(p, 1) == 0) {
      return;
    }
  }
  fn_828D38C0(p + 0x14);
}
