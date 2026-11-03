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


typedef struct Node_825B47E8 Node_825B47E8;
struct Node_825B47E8 { Node_825B47E8 *prev; Node_825B47E8 *next; };
typedef struct { int count; Node_825B47E8 *head; } List_825B47E8;

static __forceinline Node_825B47E8 *Init_825B47E8(Node_825B47E8 *p)
{
  p->prev = 0;
  p->next = 0;
  return p;
}

void fn_825B47E8(List_825B47E8 *l, Node_825B47E8 *p)
{
  Node_825B47E8 *n;
  Node_825B47E8 *h;
  Node_825B47E8 *cur;
  Node_825B47E8 *nx;
  n = p ? Init_825B47E8(p) : 0;
  h = l->head;
  if (h == 0 || n <= h) {
    n->next = h;
    if (l->head != 0) {
      l->head->prev = n;
    }
    l->head = n;
  } else {
    cur = h;
    while (cur->next != 0 && cur->next < n) {
      cur = cur->next;
    }
    nx = cur->next;
    n->prev = cur;
    n->next = nx;
    cur->next = n;
    if (n->next != 0) {
      n->next->prev = n;
    }
  }
  l->count = l->count + 1;
}
