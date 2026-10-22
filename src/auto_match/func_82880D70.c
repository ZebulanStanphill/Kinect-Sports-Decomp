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
typedef struct Node { struct Node *left, *parent, *right; int key; char *val; } Node;
typedef struct { int alloc; Node *head; int size; } Tree;
extern void fn_82880040(void *a, void *b);
extern void fn_828EA790(Node **it);
extern void (*lbl_832129D0)(void);
extern Tree lbl_83212A00;

void fn_82880D70(void)
{
  Node *it;
  Node *end;

  end = lbl_83212A00.head;
  it = end->left;
  while (it != end) {
    if (it->val != 0) {
      fn_82880040(it->val + 0xa4, it->val + 0x98);
      end = lbl_83212A00.head;
    }
    fn_828EA790(&it);
  }
  if (lbl_832129D0 != 0) {
    (*lbl_832129D0)();
  }
}
