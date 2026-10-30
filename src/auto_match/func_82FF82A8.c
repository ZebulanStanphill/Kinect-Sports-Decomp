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
typedef struct Node_82FF82A8 {
  struct Node_82FF82A8 *next;
  int a, b;
} Node_82FF82A8;
typedef struct List_82FF82A8 {
  Node_82FF82A8 *head;
  Node_82FF82A8 *tail;
  Node_82FF82A8 *free_;
  int pad[2];
  int count;
} List_82FF82A8;
extern unsigned char fn_83019A10(void);

int *fn_82FF82A8(List_82FF82A8 *l, int *v)
{
  Node_82FF82A8 *n;
  if (fn_83019A10() != 0) {
    if (l->tail == 0) {
      l->head = l->free_;
    } else {
      l->tail->next = l->free_;
    }
    l->tail = l->free_;
    l->free_ = l->free_->next;
    l->tail->next = 0;
    n = l->tail;
    l->count = l->count + 1;
    n->a = v[0];
    n->b = v[1];
    return &n->a;
  }
  return 0;
}
