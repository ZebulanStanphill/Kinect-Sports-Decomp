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
typedef struct { char pad[0x18]; int (*f18)(int, void *); } DM;
extern DM **__imp_KeDebugMonitorData;
extern void fn_826518D0(void);
extern void fn_82652640(void);
typedef struct { void *fn; int arg; } Rec;
void fn_82652910(int param_1)
{
  Rec r;
  DM *d;
  d = *__imp_KeDebugMonitorData;
  if (d != 0) {
    d->f18(0x1c, 0);
  }
  r.fn = (void *)fn_826518D0;
  r.arg = param_1;
  d = *__imp_KeDebugMonitorData;
  if (d != 0) {
    d->f18(0x41, &r);
  }
  d = *__imp_KeDebugMonitorData;
  if (d != 0) {
    d->f18(0x5a, (void *)fn_82652640);
  }
}
