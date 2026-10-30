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
extern int fn_827D88A0();
extern int fn_82811400();
extern void *memcpy(void *, const void *, unsigned int);

typedef struct Alloc_VT_827DE1B0 { void *slot0; void *slot1; void *slot2; void *(*allocate)(void *self, unsigned int size, void *hint); } Alloc_VT_827DE1B0;
typedef struct Alloc_827DE1B0 { Alloc_VT_827DE1B0 *vt; } Alloc_827DE1B0;
typedef struct Node_827DE1B0 { struct Node_827DE1B0 *left; struct Node_827DE1B0 *right; } Node_827DE1B0;
typedef struct AllocHolder_827DE1B0 { Alloc_827DE1B0 *alloc; int hint; } AllocHolder_827DE1B0;
typedef struct Tree_827DE1B0 {
  Node_827DE1B0 *head;
  int size;
  AllocHolder_827DE1B0 ah;
} Tree_827DE1B0;

typedef struct Args_827DE1B0 { int key; char data[0x18]; } Args_827DE1B0;

Tree_827DE1B0 * fn_827DE1B0(Tree_827DE1B0 *param_1, int *param_2)
{
  Args_827DE1B0 a;
  AllocHolder_827DE1B0 *ah;
  Node_827DE1B0 *n;

  fn_82811400(a.data, 0x10);
  a.key = *param_2;
  memcpy(a.data, param_2 + 1, 0x18);
  fn_827D88A0(param_1, &a);
  param_1->size = 0;
  ah = &param_1->ah;
  n = (Node_827DE1B0 *)ah->alloc->vt->allocate(ah->alloc, 0x28, &ah->hint);
  param_1->head = n;
  n->left = n;
  param_1->head->right = param_1->head;
  return param_1;
}
