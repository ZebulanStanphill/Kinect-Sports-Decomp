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
typedef struct Node_82B6EAE8 {
  unsigned int id;
  unsigned int a;
  unsigned int b;
  struct Node_82B6EAE8 *next;
} Node_82B6EAE8;
typedef struct List_82B6EAE8 {
  Node_82B6EAE8 *head;
  Node_82B6EAE8 *tail;
  int count;
} List_82B6EAE8;
typedef struct Alloc_82B6EAE8 {
  void *heap;
  void *(*alloc)(void *, int);
} Alloc_82B6EAE8;
extern unsigned int fn_82B6EA60(Alloc_82B6EAE8 *);

unsigned int fn_82B6EAE8(Alloc_82B6EAE8 *al, List_82B6EAE8 *l, unsigned int a, unsigned int b)
{
  Node_82B6EAE8 *p;
  Node_82B6EAE8 *n;
  unsigned int id;

  for (p = l->head; p != 0; p = p->next) {
    if (p->a == a && p->b == b) {
      return p->id;
    }
  }
  n = (Node_82B6EAE8 *)al->alloc(al->heap, 0x10);
  id = fn_82B6EA60(al);
  n->a = a;
  n->id = id;
  n->b = b;
  if (l->head == 0) {
    l->head = n;
  } else {
    l->tail->next = n;
  }
  l->tail = n;
  l->count = l->count + 1;
  return id;
}
