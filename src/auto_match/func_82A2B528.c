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
typedef struct { unsigned short len; unsigned short max; char *buf; } Ansi_82A2B528;
typedef struct { unsigned short len; unsigned short max; unsigned short *buf; } Uni_82A2B528;
extern int fn_82A1F2B8(char *);
extern char lbl_82196582[];

void fn_82A2B528(unsigned short *param_1)
{
  int st;
  Ansi_82A2B528 as;
  Uni_82A2B528 us;

  RtlInitUnicodeString(&us, param_1);
  st = RtlUnicodeStringToAnsiString(&as, &us, 1);
  if (st < 0) {
    as.buf = lbl_82196582;
  }
  fn_82A1F2B8(as.buf);
  if (st >= 0) {
    RtlFreeAnsiString(&as);
  }
}
