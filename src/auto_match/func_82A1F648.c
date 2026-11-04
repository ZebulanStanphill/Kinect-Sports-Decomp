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
extern unsigned int *__imp_XboxHardwareInfo;
typedef struct { unsigned short len; unsigned short max; char *buf; } Str;
extern int RtlCompareStringN(const char *, unsigned, const char *, unsigned, int);

int fn_82A1F648(Str *s)
{
  if (s->len >= 2 && RtlCompareStringN(s->buf, 2, "d:", 2, 1) == 0) return 1;
  if (s->len >= 5 && RtlCompareStringN(s->buf, 5, "game:", 5, 1) == 0) return 1;
  if ((*__imp_XboxHardwareInfo & 0x10) != 0 && s->len >= 7 &&
      RtlCompareStringN(s->buf, 7, "cdrom0:", 7, 1) == 0) return 1;
  return 0;
}
