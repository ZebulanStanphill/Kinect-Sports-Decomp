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
typedef struct { __int64 start; double scale; __int64 now; __int64 off; char pad[0x1c]; int flag; } Timer_829F9818;
extern void fn_82A1E968(__int64 *);

double fn_829F9818(Timer_829F9818 *p, int n)
{
  __int64 t;
  if (p->flag == 0) {
    fn_82A1E968(&t);
    return (double)((t - p->off) - p->start) * p->scale * (double)(__int64)n;
  }
  return (double)((p->now - p->off) - p->start) * p->scale * (double)(__int64)n;
}
