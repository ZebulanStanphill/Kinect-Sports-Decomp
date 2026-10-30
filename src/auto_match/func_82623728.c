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
extern void fn_82522ED8(void *);
typedef struct Node_82623728 { struct Node_82623728 *prev; struct Node_82623728 *next; } Node_82623728;
typedef struct Obj_82623728 { int pad; Node_82623728 *head; int f8; void *buf; void *bufend; char pad2[0xc]; struct Obj_82623728 *self; } Obj_82623728;

static void unlink(Node_82623728 *n)
{
  Node_82623728 *nx = n->next;
  if (n->prev != 0) {
    n->prev->next = nx;
  }
  if (n->next != 0) {
    n->next->prev = n->prev;
  }
  n->prev = 0;
  n->next = 0;
}

void fn_82623728(Obj_82623728 *o)
{
  Node_82623728 *n;
  Node_82623728 *next;
  o->bufend = o->buf;
  for (n = o->head; n != 0; n = next) {
    next = n->next;
    unlink(n);
    fn_82522ED8(n);
  }
  o->self = o;
  if (o->buf != 0) {
    fn_82522ED8(o->buf);
  }
  o->buf = 0;
  o->bufend = 0;
  o->f8 = 0;
}
