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
typedef struct Node_83019B78 { unsigned next; int value; } Node_83019B78;
typedef struct List_83019B78 { unsigned head; unsigned tail; unsigned free; int f0c; int f10; int count; } List_83019B78;
extern unsigned char fn_830198B8(List_83019B78 *);
#define NP(x) ((Node_83019B78 *)(x))
int *fn_83019B78(List_83019B78 *l, int v)
{
  Node_83019B78 *n;
  int *r;
  if (fn_830198B8(l) != 0) {
    if (l->tail == 0) l->head = l->free;
    else NP(l->tail)->next = l->free;
    n = NP(l->free);
    l->tail = l->free;
    l->free = n->next;
    NP(l->tail)->next = 0;
    l->count = l->count + 1;
    r = &NP(l->tail)->value;
    NP(l->tail)->value = v;
  } else {
    r = 0;
  }
  return r;
}
