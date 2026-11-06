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
extern void *fn_82C53960(unsigned, unsigned);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
typedef struct Heap_82C562F0 { void *cs; } Heap_82C562F0;
void *fn_82C562F0(Heap_82C562F0 *h, unsigned size)
{
  void *r;
  unsigned n;
  if (size >= 0xfffffffb)
    return 0;
  RtlEnterCriticalSection(h->cs);
  n = (size + 3) & 0xfffffffc;
  if (n < 0xffffffff) {
    void *p = fn_82C53960(n, 0);
    if (p != 0) {
      r = p;
      RtlEnterCriticalSection(h->cs);
      RtlLeaveCriticalSection(h->cs);
    } else {
      r = 0;
    }
  }
  RtlLeaveCriticalSection(h->cs);
  return r;
}
