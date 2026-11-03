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
extern unsigned int lbl_82169D7C;


extern char lbl_832635A0[];
typedef struct Node { void *vt; struct Node *next; unsigned data; int idx; } Node;
typedef struct List { Node *head; unsigned char state; } List;
extern Node *fn_82F72318(char *, int, int);

void fn_82F72A00(List *l, unsigned data)
{
  Node *mem;
  Node *n;

  if (data != 0) {
    mem = fn_82F72318(lbl_832635A0, 0x10, 0);
    if (mem != 0) {
      Node *old = l->head;
      mem->data = data;
      mem->idx = -1;
      mem->vt = (void *)&lbl_82169D7C;
      mem->next = old;
      n = mem;
    } else {
      n = 0;
    }
    l->head = n;
    if (n != 0) {
      return;
    }
  }
  l->state = 3;
}
