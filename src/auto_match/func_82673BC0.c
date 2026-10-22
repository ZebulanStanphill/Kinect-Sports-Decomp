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
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

typedef struct Pair {
  int first;
  unsigned int second;
} Pair;

typedef struct Vec {
  Pair *begin;
  Pair *end;
} Vec;

typedef struct Mgr {
  char pad[0x24];
  Vec v;
  char pad2[0x140 - 0x2c];
  char cs[0x1c];
} Mgr;

extern void fn_826738F0(Vec *v, Pair *p);

int fn_82673BC0(Mgr *param_1, int param_2, unsigned int param_3)
{
  void *cs;
  Pair *it;
  Pair p;

  cs = param_1->cs;
  if (cs != 0) {
    RtlEnterCriticalSection(cs);
  }
  for (it = param_1->v.begin; it != param_1->v.end; it++) {
    if (it->second == param_3) {
      if (cs != 0) {
        RtlLeaveCriticalSection(cs);
      }
      return 0;
    }
  }
  p.first = param_2;
  p.second = param_3;
  fn_826738F0(&param_1->v, &p);
  if (cs != 0) {
    RtlLeaveCriticalSection(cs);
  }
  return 1;
}
