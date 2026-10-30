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


typedef struct Sub_82D49AC0 {
  char pad[8]; int *f8; char pad1[0x14 - 0xc]; int *f14; int f18; char pad2[0x24 - 0x1c]; int f24;
} Sub_82D49AC0;
typedef struct Obj_82D49AC0 { char pad[0x18]; Sub_82D49AC0 *f18; } Obj_82D49AC0;
typedef struct Stats_82D49AC0 { int sum; int cnt; float avg; int max; } Stats_82D49AC0;

void fn_82D49AC0(Obj_82D49AC0 *o, Stats_82D49AC0 *s)
{
  int i = 0;
  int v;
  int n;

  s->sum = o->f18->f24 + s->sum;
  s->cnt = o->f18->f24 + s->cnt;
  n = o->f18->f18;
  while (i < n) {
    v = o->f18->f8[o->f18->f14[i]];
    s->sum += v;
    s->max = s->max > v ? s->max : v;
    i++;
    n = o->f18->f18;
  }
  s->cnt += n;
  s->avg = (float)s->sum / (float)s->cnt;
}
