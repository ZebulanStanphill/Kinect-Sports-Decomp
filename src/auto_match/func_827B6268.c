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


typedef struct Elem_827B6268 { unsigned v[10]; } Elem_827B6268;
typedef struct Block_827B6268 {
  Elem_827B6268 e[0x7f];
  struct Block_827B6268 *next;
} Block_827B6268;
typedef struct Pool_827B6268 {
  Block_827B6268 *head;
  Block_827B6268 *cur;
  unsigned used;
  Elem_827B6268 *freelist;
  void *heap;
} Pool_827B6268;

Elem_827B6268 *fn_827B6268(Pool_827B6268 *p)
{
  Elem_827B6268 *r;
  unsigned n;
  int k;
  unsigned id[4];
  Block_827B6268 *b;

  r = p->freelist;
  if (r != 0) {
    p->freelist = *(Elem_827B6268 **)r;
  } else {
    n = p->used;
    if (n < 0x7f) {
      k = n + 1;
      r = &p->cur->e[n];
    } else {
      id[0] = 0xc3;
      b = (Block_827B6268 *)fn_8267BED0(p->heap, 0x13dc, id);
      b->next = 0;
      if (p->cur != 0) {
        p->cur->next = b;
      } else {
        p->head = b;
      }
      r = (Elem_827B6268 *)b;
      p->cur = b;
      k = 1;
    }
    p->used = k;
  }
  return r;
}
