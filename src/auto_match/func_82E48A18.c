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
extern int fn_82E47918();
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

typedef struct { short type; short pad[3]; double value; } Entry_82E48A18;

int fn_82E48A18(char *param_2, int param_3, double param_1)

{
  Entry_82E48A18 *e;
  int r;

  RtlEnterCriticalSection(param_2 + 4);
  e = (Entry_82E48A18 *)fn_82E47918(param_2, param_3);
  r = 0;
  if (e == 0) {
    r = 0x8007000e;
  }
  else {
    e->value = param_1;
    e->type = 5;
  }
  RtlLeaveCriticalSection(param_2 + 4);
  return r;
}
