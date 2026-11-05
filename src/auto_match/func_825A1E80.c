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
extern void fn_822315A0(int);
extern void fn_8265CA20(void *);

typedef struct Vec_825A1E80 { unsigned *begin; unsigned *end; unsigned *cap; } Vec_825A1E80;
typedef struct Node_825A1E80 { struct Node_825A1E80 *next; struct Node_825A1E80 *prev; int pad[2]; unsigned obj; } Node_825A1E80;
typedef struct Obj_825A1E80 { int pad0; Node_825A1E80 *head; int size; int pad1; Vec_825A1E80 vec; } Obj_825A1E80;

void fn_825A1E80(Obj_825A1E80 *param_1)
{
  Vec_825A1E80 *v = &param_1->vec;
  unsigned *p;
  Node_825A1E80 *n, *nx;

  if (v->begin != 0) {
    for (p = v->begin; p != v->end; p++) {
    }
    fn_8265CA20(v->begin);
  }
  v->begin = 0;
  v->end = 0;
  v->cap = 0;
  n = param_1->head->next;
  param_1->head->next = param_1->head;
  param_1->head->prev = param_1->head;
  param_1->size = 0;
  while (n != param_1->head) {
    nx = n->next;
    if (n->obj != 0) {
      fn_822315A0(n->obj);
    }
    fn_8265CA20(n);
    n = nx;
  }
  fn_8265CA20(param_1->head);
}
