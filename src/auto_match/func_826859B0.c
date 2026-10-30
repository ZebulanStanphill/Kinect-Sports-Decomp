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


typedef struct Elem_826859B0 { unsigned v[6]; } Elem_826859B0;
typedef struct Block_826859B0 {
  Elem_826859B0 e[0x7f];
  struct Block_826859B0 *next;
} Block_826859B0;
typedef struct Pool_826859B0 {
  Block_826859B0 *head;
  Block_826859B0 *cur;
  unsigned used;
  Elem_826859B0 *freelist;
  void *heap;
} Pool_826859B0;

Elem_826859B0 *fn_826859B0(Pool_826859B0 *p)
{
  Elem_826859B0 *r;
  unsigned n;
  int k;
  unsigned id[4];
  Block_826859B0 *b;

  r = p->freelist;
  if (r != 0) {
    p->freelist = *(Elem_826859B0 **)r;
  } else {
    n = p->used;
    if (n < 0x7f) {
      k = n + 1;
      r = &p->cur->e[n];
    } else {
      id[0] = 0x8a;
      b = (Block_826859B0 *)fn_8267BED0(p->heap, 0xbec, id);
      b->next = 0;
      if (p->cur != 0) {
        p->cur->next = b;
      } else {
        p->head = b;
      }
      r = (Elem_826859B0 *)b;
      p->cur = b;
      k = 1;
    }
    p->used = k;
  }
  return r;
}
