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
typedef struct Node { unsigned k; unsigned v; struct Node *next; struct Node *chain; } Node;
typedef struct { int pad; Node *head; } List;
extern void *fn_8265C9E0(int);
extern Node *fn_82E1D978(List *, unsigned);
extern unsigned fn_82E1F7F0(void *);

void fn_82E1E0E8(List *l, void *a, void *b)
{
  unsigned k = fn_82E1F7F0(a);
  unsigned v = fn_82E1F7F0(b);
  Node *f = fn_82E1D978(l, k);
  Node *n;
  Node *mem;
  if (f == 0) {
    mem = (Node *)fn_8265C9E0(0x10);
    if (mem != 0) {
      mem->k = 0;
      mem->v = 0;
      mem->next = 0;
      mem->chain = 0;
      n = mem;
    } else n = 0;
    n->k = k;
    n->v = v;
    n->next = l->head;
    n->chain = 0;
    l->head = n;
  } else {
    mem = (Node *)fn_8265C9E0(0x10);
    if (mem != 0) {
      mem->k = 0;
      mem->v = 0;
      mem->next = 0;
      mem->chain = 0;
      n = mem;
    } else n = 0;
    while (f->chain != 0) f = f->chain;
    f->k = k;
    n->v = v;
    f->chain = n;
  }
}
