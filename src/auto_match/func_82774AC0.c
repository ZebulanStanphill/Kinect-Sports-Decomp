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
extern unsigned int *auStack_20;
extern void *fn_8267BED0(void *, int, unsigned *);


typedef struct Elem_82774AC0 { unsigned v[4]; } Elem_82774AC0;
typedef struct Block_82774AC0 {
  Elem_82774AC0 e[0x7f];
  struct Block_82774AC0 *next;
} Block_82774AC0;
typedef struct Pool_82774AC0 {
  Block_82774AC0 *head;
  Block_82774AC0 *cur;
  unsigned used;
  Elem_82774AC0 *freelist;
  void *heap;
} Pool_82774AC0;

Elem_82774AC0 *fn_82774AC0(Pool_82774AC0 *p)
{
  Elem_82774AC0 *r;
  unsigned n;
  int k;
  unsigned id[4];
  Block_82774AC0 *b;

  r = p->freelist;
  if (r != 0) {
    p->freelist = *(Elem_82774AC0 **)r;
  } else {
    n = p->used;
    if (n < 0x7f) {
      k = n + 1;
      r = &p->cur->e[n];
    } else {
      id[0] = 0xc2;
      b = (Block_82774AC0 *)fn_8267BED0(p->heap, 0x7f4, id);
      b->next = 0;
      if (p->cur != 0) {
        p->cur->next = b;
      } else {
        p->head = b;
      }
      r = (Elem_82774AC0 *)b;
      p->cur = b;
      k = 1;
    }
    p->used = k;
  }
  return r;
}
