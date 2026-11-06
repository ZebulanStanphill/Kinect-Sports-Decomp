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
typedef struct Node_82E91590 { struct Node_82E91590 *next; int value; } Node_82E91590;
typedef struct List_82E91590 { Node_82E91590 *head; int pad[3]; int count; } List_82E91590;
int fn_82E91590(List_82E91590 *l, int *out, int idx)
{
  if (out != 0 && idx < l->count) {
    Node_82E91590 *n;
    int i;
    if (idx == -1) idx = l->count - 1;
    n = l->head;
    for (i = 0; i < idx; i++) n = n->next;
    *out = n->value;
    return 1;
  }
  return 0;
}
