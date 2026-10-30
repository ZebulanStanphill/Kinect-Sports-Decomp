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
extern int fn_826DBE10(void *, void *, void *, unsigned);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
typedef struct { unsigned a; unsigned b; } Res_826DDD10;
typedef struct { char pad[0x74]; int lv; char pad2[0xa8-0x78]; unsigned cnt; char cs[0x1c]; char tab[1]; } Map_826DDD10;
typedef struct { unsigned *key; Res_826DDD10 *out; } Args_826DDD10;

Res_826DDD10 *fn_826DDD10(Res_826DDD10 *out, Map_826DDD10 *m, unsigned *key)
{
  Map_826DDD10 *locked = 0;
  Args_826DDD10 a;
  unsigned c = m->cnt;
  out->a = 1;
  out->b = c;
  m->cnt = m->cnt + 1;
  if (m->lv < 2) {
    locked = m;
    RtlEnterCriticalSection(m->cs);
  }
  a.key = key;
  a.out = out;
  fn_826DBE10(m->tab, m->tab, &a, (*key >> 8) ^ *key);
  if (locked != 0) {
    RtlLeaveCriticalSection(locked->cs);
  }
  return out;
}
