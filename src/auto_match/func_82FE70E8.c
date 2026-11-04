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
extern int fn_8300F120(unsigned int);
extern int fn_8300F208(unsigned int, void *, unsigned short);
extern unsigned int lbl_832642E4;

typedef struct { unsigned short a; unsigned short b; unsigned int c; unsigned char pad[0x28]; } Msg_82FE70E8;

int fn_82FE70E8(unsigned int param_1)
{
  Msg_82FE70E8 m;

  if (param_1 == 0) {
    return 2;
  }
  m.b = 7;
  m.c = param_1;
  return fn_8300F208(lbl_832642E4, &m, fn_8300F120(param_1));
}
