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
typedef struct Node_82D4B6C0 { char pad[0xc]; struct Node_82D4B6C0 *up; char pad2[0x1c - 0x10]; unsigned key; } Node_82D4B6C0;
typedef struct VObj_82D4B6C0 { int (**vt)(struct VObj_82D4B6C0 *, int); } VObj_82D4B6C0;
extern int fn_82D4B3C0(int, int, unsigned, unsigned);

void fn_82D4B6C0(int param_1, int param_2, int param_3, Node_82D4B6C0 *param_4, Node_82D4B6C0 *param_5, VObj_82D4B6C0 *param_6, VObj_82D4B6C0 *param_7, int param_8, int param_9)
{
  int a;
  int b;
  Node_82D4B6C0 *n;
  a = (*(int (**)(VObj_82D4B6C0 *, int))((int)param_6->vt + 0x10))(param_6, param_8);
  if (a == -1) {
    while (param_4->up != 0) param_4 = param_4->up;
    a = param_4->key;
  }
  b = (*(int (**)(VObj_82D4B6C0 *, int))((int)param_7->vt + 0x10))(param_7, param_9);
  if (b == -1) {
    n = param_5;
    while (n->up != 0) n = n->up;
    b = n->key;
  }
  fn_82D4B3C0(param_1, param_2 - 0xc, a, b);
}
