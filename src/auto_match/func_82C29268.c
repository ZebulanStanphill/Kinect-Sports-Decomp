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
extern int fn_82C10B28(int, int, void *);
typedef struct Ent_82C29268 { int pad[2]; unsigned __int64 t; } Ent_82C29268;
typedef struct Node_82C29268 { Ent_82C29268 *ent; unsigned flag; struct Node_82C29268 *prev; struct Node_82C29268 *next; } Node_82C29268;
typedef struct Sink_82C29268 { int pad[2]; int (*f8)(struct Sink_82C29268 *, Ent_82C29268 *); } Sink_82C29268;
typedef struct List_82C29268 { int pad0[4]; Node_82C29268 *tail; Node_82C29268 *head; unsigned count; int pad1[5]; int x30; Sink_82C29268 *sink; int pad2[15]; int a74; int a78; } List_82C29268;
typedef struct Owner_82C29268 { int pad[0xb]; List_82C29268 *list; } Owner_82C29268;

int fn_82C29268(Owner_82C29268 *param_1,unsigned __int64 param_2)
{
  List_82C29268 *l = param_1->list;
  Node_82C29268 *cur;
  Node_82C29268 *next;
  int r = 0;
  cur = 0;
  if (l->count == 0) return r;
  cur = l->head;
  if (cur != l->tail) {
  do {
    if (cur == 0) return r;
    if (cur->ent->t > param_2) return r;
    next = cur->next;
    if (cur->flag == 0) {
      r = l->sink->f8(l->sink, cur->ent);
      if (r < 0) return r;
      l->a78 = l->a78 - l->a74;
      cur->next->prev = cur->prev;
      if (cur->prev != 0) cur->prev->next = cur->next;
      else l->head = cur->next;
      l->count = l->count - 1;
      if (l->count == 0) { l->tail->prev = 0; l->head = 0; }
      r = fn_82C10B28(l->x30, 0x1e, &cur);
      if (r < 0) return r;
    }
    cur = next;
  } while (next != l->tail);
  }
  return r;
}
