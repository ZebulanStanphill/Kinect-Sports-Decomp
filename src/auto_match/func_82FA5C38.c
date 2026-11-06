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
extern unsigned int lbl_83264218;


typedef struct Node_82FA5C38 { int pad[2]; struct Node_82FA5C38 *prev; void *owner; } Node_82FA5C38;
typedef struct Tbl_82FA5C38 {
  unsigned int top;
  unsigned int mid[24];
  Node_82FA5C38 *heads[][32];
} Tbl_82FA5C38;

void fn_82FA5C38(Tbl_82FA5C38 *param_1,Node_82FA5C38 *param_2,unsigned int param_3,unsigned int param_4)

{
  Node_82FA5C38 *old;

  old = param_1->heads[param_3][param_4];
  param_2->owner = &lbl_83264218;
  param_2->prev = old;
  old->owner = param_2;
  param_1->heads[param_3][param_4] = param_2;
  param_1->top |= 1 << param_3;
  param_1->mid[param_3] |= 1 << param_4;
}
